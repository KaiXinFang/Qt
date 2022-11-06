#include "myDialog.h"
#include "ui_myDialog.h"

void myDialog::closeEvent(QCloseEvent *event)
{
    if(threadA.isRunning()){
        threadA.stopThread();
        threadA.wait();
    }
    event->accept();
}

void myDialog::onthreadA_started()
{//启动线程显示状态
    ui->labA->setText("Thread状态:thread started");
}

void myDialog::onthreadA_finished()
{//结束线程显示状态
    ui->labA->setText("Thread状态:thread finished");
}

void myDialog::onTimeOut()
{
    //定时器溢出处理函数
    int tmpSeq=0,tmeValue=0;
    bool valid=threadA.readValue(&tmpSeq,&tmeValue);
    if(valid&&(tmpSeq!=mSeq)){
        mSeq=tmpSeq;
        mDiceValue=tmeValue;
        QString str=QString::asprintf("第%d次掷骰子，点数为:%d",mSeq,mDiceValue);
        ui->plainTextEdit->appendPlainText(str);
        QPixmap pic;
        QString filename=QString::asprintf(":/img/image/d%d.jpg",mDiceValue);
        pic.load(filename);
        ui->labPic->setPixmap(pic);
        ui->labPic->setScaledContents(true);
    }
}

//void myDialog::onthreadA_newValue(int seq, int diceValue)
//{
//    QString str=QString::asprintf("第%d次掷骰子，点数为:%d",seq,diceValue);
//    ui->plainTextEdit->appendPlainText(str);
//    QPixmap pic;
//    QString filename=QString::asprintf(":/img/image/d%d.jpg",diceValue);
//    pic.load(filename);
//    ui->labPic->setPixmap(pic);
//    ui->labPic->setScaledContents(true);
//}

myDialog::myDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::myDialog)
{
    ui->setupUi(this);
    connect(&threadA,&QThread::started,this,&myDialog::onthreadA_started);
    connect(&threadA,&QThread::finished,this,&myDialog::onthreadA_finished);
    //connect(&threadA,SIGNAL(newValue(int,int)),this,SLOT(onthreadA_newValue(int,int)));
    connect(&mTimer,&QTimer::timeout,this,&myDialog::onTimeOut);
}

myDialog::~myDialog()
{
    delete ui;
}




void myDialog::on_btnStartThread_clicked()
{//启动线程
    mSeq=0;
    threadA.start();
    ui->btnStartThread->setEnabled(false);
    ui->btnStopThread->setEnabled(true);
    ui->btnDiceBegin->setEnabled(true);
    ui->btnDiceEnd->setEnabled(false);
}

void myDialog::on_btnDiceBegin_clicked()
{//开始掷骰子
    threadA.diceBegin();
    mTimer.start(100);
    ui->btnDiceBegin->setEnabled(false);
    ui->btnDiceEnd->setEnabled(true);
}


void myDialog::on_btnDiceEnd_clicked()
{//暂停掷骰子
    threadA.dicePause();
    mTimer.stop();
    ui->btnDiceBegin->setEnabled(true);
    ui->btnDiceEnd->setEnabled(false);
}

void myDialog::on_btnStopThread_clicked()
{//结束线程
    threadA.stopThread();
    threadA.wait();
    ui->btnStartThread->setEnabled(true);
    ui->btnStopThread->setEnabled(false);
    ui->btnDiceBegin->setEnabled(false);
    ui->btnDiceEnd->setEnabled(false);
}

void myDialog::on_btnClear_clicked()
{//清除文本
    ui->plainTextEdit->clear();
}
