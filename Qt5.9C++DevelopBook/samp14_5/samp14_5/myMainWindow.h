#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QFile>
#include <QString>
#include <QDir>
#include <QMessageBox>
#include <QDesktopServices>


QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE

class myMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QNetworkAccessManager networkManager;//网络管理
    QNetworkReply *reply;//网络响应
    QFile *downloadedFile;//下载保存时的临时文件
private slots:
    //自定义槽函数
    void on_finished();
    void on_readyRead();
    void on_downloadProgress(qint64 bytesRead,qint64 totalBytes);

    void on_btnDefaultPath_clicked();

    void on_btnDownload_clicked();

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();

private:
    Ui::myMainWindow *ui;
};
#endif // MYMAINWINDOW_H
