#include "myMainWindow.h"
#include "ui_myMainWindow.h"

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    model=new QFileSystemModel();
    model->setRootPath(QDir::currentPath());//设置根目录
    ui->listView->setModel(model);//设置模型数据
    ui->tableView->setModel(model);//设置模型数据
    ui->treeView->setModel(model);//设置模型数据

    connect(ui->treeView,&QTreeView::clicked,ui->listView,&QListView::setRootIndex);
    connect(ui->treeView,&QTreeView::clicked,ui->tableView,&QTableView::setRootIndex);
}

myMainWindow::~myMainWindow()
{
    delete ui;
}


void myMainWindow::on_treeView_clicked(const QModelIndex &index)
{
    ui->chkisDir->setChecked(model->isDir(index));//是否是目录
    ui->labPath->setText(model->filePath(index));
    ui->labType->setText(model->type(index));
    ui->labFileName->setText(model->fileName(index));
    int sz=model->size(index)/1024;
    if(sz<1024){
        ui->labSize->setText(QString("%1 KB").arg(sz));
    }else{
        ui->labSize->setText(QString::asprintf("%.1f MB",sz/1024.0));
    }
}
