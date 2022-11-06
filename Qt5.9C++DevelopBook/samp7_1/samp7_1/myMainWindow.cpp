#include "myMainWindow.h"
#include "ui_myMainWindow.h"

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
}

myMainWindow::~myMainWindow()
{
    delete ui;
}

bool myMainWindow::openTextByIODevice(const QString &aFileName)
{
    //用IODevice方式打开文本文件
    QFile aFile(aFileName);
    if(!aFile.exists())
        return false;
    if(!aFile.open(QIODevice::ReadOnly|QIODevice::Text))
        return false;
    ui->textEditDevice->setPlainText(aFile.readAll());
    aFile.close();
    ui->tabWidget->setCurrentIndex(0);
    return true;
}


void myMainWindow::on_actOpen_IODevice_triggered()
{
    //打开文件
    QString curPath=QDir::currentPath();
    QString dlgTitle="打开一个文件";
    QString filter="程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)";
    QString aFileName=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);//获取一个文件的名字
    if(aFileName.isEmpty())
        return;
    openTextByIODevice(aFileName);
}

void myMainWindow::on_actSave_IODevice_triggered()
{
    QString curPath=QDir::currentPath();
    QString dlgTitle="另存为一个文件";
    QString filter="h文件(*.h);;c++文件(*.cpp);;所有文件(*.*)";
    QString aFileName=QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);
    if(aFileName.isEmpty())
        return;
    saveTextByIODevice(aFileName);
}

bool myMainWindow::saveTextByIODevice(const QString &aFileName)
{
    //用IODevice方式保存文件
    QFile aFile(aFileName);
    if(!aFile.open(QIODevice::WriteOnly|QIODevice::Text))
        return false;
    QString str=ui->textEditDevice->toPlainText();//整个内容作为字符串
    QByteArray strBytes=str.toUtf8();//转换为字节数组
    aFile.write(strBytes,strBytes.length());//写入文件
    aFile.close();
    ui->tabWidget->setCurrentIndex(0);
    return true;
}

void myMainWindow::on_actOpen_OnStream_triggered()
{
    //用QStream打开文件
    QString curPath=QDir::currentPath();
    QString dlgTitle="打开一个文件";
    QString filter="文本文件(*.txt);;所有文件(*.*)";
    QString aFileName=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(aFileName.isEmpty())
        return;
    openTextByStream(aFileName);
}

bool myMainWindow::openTextByStream(const QString &aFileName)
{
    QFile aFile(aFileName);
    if(!aFile.exists())
        return false;
    if(!aFile.open(QIODevice::ReadOnly|QIODevice::Text))
        return false;
    QTextStream aStream(&aFile);//用文本流读取文件
    aStream.setAutoDetectUnicode(true);//设置自动检测Unicode，才能显示汉字
    ui->textEditStream->setPlainText(aStream.readAll());
    aFile.close();
    ui->tabWidget->setCurrentIndex(1);
    return true;
}

void myMainWindow::on_actSave_OnStream_triggered()
{
    //用QStream保存文件
    QString curPath=QDir::currentPath();
    QString dlgTitle="打开一个文件";
    QString filter="文本文件(*.txt);;所有文件(*.*)";
    QString aFileName=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(aFileName.isEmpty())
        return;
    saveTextByStream(aFileName);
}

bool myMainWindow::saveTextByStream(const QString &aFileName)
{
    //用Stream方式保存文件
    QFile aFile(aFileName);
    if(!aFile.open(QIODevice::WriteOnly|QIODevice::Text))
        return false;
    QTextStream aStream(&aFile);//用文本流读取文件
    aStream.setAutoDetectUnicode(true);//设置自动检测Unicode，才能显示汉字
    QString str=ui->textEditDevice->toPlainText();//整个内容作为字符串
    aStream<<str;
    aFile.close();
    return true;
}
