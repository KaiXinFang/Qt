#include "myMainWindow.h"
#include "ui_myMainWindow.h"

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->splitter);

    createSelectionPopMenu();

    ui->toolButton->setDefaultAction(ui->actListIni);
}

myMainWindow::~myMainWindow()
{
    delete ui;
}

void myMainWindow::createSelectionPopMenu()
{
    QMenu *menuSelection=new QMenu();
    menuSelection->addAction(ui->actSelALL);
    menuSelection->addAction(ui->actSellNone);
    menuSelection->addAction(ui->actSelInvs);

    ui->tBtnSelectItem->setPopupMode(QToolButton::MenuButtonPopup);
    ui->tBtnSelectItem->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    ui->tBtnSelectItem->setDefaultAction(ui->actSelPopMenu);
    ui->tBtnSelectItem->setMenu(menuSelection);

    QToolButton *aBtn=new QToolButton();
    aBtn->setPopupMode(QToolButton::InstantPopup);
    aBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    aBtn->setDefaultAction(ui->actSelPopMenu);
    aBtn->setMenu(menuSelection);
    ui->toolBar->addWidget(aBtn);

    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->actQuit);
}


void myMainWindow::on_actListIni_triggered()
{
    //初始化列表项
    QListWidgetItem *aItem;
    bool chk=ui->chkBoxListEditable->isChecked();
    ui->listWidget->clear();
    for(int i=0;i<10;i++){
        QString str=QString::asprintf("Item %d",i);
        aItem=new QListWidgetItem();
        aItem->setText(str);
        aItem->setCheckState(Qt::Checked);
        if(chk){
            aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        }else{
            aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        }
        ui->listWidget->addItem(aItem);
    }
}

void myMainWindow::on_actListClear_triggered()
{
    ui->listWidget->clear();
}

void myMainWindow::on_actListInsert_triggered()
{
    bool chk=ui->chkBoxListEditable->isChecked();
    QListWidgetItem *aItem=new QListWidgetItem("New Inserted Item");
    if(chk){
        aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    }else{
        aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    }
    ui->listWidget->insertItem(ui->listWidget->currentRow(),aItem);
}

void myMainWindow::on_actListDelete_triggered()
{
    int row=ui->listWidget->currentRow();
    QListWidgetItem *aItem=ui->listWidget->takeItem(row);
    delete aItem;
}

void myMainWindow::on_pushButton_clicked()
{
    int cn=ui->listWidget->count();
    for(int i=0;i<cn;i++){
        QListWidgetItem *aItem=ui->listWidget->item(i);
        aItem->setCheckState(Qt::Checked);
    }
}

void myMainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    QString str;
    if(current!=NULL){
        if(previous==NULL){
            str=QString::fromLocal8Bit("当前项:")+current->text();
        }else {
            str=QString::fromLocal8Bit("前一项:")+previous->text()+
                    QString::fromLocal8Bit("后一项:")+current->text();
        }
    }
    ui->editCutItemText->setText(str);
}

void myMainWindow::on_actQuit_triggered()
{
    this->close();
}

void myMainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);
    QMenu *menuList=new QMenu(this);
    menuList->addAction(ui->actListIni);
    menuList->addAction(ui->actListClear);
    menuList->addAction(ui->actListInsert);
    menuList->addAction(ui->actListDelete);
    menuList->addSeparator();
    menuList->addAction(ui->actSelALL);
    menuList->addAction(ui->actSellNone);
    menuList->addAction(ui->actSelInvs);
    menuList->exec(QCursor::pos());//在鼠标光标位置显示右键快捷菜单
    delete menuList;
}
