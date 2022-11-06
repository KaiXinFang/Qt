#include "QFormDoc.h"
#include "ui_QFormDoc.h"

QFormDoc::QFormDoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QFormDoc)
{
    ui->setupUi(this);
    QToolBar *locToolBar=new QToolBar(this);//创建工具栏
    locToolBar->setGeometry(0,0,this->width(),30);
    locToolBar->addAction(ui->actOpen);
    locToolBar->addAction(ui->actFont);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actCut);
    locToolBar->addAction(ui->actCopy);
    locToolBar->addAction(ui->actPaste);
    locToolBar->addAction(ui->actUndo);
    locToolBar->addAction(ui->actRedo);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actClose);
    locToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    QVBoxLayout *layOut=new QVBoxLayout();
    layOut->addWidget(locToolBar);//设置工具栏和编辑器上下布局
    ui->plainTextEdit->setGeometry(0,locToolBar->height(),this->width(),this->height()-locToolBar->height());
    layOut->addWidget(ui->plainTextEdit);
    layOut->setContentsMargins(2,2,2,2);//减小边框的宽度
    layOut->setSpacing(10);
    this->setLayout(layOut);

}

QFormDoc::~QFormDoc()
{
    QMessageBox::information(this,"消息","QFormDoc对象被删除和释放");
    delete ui;
}
