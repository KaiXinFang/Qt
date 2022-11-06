#include "QWMainWindow.h"
#include "ui_QWMainWindow.h"

QWMainWindow::QWMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QWMainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setVisible(false);
    ui->tabWidget->clear();//清除所有页面
    ui->tabWidget->setTabsClosable(true);//Page有关闭按钮，可被关闭
    this->setCentralWidget(ui->tabWidget);
    this->setWindowState(Qt::WindowMaximized);
}

QWMainWindow::~QWMainWindow()
{
    delete ui;
}

void QWMainWindow::paintEvent(QPaintEvent *event)
{
    //绘制窗口背景图片
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(0,ui->toolBar->height(),this->width(),this->height()-ui->toolBar->height()-ui->statusbar->height(),
                       QPixmap(":/img/image/senery.jfif"));
}


void QWMainWindow::on_actWidgetInsite_triggered()
{
    //创建QFormDoc窗体，并在tabWidget中显示
    QFormDoc *formDoc=new QFormDoc(this);//指定父窗口
    formDoc->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    int cur=ui->tabWidget->addTab(formDoc,QString::asprintf("Doc %d",ui->tabWidget->count()));
    ui->tabWidget->setCurrentIndex(cur);
    ui->tabWidget->setVisible(true);
}

void QWMainWindow::on_actWidget_triggered()
{
    QFormDoc *formDoc=new QFormDoc();
    formDoc->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    formDoc->setWindowTitle("基于QWidget的窗体，无父窗口，关闭时删除");
    formDoc->setWindowFlag(Qt::Window,true);
    formDoc->setWindowOpacity(0.5);//设置窗体透明度
    formDoc->show();
}

void QWMainWindow::on_actWindowInsite_triggered()
{
    QFormTable *formTable=new QFormTable(this);//指定父窗口
    formTable->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    int cur=ui->tabWidget->addTab(formTable,QString::asprintf("Table %d",ui->tabWidget->count()));
    ui->tabWidget->setCurrentIndex(cur);
    ui->tabWidget->setVisible(true);
}

void QWMainWindow::on_actWindow_triggered()
{
    QFormTable *formTable=new QFormTable(this);//指定父窗口
    formTable->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    formTable->setWindowTitle("基于QMainWindow的窗口，指定父窗口，关闭时删除");
    formTable->show();
}

void QWMainWindow::on_tabWidget_tabCloseRequested(int index)
{
    //单击分页上的关闭图标时，关闭分页
    if(index<0)
        return;
    QWidget *aForm=ui->tabWidget->widget(index);
    aForm->close();
}

void QWMainWindow::on_tabWidget_currentChanged(int index)
{
    //没有分页时，不显示tabWidget，显示背景图片
    bool en=ui->tabWidget->count()>0;
    ui->tabWidget->setVisible(en);
}
