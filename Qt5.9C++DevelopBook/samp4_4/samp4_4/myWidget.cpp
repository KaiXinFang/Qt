#include "myWidget.h"
#include "ui_myWidget.h"

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myWidget)
{
    ui->setupUi(this);
    connect(ui->SLiderGreen,SIGNAL(valueChanged(int)),this,SLOT(on_SliderRed_valueChanged(int)));
    connect(ui->SliderBlue,SIGNAL(valueChanged(int)),this,SLOT(on_SliderRed_valueChanged(int)));
    connect(ui->SliderAlpha,SIGNAL(valueChanged(int)),this,SLOT(on_SliderRed_valueChanged(int)));
}

myWidget::~myWidget()
{
    delete ui;
}


void myWidget::on_SliderRed_valueChanged(int value)
{
    Q_UNUSED(value);
    QColor color;
    int r=ui->SliderRed->value();
    int g=ui->SLiderGreen->value();
    int b=ui->SliderBlue->value();
    int alpha=ui->SliderAlpha->value();
    color.setRgb(r,g,b,alpha);
    QPalette pal=ui->textEdit->palette();
    pal.setColor(QPalette::Base,color);//设置底色
    ui->textEdit->setPalette(pal);
}

void myWidget::on_dial_valueChanged(int value)
{
    //设置LCD的显示值等于Dial的值
    ui->LCDDispaly->display(value);
}

void myWidget::on_rbtDec_clicked()
{
    ui->LCDDispaly->setDigitCount(3);
    ui->LCDDispaly->setDecMode();
}

void myWidget::on_rbtBin_clicked()
{
    ui->LCDDispaly->setDigitCount(8);
    ui->LCDDispaly->setBinMode();
}

void myWidget::on_rbtOct_clicked()
{
    ui->LCDDispaly->setDigitCount(4);
    ui->LCDDispaly->setOctMode();
}

void myWidget::on_rbtHex_clicked()
{
    ui->LCDDispaly->setDigitCount(3);
    ui->LCDDispaly->setHexMode();
}
