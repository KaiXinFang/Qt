#include "myMainWindow.h"
#include "ui_myMainWindow.h"


void myMainWindow::createItemsARow(int rowNo, QString Name, QString Sex,
                                   QDate birth, QString Nation, bool isPM, int score)
{

    //为每一行的单元格创建item
    QTableWidgetItem *item;
    QString str;
    uint StudID=201605000;
    //姓名
    item=new QTableWidgetItem(Name,myMainWindow::ctName);//第二个参数是节点的类型
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    StudID+=rowNo;
    item->setData(Qt::UserRole,QVariant(StudID));//设置关联数据（在界面上不显示）
    ui->tableInfo->setItem(rowNo,myMainWindow::colName,item);//(行数，列数，数据)

    //性别
    QIcon icon;
    if(Sex=="男"){
        icon.addFile("qrc:/img/image/boy.ico");
    }else{
        icon.addFile("qrc:/img/image/girl.ico");
    }
    item=new QTableWidgetItem(Sex,myMainWindow::ctSex);
    item->setIcon(icon);
    item->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    ui->tableInfo->setItem(rowNo,myMainWindow::colSex,item);

    //出生日期
    str=birth.toString("yyyy-MM-dd");
    item=new QTableWidgetItem(str,myMainWindow::ctBirth);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableInfo->setItem(rowNo,myMainWindow::colBirth,item);

    //民族
    item=new QTableWidgetItem(Nation,myMainWindow::ctNation);
    item->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
    ui->tableInfo->setItem(rowNo,myMainWindow::colNation,item);

    //是否党员
    item=new QTableWidgetItem("党员",myMainWindow::ctPartyM);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    if(isPM){
        item->setCheckState(Qt::Checked);
        item->setBackgroundColor(Qt::yellow);
    }else {
        item->setCheckState(Qt::Unchecked);
    }
    ui->tableInfo->setItem(rowNo,myMainWindow::colPartyM,item);

    //分数
    str.setNum(score);
    item=new QTableWidgetItem(str,myMainWindow::ctScore);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableInfo->setItem(rowNo,myMainWindow::colScore,item);

}

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->splitterMain);
    //创建3个状态栏上的label标签
    labCellIndex=new QLabel("当前单元格坐标:",this);
    labCellIndex->setMinimumWidth(250);
    labCellType=new QLabel("当前单元格类型:",this);
    labCellType->setMinimumWidth(200);
    labStudID=new QLabel("学生ID:",this);
    labStudID->setMinimumWidth(200);
    //将创建的标签添加到状态栏上
    ui->statusbar->addWidget(labCellIndex);
    ui->statusbar->addWidget(labCellType);
    ui->statusbar->addWidget(labStudID);

}

myMainWindow::~myMainWindow()
{
    delete ui;
}


void myMainWindow::on_btnSetHeader_clicked()
{
    //设置表头
    QTableWidgetItem *headerItem;
    QList<QString> headerText;
    headerText<<"姓名"<<"性别"<<"出生日期"<<"民族"<<"分数"<<"是否党员";
    ui->tableInfo->setColumnCount(headerText.count());
    for(int i=0;i<ui->tableInfo->columnCount();i++){
        headerItem=new QTableWidgetItem(headerText[i]);
        QFont font=headerItem->font();
        font.setBold(true);
        font.setPointSize(8);
        headerItem->setTextColor(Qt::red);
        headerItem->setFont(font);
        ui->tableInfo->setHorizontalHeaderItem(i,headerItem);
    }
}

void myMainWindow::on_btnIniData_clicked()
{
    //初始化表格内容
    QString strName,strSex;
    bool isParty=false;
    QDate birth;
    birth.setDate(1980,4,7);
    ui->tableInfo->clearContents();
    ui->tableInfo->setRowCount(7);// 要先设置表格的行数或者列数，才能对表格中的单元格进行内容的填充
    int rows=ui->tableInfo->rowCount();
    for(int i=0;i<rows;i++){
        strName=QString::asprintf("学生%d",i);
        if(i%2==0){
            strSex="男";
        }else{
          strSex="女";
        }
        createItemsARow(i,strName,strSex,birth,"汉族",isParty,70);
        birth=birth.addDays(20);
        isParty=!isParty;
    }
}

void myMainWindow::on_tableInfo_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{
    QTableWidgetItem *item=ui->tableInfo->item(currentRow,currentColumn);
    if(item==NULL){
        return;
    }
    labCellIndex->setText(QString::asprintf("当前单元格坐标:%d行,%d列",currentRow,currentColumn));
    int cellType=item->type();
    labCellType->setText(QString::asprintf("当前单元格类型:%d",cellType));
    item=ui->tableInfo->item(currentRow,myMainWindow::colName);
    int ID=item->data(Qt::UserRole).toInt();
    labStudID->setText(QString::asprintf("学生ID:%d",ID));
}

void myMainWindow::on_btnInsertRow_clicked()
{
    //插入一行
    int curRow=ui->tableInfo->currentRow();
    ui->tableInfo->insertRow(curRow);//插入一行，不会自动为单元格创建item
    createItemsARow(curRow,"新学生","男",QDate::fromString("1990-1-1","yyyy-M-d"),"苗族",true,70);
}

void myMainWindow::on_btnAppendRow_clicked()
{
    //添加一行
    int curRow=ui->tableInfo->rowCount();
    ui->tableInfo->insertRow(curRow);//在表格尾部添加一行
    createItemsARow(curRow,"新生","女",QDate::fromString("2000-1-1","yyyy-M-d"),"满族",false,80);
}

void myMainWindow::on_btnDelCurRow_clicked()
{
    //删除当前行及其items
    int curRow=ui->tableInfo->currentRow();
    ui->tableInfo->removeRow(curRow);//删除当前行及其items
}

void myMainWindow::on_chkBoxHeaderH_clicked(bool checked)
{
    //是否显示行表头
    ui->tableInfo->horizontalHeader()->setVisible(checked);
}

void myMainWindow::on_chkBoxHeaderV_clicked(bool checked)
{
    //是否显示列表头
    ui->tableInfo->verticalHeader()->setVisible(checked);
}

void myMainWindow::on_chkBoxRowColor_clicked(bool checked)
{
    //设置间隔行底色
    ui->tableInfo->setAlternatingRowColors(checked);
}

void myMainWindow::on_rBtnSelectItem_clicked()
{
    //选择行为：单元格选择
    ui->tableInfo->setSelectionBehavior(QAbstractItemView::SelectItems);
}

void myMainWindow::on_rBtnSelectRow_clicked()
{
    //选择行为：行选择
    ui->tableInfo->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void myMainWindow::on_btnReadToEdit_clicked()
{
    //将所有单元格的内容提取字符串，显示在PlainTextEdit组件里
    QString str;
    QTableWidgetItem *cellItem;
    ui->plainTextEdit->clear();
    for(int i=0;i<ui->tableInfo->rowCount();i++){
        str=QString::asprintf("第%d行：",i+1);
        for(int j=0;j<ui->tableInfo->columnCount()-1;j++){
            cellItem=ui->tableInfo->item(i,j);
            str=str+cellItem->text()+" ";
        }
        cellItem=ui->tableInfo->item(i,colPartyM);
        if(cellItem->checkState()==Qt::Checked){
            str=str+"党员";
        }else{
            str=str+"群众";
        }
        ui->plainTextEdit->appendPlainText(str);
    }
}
