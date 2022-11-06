#include "QWDialog.h"
#include "ui_QWDialog.h"

QWDialog::QWDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QWDialog)
{
    ui->setupUi(this);
}

QWDialog::~QWDialog()
{
    //在析构函数中弹出一个消息提示对话框，以便观察对话框是何时被删除的
    QMessageBox::information(this,"提示","设置表格行数和列数的对话框被删除!");
    delete ui;
}

int QWDialog::rowCount()
{
    //用于主窗口调用获得行数的输入值
    return ui->spinBoxRow->value();
}

int QWDialog::columnCount()
{
    //用于主窗口调用获得列数的输入值
    return ui->spinBoxColumn->value();
}

void QWDialog::setRowColumn(int row, int column)
{
    //初始化数据显示
    ui->spinBoxRow->setValue(row);
    ui->spinBoxColumn->setValue(column);
}
