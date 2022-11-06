#include "myMainWindow.h"
#include "ui_myMainWindow.h"

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    tcpClient=new QTcpSocket(this);//创建socket变量
    labSocketState=new QLabel("Socket状态:");//状态栏标签
    labSocketState->setMinimumWidth(150);
    ui->statusbar->addWidget(labSocketState);

    QString localIP=getLocalIP();
    this->setWindowTitle(this->windowTitle()+"----本机IP:"+localIP);
    ui->comboServer->addItem(localIP);

    connect(tcpClient,&QTcpSocket::connected,this,&myMainWindow::onConnected);
    connect(tcpClient,&QTcpSocket::disconnected,this,&myMainWindow::onDisconnected);
    connect(tcpClient,&QTcpSocket::stateChanged,this,&myMainWindow::onSocketStateChange);
    connect(tcpClient,&QTcpSocket::readyRead,this,&myMainWindow::onSocketReadyRead);

}

myMainWindow::~myMainWindow()
{
    delete ui;
}

void myMainWindow::on_actConnect_triggered()
{
    //连接到服务器按钮
    QString addr=ui->comboServer->currentText();
    quint16 port=ui->spinBox->value();
    tcpClient->connectToHost(addr,port);
}

void myMainWindow::on_actDisconnect_triggered()
{
    //断开连接按钮
    if(tcpClient->state()==QAbstractSocket::ConnectedState){
        tcpClient->disconnectFromHost();
    }
}

void myMainWindow::onConnected()
{
    //connected()信号槽函数
    ui->plainTextEdit->appendPlainText("**已连接到服务器");
    ui->plainTextEdit->appendPlainText("**peer address:"+tcpClient->peerAddress().toString());
    ui->plainTextEdit->appendPlainText("**peer port:"+QString::number(tcpClient->peerPort()));
    ui->actConnect->setEnabled(false);
    ui->actDisconnect->setEnabled(true);
}

void myMainWindow::onDisconnected()
{
    //dsconnected()信号槽函数
    ui->plainTextEdit->appendPlainText("**已断开与服务器的连接");
    ui->actConnect->setEnabled(true);
    ui->actDisconnect->setEnabled(false);
}

void myMainWindow::on_actClear_triggered()
{
    ui->plainTextEdit->clear();
}

void myMainWindow::on_actExit_triggered()
{
    this->close();
}

void myMainWindow::on_btnSend_clicked()
{
    //发送数据
    QString msg=ui->lineEdit->text();
    ui->plainTextEdit->appendPlainText("[out] "+msg);
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
    QByteArray str=msg.toUtf8();
    str.append('\n');
    tcpClient->write(str);
}

void myMainWindow::onSocketReadyRead()
{
    //readyread()信号槽函数
    while (tcpClient->canReadLine()) {
        ui->plainTextEdit->appendPlainText("[in] "+tcpClient->readLine());
    }
}

void myMainWindow::onSocketStateChange(QAbstractSocket::SocketState socketState)
{
    //socket状态变化时
    switch(socketState){
    case QAbstractSocket::UnconnectedState:
        labSocketState->setText("socket 状态: UnconnectedState");
        break;
    case QAbstractSocket::HostLookupState:
        labSocketState->setText("socket 状态: HostLookupState");
        break;
    case QAbstractSocket::ConnectingState:
        labSocketState->setText("socket 状态: ConnectingState");
        break;
    case QAbstractSocket::ConnectedState:
        labSocketState->setText("socket 状态: ConnectedState");
        break;
    case QAbstractSocket::BoundState:
        labSocketState->setText("socket 状态: BoundState");
        break;
    case QAbstractSocket::ClosingState:
        labSocketState->setText("socket 状态: ClosingState");
        break;
    case QAbstractSocket::ListeningState:
        labSocketState->setText("socket 状态: ListeningState");
    }
}
QString myMainWindow::getLocalIP()
{
    //获取本机IPV4地址
    QString hostName=QHostInfo::localHostName();
    QHostInfo hostInfo=QHostInfo::fromName(hostName);

    QString localIP="";
    QList<QHostAddress> addList=hostInfo.addresses();
    if(!addList.isEmpty()){
        for(int i=0;i<addList.count();i++){
            QHostAddress aHost=addList.at(i);
            if(QAbstractSocket::IPv4Protocol==aHost.protocol()){
                localIP=aHost.toString();
                break;
            }
        }
        return localIP;
    }
}
