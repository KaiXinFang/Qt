#include "QWDialogLocate.h"
#include "ui_QWDialogLocate.h"

void QWDialogLocate::closeEvent(QCloseEvent *event)
{
    //窗口关闭event
     myMainWindow *parwind=(myMainWindow*)parentWidget();
     parwind->setActLocateEnable(true);// 使能actTab_Locate
     parwind->setDlgLaocteNull();//将窗口指针设置为NULL
}

QWDialogLocate::QWDialogLocate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QWDialogLocate)
{
    ui->setupUi(this);
}

QWDialogLocate::~QWDialogLocate()
{
    delete ui;
}

void QWDialogLocate::setSpinValue(int rowNo, int colNo)
{
    //设置spinBox组件的数值
    ui->spinBoxRow->setValue(rowNo);
    ui->spinBoxColumn->setValue(colNo);
}

void QWDialogLocate::on_pushButton_clicked()
{
    //定位到单元格，并设定字符串
    int row=ui->spinBoxRow->value();//行号
    int column=ui->spinBoxColumn->value();//列号
    myMainWindow *parWind=(myMainWindow*)parentWidget();//获取主窗口
    parWind->setACellText(row,column,ui->edtCaption->text());//调用主窗口函数
    if(ui->checkBoxRow->isChecked())//行增
        ui->spinBoxRow->setValue(1+ui->spinBoxRow->value());
    if(ui->checkBoxColumn->isChecked())// 列增
        ui->spinBoxColumn->setValue(1+ui->spinBoxColumn->value());
}
