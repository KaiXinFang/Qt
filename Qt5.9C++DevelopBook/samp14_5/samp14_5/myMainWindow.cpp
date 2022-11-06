#include "myMainWindow.h"
#include "ui_myMainWindow.h"

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
}

myMainWindow::~myMainWindow()
{
    delete ui;
}


void myMainWindow::on_btnDefaultPath_clicked()
{
    //缺省文件路径
    QString curPath=QDir::currentPath();
    QDir dir(curPath);
    QString sub="temp";
    dir.mkdir(sub);
    ui->editPath->setText(curPath+"/"+sub+"/");
}


void myMainWindow::on_btnDownload_clicked()
{
    //开始下载
    QString urlSpec=ui->editURL->text().trimmed();//trimmed()可以去除开头和结尾的空白字符
    if(urlSpec.isEmpty()){
        QMessageBox::information(this,"错误","请指定需要下载的URL");
        return;
    }

    QUrl newUrl=QUrl::fromUserInput(urlSpec);
    if(!newUrl.isValid()){
        QMessageBox::information(this,"错误",QString("无效URL:%1 \n 错误信息: %2").arg(urlSpec,newUrl.errorString()));
        return;
    }

    QString tempDir=ui->editPath->text().trimmed();
    if(tempDir.isEmpty()){
        QMessageBox::information(this,"错误","请指定保存下载文件的目录");
        return;
    }

    QString fullFileName=tempDir+newUrl.fileName();
    if(QFile::exists(fullFileName)){
        QFile::remove(fullFileName);
    }

    downloadedFile=new QFile(fullFileName);
    if(!downloadedFile->open(QIODevice::WriteOnly)){
        QMessageBox::information(this,"错误","临时文件打开错误");
        return;
    }

    ui->btnDownload->setEnabled(false);
    reply=networkManager.get(QNetworkRequest(newUrl));
    connect(reply,&QNetworkReply::finished,this,&myMainWindow::on_finished);
    connect(reply,&QNetworkReply::readyRead,this,&myMainWindow::on_readyRead);
    connect(reply,&QNetworkReply::downloadProgress,this,&myMainWindow::on_downloadProgress);
}

void myMainWindow::on_finished()
{
    //网络响应结束
    QFileInfo fileInfo;
    fileInfo.setFile(downloadedFile->fileName());
    downloadedFile->close();
    delete downloadedFile;
    downloadedFile=Q_NULLPTR;
    reply->deleteLater();
    reply=Q_NULLPTR;
    if(ui->checkOpen->isChecked()){
        QDesktopServices::openUrl(QUrl::fromLocalFile(fileInfo.absoluteFilePath()));
        ui->btnDownload->setEnabled(true);
    }
}

void myMainWindow::on_readyRead()
{
    //读取下载的数据
    downloadedFile->write(reply->readAll());
}

void myMainWindow::on_downloadProgress(qint64 bytesRead,qint64 totalBytes)
{
    //下载进程
    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(bytesRead);
}
