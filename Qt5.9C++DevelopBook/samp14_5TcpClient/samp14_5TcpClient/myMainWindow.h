#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QLabel>
#include <QCloseEvent>
#include <QString>
#include <QAbstractSocket>
#include <QHostAddress>
#include <QHostInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE

class myMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QTcpSocket *tcpClient;
    QLabel *labSocketState;//状态栏显示标签
    QString getLocalIP();//获取本机IP地址
protected:
    //void closeEvent(QCloseEvent *event);

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();

private slots:
    //自定义槽函数
    void onConnected();
    void onDisconnected();
    void onSocketStateChange(QAbstractSocket::SocketState socketState);
    void onSocketReadyRead();//读取socket传入的数据
    void on_actConnect_triggered();

    void on_actDisconnect_triggered();

    void on_actClear_triggered();

    void on_actExit_triggered();

    void on_btnSend_clicked();

private:
    Ui::myMainWindow *ui;
};
#endif // MYMAINWINDOW_H
