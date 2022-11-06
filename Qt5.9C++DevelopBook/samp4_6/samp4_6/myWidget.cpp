#include "myWidget.h"
#include "ui_myWidget.h"

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myWidget)
{
    ui->setupUi(this);
}

myWidget::~myWidget()
{
    delete ui;
}


void myWidget::on_pushButton_clicked()
{
    ui->comboBox->clear();
    QList<QString> list;
    list.append(QString::fromLocal8Bit("北京"));
    list.append(QString::fromLocal8Bit("上海"));
    list.append(QString::fromLocal8Bit("广州"));
    list.append(QString::fromLocal8Bit("深圳"));
    for(QList<QString>::const_iterator it=list.begin();it!=list.end();it++){
        ui->comboBox->addItem(*it);
    }
}

void myWidget::on_pushButton_2_clicked()
{
    ui->comboBox->clear();
}

void myWidget::on_pushButton_3_clicked()
{
    QMap<QString,int> city_Zone;
    city_Zone.insert(QString::fromLocal8Bit("北京"),10);
    city_Zone.insert(QString::fromLocal8Bit("上海"),21);
    city_Zone.insert(QString::fromLocal8Bit("天津"),22);
    city_Zone.insert(QString::fromLocal8Bit("大连"),411);
    city_Zone.insert(QString::fromLocal8Bit("锦州"),416);
    city_Zone.insert(QString::fromLocal8Bit("徐州"),516);
    city_Zone.insert(QString::fromLocal8Bit("福州"),591);
    city_Zone.insert(QString::fromLocal8Bit("青岛"),532);
    ui->comboBox_2->clear();
    foreach(const QString &str,city_Zone.keys()){
        ui->comboBox_2->addItem(str,city_Zone.value(str));
    }
}

void myWidget::on_comboBox_currentIndexChanged(const QString &arg1)
{
    ui->plainTextEdit->appendPlainText(arg1);
    //QString zone=ui->comboBox_2->currentData().toString();
    //ui->plainTextEdit->appendPlainText(arg1+QString::fromLocal8Bit(":区号=")+zone);
}

void myWidget::on_comboBox_2_currentIndexChanged(const QString &arg1)
{
    QString zone=ui->comboBox_2->currentData().toString();
    ui->plainTextEdit->appendPlainText(arg1+QString::fromLocal8Bit(":区号=")+zone);
}

void myWidget::on_plainTextEdit_customContextMenuRequested(const QPoint &pos)
{
    QMenu* menu=ui->plainTextEdit->createStandardContextMenu();
    menu->exec(pos);
}
