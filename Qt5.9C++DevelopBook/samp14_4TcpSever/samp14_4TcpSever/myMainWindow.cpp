#include "myMainWindow.h"
#include "ui_myMainWindow.h"

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    labListen=new QLabel("监听状态:");
    labListen->setMinimumWidth(150);
    ui->statusbar->addWidget(labListen);

    labSocketState=new QLabel("Socket状态:");
    labSocketState->setMinimumWidth(150);
    ui->statusbar->addWidget(labSocketState);

    QString localIP=getLocalIP();//本机IP
    this->setWindowTitle(this->windowTitle()+"----本机IP:"+localIP);
    ui->comboIP->addItem(localIP);

    tcpServer=new QTcpServer(this);
    connect(tcpServer,&QTcpServer::newConnection,this,&myMainWindow::onNewConnection);
}

myMainWindow::~myMainWindow()
{
    delete ui;
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

void myMainWindow::onNewConnection()
{
    //监听到有客户端连接，则执行此槽函数
    tcpSocket=tcpServer->nextPendingConnection();//获取Socket

    connect(tcpSocket,&QTcpSocket::connected,this,&myMainWindow::onClientConnected);
    onClientConnected();
    connect(tcpSocket,&QTcpSocket::disconnected,this,&myMainWindow::onClientDisConnected);
    connect(tcpSocket,&QTcpSocket::stateChanged,this,&myMainWindow::onSocketStateChange);
    onSocketStateChange(tcpSocket->state());
    connect(tcpSocket,&QTcpSocket::readyRead,this,&myMainWindow::onSocketReadyRead);
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

void myMainWindow::onClientConnected()
{
    //客户端接入时
    ui->plainTextEdit->appendPlainText("**client socket connected");
    ui->plainTextEdit->appendPlainText("**peer address:"+tcpSocket->peerAddress().toString());
    ui->plainTextEdit->appendPlainText("**peer port:"+QString::number(tcpSocket->peerPort()));
}

void myMainWindow::onClientDisConnected()
{
    //客户端断开连接时
    ui->plainTextEdit->appendPlainText("**client socket disconnected");
    tcpSocket->deleteLater();
}

void myMainWindow::onSocketReadyRead()
{
    //读取缓冲区行文本
    while (tcpSocket->canReadLine()) {
        ui->plainTextEdit->appendPlainText("[in] "+tcpSocket->readLine());
    }
}


void myMainWindow::on_actStart_triggered()
{
    //开始监听
    QString IP=ui->comboIP->currentText();//IP地址
    quint16 port=ui->spinPort->value();//端口
    QHostAddress addr(IP);

    tcpServer->listen(addr,port);//开始监听

    ui->plainTextEdit->appendPlainText("**服务器地址:"+tcpServer->serverAddress().toString());
    ui->plainTextEdit->appendPlainText("**服务器端口:"+QString::number(tcpServer->serverPort()));
    ui->actStart->setEnabled(false);
    ui->actStop->setEnabled(true);
    labListen->setText("监听状态：正在监听");
}

void myMainWindow::on_actStop_triggered()
{
    //停止监听
    if(tcpServer->isListening()){
        tcpServer->close();
        ui->actStart->setEnabled(true);
        ui->actStop->setEnabled(false);
        labListen->setText("监听状态:已停止监听");
    }
}

void myMainWindow::on_btnSend_clicked()
{
    //发送一行字符串，以换行符结束
    QString msg=ui->editMsg->text();
    ui->plainTextEdit->appendPlainText("[out] "+msg);
    ui->editMsg->clear();
    ui->editMsg->setFocus();//设置鼠标焦点位置

    QByteArray str=msg.toUtf8();
    str.append('\n');//添加一个换行符
    tcpSocket->write(str);
}
