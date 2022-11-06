#include "MyDialog.h"

void MyDialog::iniUI()
{
    chkBoxBold=new QCheckBox("Bold");
    chkBoxItalic=new QCheckBox("Italic");
    chkBoxUnder=new QCheckBox("Underlin");
    QHBoxLayout *HLay1=new QHBoxLayout();
    HLay1->addWidget(chkBoxBold);
    HLay1->addWidget(chkBoxItalic);
    HLay1->addWidget(chkBoxUnder);

    rBtnBlack=new QRadioButton("Black");
    rBtnBlack->setChecked(true);
    rBtnBlue=new QRadioButton("Blue");
    rBtnRed=new QRadioButton("Red");
    QHBoxLayout *HLay2=new QHBoxLayout();
    HLay2->addWidget(rBtnBlack);
    HLay2->addWidget(rBtnBlue);
    HLay2->addWidget(rBtnRed);

    btnOK=new QPushButton();
    btnOK->setText(QString::fromLocal8Bit("确定"));
    btnCancel=new QPushButton();
    btnCancel->setText(QString::fromLocal8Bit("取消"));
    btnClose=new QPushButton();
    btnClose->setText(QString::fromLocal8Bit("退出"));
    QHBoxLayout *HLay3=new QHBoxLayout();
    HLay3->addStretch();
    HLay3->addWidget(btnOK);
    HLay3->addWidget(btnCancel);
    HLay3->addStretch();
    HLay3->addWidget(btnClose);

    txtEdit=new QPlainTextEdit();
    txtEdit->setPlainText("Hello world\n\nIt is my demo");
    QFont font=txtEdit->font();
    font.setPointSize(20);
    txtEdit->setFont(font);

    QVBoxLayout *VLay=new QVBoxLayout();
    VLay->addLayout(HLay1);
    VLay->addLayout(HLay2);
    VLay->addWidget(txtEdit);
    VLay->addLayout(HLay3);

    setLayout(VLay);//将垂直布局设置为窗体的主体布局
}

void MyDialog::iniSignalSlots()
{
    connect(rBtnBlue,&QRadioButton::clicked,this,&MyDialog::setTextFontColor);
    connect(rBtnBlack,&QRadioButton::clicked,this,&MyDialog::setTextFontColor);
    connect(rBtnRed,&QRadioButton::clicked,this,&MyDialog::setTextFontColor);

    connect(chkBoxBold,&QCheckBox::clicked,this,&MyDialog::on_chkBoxBold);
    connect(chkBoxUnder,&QCheckBox::clicked,this,&MyDialog::on_chkBoxUnder);
    connect(chkBoxItalic,&QCheckBox::clicked,this,&MyDialog::on_chkBoxItalic);

    connect(btnOK,&QPushButton::clicked,this,&MyDialog::accept);
    connect(btnCancel,&QPushButton::clicked,this,&MyDialog::reject);
    connect(btnClose,&QPushButton::clicked,this,&MyDialog::close);
}

void MyDialog::on_chkBoxUnder(bool checked)
{
    QFont font=txtEdit->font();
    font.setUnderline(checked);
    txtEdit->setFont(font);
}

void MyDialog::on_chkBoxItalic(bool checked)
{
    QFont font=txtEdit->font();
    font.setItalic(checked);
    txtEdit->setFont(font);
}

void MyDialog::on_chkBoxBold(bool checked)
{
    QFont font=txtEdit->font();
    font.setBold(checked);
    txtEdit->setFont(font);
}

void MyDialog::setTextFontColor()
{
    QPalette pate=txtEdit->palette();
    if(rBtnBlack->isChecked()){
        pate.setColor(QPalette::Text,Qt::black);
    }else if(rBtnBlue->isChecked()){
        pate.setColor(QPalette::Text,Qt::blue);
    }else if(rBtnRed->isChecked()){
        pate.setColor(QPalette::Text,Qt::red);
    }else{
        pate.setColor(QPalette::Text,Qt::black);
    }
    txtEdit->setPalette(pate);
}

MyDialog::MyDialog(QWidget *parent)
    : QDialog(parent)
{
    iniUI();
    iniSignalSlots();
    setWindowTitle("Form created manualy");
}

MyDialog::~MyDialog()
{
}

