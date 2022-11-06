#include "myDialog.h"
#include "ui_myDialog.h"

myDialog::myDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::myDialog)
{
    ui->setupUi(this);
}

myDialog::~myDialog()
{
    delete ui;
}

QString myDialog::protocolName(QAbstractSocket::NetworkLayerProtocol protocol)
{
    //通过协议类型返回协议名称
    switch (protocol) {
    case QAbstractSocket::IPv4Protocol:
        return "IPv4 Protocol";
    case QAbstractSocket::IPv6Protocol:
        return "IPv6 Protocol";
    case QAbstractSocket::AnyIPProtocol:
        return "Any IP Protocol";
    default:
        return "Unknown NetWork Layer Protocol";
    }
}


void myDialog::on_btnGetHostInfo_clicked()
{
    //QHostInfo获取主机信息
    QString hostName=QHostInfo::localHostName();//本地主机名
    ui->plainTextEdit->appendPlainText("本地主机名:"+hostName+"\n");
    QHostInfo hostInfo=QHostInfo::fromName(hostName);//本机IP地址

    QList<QHostAddress> addList=hostInfo.addresses();//IP地址列表
    if(!addList.isEmpty()){
        for(int i=0;i<addList.count();i++){
            QHostAddress aHost=addList.at(i);
            bool show=ui->chkOnlyIPv4->isChecked();
            if(show){
                show=(QAbstractSocket::IPv4Protocol==aHost.protocol());
            }else{
                show=true;
            }
            if(show){
                ui->plainTextEdit->appendPlainText("协议:"+protocolName(aHost.protocol()));
                ui->plainTextEdit->appendPlainText("本机IP地址:"+aHost.toString());
                ui->plainTextEdit->appendPlainText("");
            }
        }
    }

}

void myDialog::on_btnLookUp_clicked()
{
    //查找主机信息
    QString hostName=ui->editHost->text();// 主机名
    ui->plainTextEdit->appendPlainText("正在查找主机信息:"+hostName);
    QHostInfo::lookupHost(hostName,this,&myDialog::lookedUpHostInfo);
}

void myDialog::lookedUpHostInfo(const QHostInfo &host)
{
    //查找主机信息的槽函数
    QList<QHostAddress> addList=host.addresses();
    if(!addList.isEmpty()){
        for(int i=0;i<addList.count();i++){
            QHostAddress aHost=addList.at(i);
            bool show=ui->chkOnlyIPv4->isChecked();
            if(show){
                show=QAbstractSocket::IPv4Protocol==aHost.protocol();
            }else{
                show=true;
            }
            if(show){
                ui->plainTextEdit->appendPlainText("协议:"+protocolName(aHost.protocol()));
                ui->plainTextEdit->appendPlainText(aHost.toString());
            }
        }
    }
}

void myDialog::on_btnClearText_clicked()
{
    ui->plainTextEdit->clear();
}

void myDialog::on_btnALLInterface_clicked()
{
    //QNetworkInterface::allInterfaces()函数的使用
    QList<QNetworkInterface> list=QNetworkInterface::allInterfaces();
    for(int i=0;i<list.count();i++){
        QNetworkInterface aInterface=list.at(i);
        if(!aInterface.isValid())
            continue;
        ui->plainTextEdit->appendPlainText("设备名称:"+aInterface.humanReadableName());
        ui->plainTextEdit->appendPlainText("硬件地址:"+aInterface.hardwareAddress());
        QList<QNetworkAddressEntry> entryList=aInterface.addressEntries();
        for(int j=0;j<entryList.count();j++){
            QNetworkAddressEntry aEntry=entryList.at(j);
            ui->plainTextEdit->appendPlainText("IP地址:"+aEntry.ip().toString());
            ui->plainTextEdit->appendPlainText("子网掩码:"+aEntry.netmask().toString());
            ui->plainTextEdit->appendPlainText("广播地址:"+aEntry.broadcast().toString()+"\n");
        }
        ui->plainTextEdit->appendPlainText("\n");
    }
}

void myDialog::on_btnDetail_clicked()
{
    //QNetworkInterface::allAddresses()函数的使用
    QList<QHostAddress> addList=QNetworkInterface::allAddresses();
    if(!addList.isEmpty()){
        for(int i=0;i<addList.count();i++){
            QHostAddress aHost=addList.at(i);
            bool show=ui->chkOnlyIPv4->isChecked();
            if(show)
                show=QAbstractSocket::IPv4Protocol==aHost.protocol();
            else
                show=true;
            if(show){
                ui->plainTextEdit->appendPlainText("协议:"+protocolName(aHost.protocol()));
                ui->plainTextEdit->appendPlainText("IP地址:"+aHost.toString());
                ui->plainTextEdit->appendPlainText("");
            }
        }
    }
}
