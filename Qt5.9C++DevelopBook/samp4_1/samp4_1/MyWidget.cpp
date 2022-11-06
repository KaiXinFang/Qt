#include "MyWidget.h"
#include "ui_MyWidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}


void MyWidget::on_btnCal_clicked()
{
    QString str=ui->editNum->text();
    int num=str.toInt();
    str=ui->editPrice->text();
    float price=str.toFloat();
    float total=num*price;
    str=str.asprintf("%.2f",total);
    ui->editTotal->setText(str);
}

void MyWidget::on_btnDec_clicked()
{
    //十进制转换成其他进制
    QString str=ui->editDec->text();
    int val=str.toInt();
    str=str.setNum(val,16);//转换成16进制
    str=str.toUpper();
    ui->editHex->setText(str);

    str=str.setNum(val,2);//转换成2进制
    ui->editBin->setText(str);
}


void MyWidget::on_btnBin_clicked()
{
    //读取二进制数，转换为其它进制的数
    QString str=ui->editBin->text();
    bool ok;
    int val=str.toInt(&ok,2);
    str=QString::number(val,10);
    ui->editDec->setText(str);

    str=str.setNum(val,16);
    str=str.toUpper();
    ui->editHex->setText(str);
}
