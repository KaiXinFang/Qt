#include "myMainWindow.h"
#include "ui_myMainWindow.h"

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->mdiArea);
    this->setWindowState(Qt::WindowMaximized);//最大化显示
}

myMainWindow::~myMainWindow()
{
    delete ui;
}


void myMainWindow::on_actDoc_New_triggered()
{
    QFormDoc *formDoc=new QFormDoc(this);
    ui->mdiArea->addSubWindow(formDoc);//文档窗口添加到MDI
    formDoc->show();
}

void myMainWindow::on_actDoc_Open_triggered()
{
    //打开文件
    bool needNew=false;//是否需要新建子窗口
    QFormDoc *formDoc;
    if(ui->mdiArea->subWindowList().count()>0){//获取活动窗口
        formDoc=(QFormDoc*)ui->mdiArea->activeSubWindow()->widget();
        needNew=formDoc->isFileOpened();//文件已经打开，需要新建窗口
    }
    else
        needNew=true;
    QString curPath=QDir::currentPath();
    QString aFileName=QFileDialog::getOpenFileName(this,"打开一个文件",curPath,"c程序文件(*.h *cpp);;所有文件(*.*)");
    if(aFileName.isEmpty())
        return;
    if(needNew){
        //需要新建子窗口
        formDoc=new QFormDoc(this);
        ui->mdiArea->addSubWindow(formDoc);
    }
    formDoc->loadFromFile(aFileName);//打开文件
    formDoc->show();
    ui->actCut->setEnabled(true);
    ui->actCopy->setEnabled(true);
    ui->actPaste->setEnabled(true);
    ui->actFont->setEnabled(true);
}

void myMainWindow::on_actCasde_Open_triggered()
{
    //级联展开
    ui->mdiArea->cascadeSubWindows();
}

void myMainWindow::on_actArea_Open_triggered()
{
    //平铺展开
    ui->mdiArea->tileSubWindows();
}

void myMainWindow::on_actClose_All_triggered()
{
    //关闭全部子窗口
    ui->mdiArea->closeAllSubWindows();
}

void myMainWindow::on_actMDI_Model_triggered(bool checked)
{
    //MDI显示模式
    if(checked){
        ui->mdiArea->setViewMode(QMdiArea::TabbedView);//Tab多页显示模式
        ui->mdiArea->setTabsClosable(true);
        ui->actCasde_Open->setEnabled(false);
        ui->actArea_Open->setEnabled(false);
    }
    else{
        //子窗口模式
        ui->mdiArea->setViewMode(QMdiArea::SubWindowView);//子窗口模式
        ui->actCasde_Open->setEnabled(true);
        ui->actArea_Open->setEnabled(true);
    }
}

void myMainWindow::on_mdiArea_subWindowActivated(QMdiSubWindow *arg1)
{
    //当前活动子窗口切换时
    if(ui->mdiArea->subWindowList().count()==0){
        //若子窗口个数为0
        ui->actCut->setEnabled(false);
        ui->actCopy->setEnabled(false);
        ui->actPaste->setEnabled(false);
        ui->actFont->setEnabled(false);
        ui->statusbar->clearMessage();
    }
    else{
        QFormDoc *formDoc=static_cast<QFormDoc*>(ui->mdiArea->activeSubWindow()->widget());
        ui->statusbar->showMessage(formDoc->currentFileName());
    }
}

void myMainWindow::on_actCut_triggered()
{
    //cut操作
    QFormDoc *formDoc=(QFormDoc*)ui->mdiArea->activeSubWindow()->widget();
    formDoc->textCut();
}

void myMainWindow::on_actFont_triggered()
{
    //font操作
    QFormDoc *formDoc=(QFormDoc*)ui->mdiArea->activeSubWindow()->widget();
    formDoc->setEditFont();
}
