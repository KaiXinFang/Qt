#include "QWDialog.h"
#include "ui_QWDialog.h"

QWDialog::QWDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QWDialog)
{
    ui->setupUi(this);

    connect(ui->rBtnBlue,&QRadioButton::clicked,this,&QWDialog::setTextFontColor);
    connect(ui->rBtnRed,&QRadioButton::clicked,this,&QWDialog::setTextFontColor);
    connect(ui->rBtnBlack,&QRadioButton::clicked,this,&QWDialog::setTextFontColor);
}

QWDialog::~QWDialog()
{
    delete ui;
}


void QWDialog::on_chkBoxUnder_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}

void QWDialog::on_chkBoxItalic_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}

void QWDialog::on_chkBoxBold_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}

void QWDialog::setTextFontColor()
{
    QPalette plet=ui->plainTextEdit->palette();
    if(ui->rBtnBlack->isChecked()){
        plet.setColor(QPalette::Text,Qt::black);
    }
    else if(ui->rBtnBlue->isChecked()){
        plet.setColor(QPalette::Text,Qt::blue);
    }
    else if(ui->rBtnRed->isChecked()){
        plet.setColor(QPalette::Text,Qt::red);
    }
    else{
        plet.setColor(QPalette::Text,Qt::black);
    }
    ui->plainTextEdit->setPalette(plet);
}









