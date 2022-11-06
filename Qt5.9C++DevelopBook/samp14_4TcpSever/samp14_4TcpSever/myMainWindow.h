#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>
#include <QHostInfo>
#include <QHostAddress>
#include <QList>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE

class myMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel *labListen;//状态栏标签
    QLabel *labSocketState;//状态栏标签
    QTcpServer *tcpServer;//TCP服务器
    QTcpSocket *tcpSocket;//TCP通信的Socket
    QString getLocalIP();//获取本机IP地址
protected:
    //void closeEvent(QCloseEvent *event);
private slots:
    //自定义槽函数
    void onNewConnection();//QTcpSever的newconnection()信号
    void onSocketStateChange(QAbstractSocket::SocketState socketState);
    void onClientConnected();//Client Socket connected
    void onClientDisConnected();//Client Socket disconnected
    void onSocketReadyRead();//读取socket传入的数据

    void on_actStart_triggered();

    void on_actStop_triggered();

    void on_btnSend_clicked();

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();

private:
    Ui::myMainWindow *ui;
};
#endif // MYMAINWINDOW_H
