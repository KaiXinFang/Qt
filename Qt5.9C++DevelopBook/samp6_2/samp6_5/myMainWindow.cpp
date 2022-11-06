#include "myMainWindow.h"
#include "ui_myMainWindow.h"

void myMainWindow::closeEvent(QCloseEvent *event)
{
    //窗口关闭时，询问是否退出
    QMessageBox::StandardButton result;
    result=QMessageBox::question(this,"提示","确定要退出本程序吗?",
                          QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
    if(result==QMessageBox::Yes)
        event->accept();
    else
        event->ignore();
}

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    theModel=new QStandardItemModel(2,5);
    theSelectModel=new QItemSelectionModel();
    ui->tableView->setModel(theModel);
    ui->tableView->setSelectionModel(theSelectModel);
}

myMainWindow::~myMainWindow()
{
    delete ui;
}

void myMainWindow::setACellText(int row, int column, QString text)
{
    //定位到单元格，并设置字符串
    QModelIndex index=theModel->index(row,column);//获取模型索引
    theSelectModel->clearSelection();
    theSelectModel->setCurrentIndex(index,QItemSelectionModel::Select);
    theModel->setData(index,text,Qt::DisplayRole);//设置单元格字符串
}

void myMainWindow::setActLocateEnable(bool enable)
{
    ui->actLocation->setEnabled(enable);
}

void myMainWindow::setDlgLaocteNull()
{
    dlgLocate=NULL;
}


void myMainWindow::on_actSetrowandcolumn_triggered()
{
    //模态对话框设计，动态创建，用过后删除
    QWDialog *dlgTableSize=new QWDialog(this);
    Qt::WindowFlags flags=dlgTableSize->windowFlags();
    dlgTableSize->setWindowFlags(flags|Qt::MSWindowsFixedSizeDialogHint);
    dlgTableSize->setRowColumn(theModel->rowCount(),theModel->columnCount());
    int ret=dlgTableSize->exec();//以模态方式显示对话框
    if(ret==QDialog::Accepted){
        //OK按钮被按下，获取对话框上的输入，设置行数和列数
        int rows=dlgTableSize->rowCount();
        theModel->setRowCount(rows);
        int cols=dlgTableSize->columnCount();
        theModel->setColumnCount(cols);
    }
    delete dlgTableSize;
}

void myMainWindow::on_actSetHeader_triggered()
{
    //一次创建，多次调用，对话框关闭时只是隐藏
    if(dlgSetHeaders==NULL)
        dlgSetHeaders=new QWDialogHeaders(this);
    if(dlgSetHeaders->headerList().count()!=theModel->columnCount()){
        //如果表头列数变化，重新初始化
        QStringList strList;
        for(int i=0;i<theModel->columnCount();i++){//获取现有的表头标题
            strList.append(theModel->headerData(i,Qt::Horizontal,Qt::DisplayRole).toString());
        }
        dlgSetHeaders->setHeaderList(strList);//将现有的表头标题初始化为对话框中的内容
    }
    int ret=dlgSetHeaders->exec();//以模态方式显示对话框
    if(ret==QDialog::Accepted){
        QStringList strList=dlgSetHeaders->headerList();
        theModel->setHorizontalHeaderLabels(strList);//设置模型的表头标题
    }
}

void myMainWindow::on_actLocation_triggered()
{
    //创建StayOnTop对话框，对话框关闭时自动删除
    ui->actLocation->setEnabled(false);
    dlgLocate=new QWDialogLocate(this);
    dlgLocate->setAttribute(Qt::WA_DeleteOnClose);//对话框关闭后自动删除
    Qt::WindowFlags flags=dlgLocate->windowFlags();//获取已有的flags(falgs是指窗口右上角的放大，缩小，关闭等按钮)
    dlgLocate->setWindowFlags(flags|Qt::WindowStaysOnTopHint);//StayOnTop

    dlgLocate->setSpinRange(theModel->rowCount(),theModel->columnCount());
    QModelIndex curIndex=theSelectModel->currentIndex();
    if(curIndex.isValid()){
        dlgLocate->setSpinValue(curIndex.row(),curIndex.column());
    }
    dlgLocate->show();//非模态显示对话框
}

void myMainWindow::on_tableView_clicked(const QModelIndex &index)
{
    //单击单元格时，将单元格的行号和列号设置到对话框中
    if(dlgLocate!=NULL)
        dlgLocate->setSpinValue(index.row(),index.column());
}
