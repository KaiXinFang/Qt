#include "myWidget.h"
#include "ui_myWidget.h"

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myWidget)
{
    ui->setupUi(this);
    fTimer=new QTimer();
    fTimer->stop();
    fTimer->setInterval(1000);
    connect(fTimer,&QTimer::timeout,this,&myWidget::on_timer_timeout);
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_timer_timeout()
{
    //定时器中断响应
    QTime curtime=QTime::currentTime();
    ui->lcdHour->display(curtime.hour());
    ui->lcdMin->display(curtime.minute());
    ui->lcdSec->display(curtime.second());
    int val=ui->progressBar->value();
    val++;
    if(val>100)
        val=0;
    ui->progressBar->setValue(val);
}


void myWidget::on_pushButton_clicked()
{
    QDateTime curDateTime=QDateTime::currentDateTime();
    ui->timeEdit->setTime(curDateTime.time());
    ui->editTime->setText(curDateTime.toString("hh:mm:ss"));
    ui->dateEdit->setDate(curDateTime.date());
    ui->editDate->setText(curDateTime.toString("yyyy-MM-dd"));
    ui->dateTimeEdit->setDateTime(curDateTime);
    ui->editTimeDate->setText(curDateTime.toString("yyyy-MM-dd hh:mm:ss"));
}

void myWidget::on_btnSetDateTime_clicked()
{
    QString str=ui->editTimeDate->text();
    str=str.trimmed();
    if(!str.isEmpty()){
        QDateTime dateTime=QDateTime::fromString(str,"yyyy-MM-dd hh:mm:ss");
        ui->dateTimeEdit->setDateTime(dateTime);
    }
}

void myWidget::on_calendarWidget_selectionChanged()
{
    QDate dt=ui->calendarWidget->selectedDate();
    QString str=dt.toString("yyyy-MM-dd");
    ui->editClendarWidget->setText(str);
}

void myWidget::on_btnStart_clicked()
{
    fTimer->start();
    fTimeCounter.start();
    ui->btnStart->setEnabled(false);
    ui->btnStop->setEnabled(true);
    ui->btnSetIntv->setEnabled(false);
}

void myWidget::on_btnStop_clicked()
{
    fTimer->stop();
    int tmMsec=fTimeCounter.elapsed();
    int ms=tmMsec%1000;
    int sec=tmMsec/1000;
    QString str=QString::asprintf("流逝时间: %d 秒，%d 毫秒",sec,ms);
    ui->labElapsTime->setText(str);
    ui->btnStart->setEnabled(true);
    ui->btnStop->setEnabled(false);
    ui->btnSetIntv->setEnabled(true);
}
