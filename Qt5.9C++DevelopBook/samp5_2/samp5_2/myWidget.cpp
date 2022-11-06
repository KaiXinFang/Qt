#include "myWidget.h"
#include "ui_myWidget.h"

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myWidget)
{
    ui->setupUi(this);
    QList<QString> theStrList;
    theStrList<<"北京"<<"上海"<<"天津"<<"河北"<<"山东"<<"四川"<<"重庆";
    theModel=new QStringListModel();
    theModel->setStringList(theStrList);
    ui->listView->setModel(theModel);
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
}

myWidget::~myWidget()
{
    delete ui;
}


void myWidget::on_btnListAppend_clicked()
{
    //添加一行
    theModel->insertRow(theModel->rowCount());//在尾部插入一空行
    QModelIndex index=theModel->index(theModel->rowCount()-1,0);
    theModel->setData(index,"new item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}

void myWidget::on_btnListInsert_clicked()
{
    //插入一行
    QModelIndex index=ui->listView->currentIndex();
    theModel->insertRow(index.row());
    theModel->setData(index,"Insert Item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}

void myWidget::on_btnListDel_clicked()
{
    //删除当前项
    QModelIndex index=ui->listView->currentIndex();
    theModel->removeRow(index.row());
}

void myWidget::on_btnListClear_clicked()
{
    //清除所有项
    theModel->removeRows(0,theModel->rowCount());
}

void myWidget::on_btnTextImport_clicked()
{
    //显示数据模型的StringList
    QStringList tmpList=theModel->stringList();
    ui->plainTextEdit->clear();
    for(int i=0;i<tmpList.count();i++){
        ui->plainTextEdit->appendPlainText(tmpList.at(i));
    }
}

void myWidget::on_listView_clicked(const QModelIndex &index)
{
    //显示QModelIndex的行、列号
    ui->labInfo->setText(QString::asprintf("当前条目：row=%d,column=%d",index.row(),index.column()));
}
