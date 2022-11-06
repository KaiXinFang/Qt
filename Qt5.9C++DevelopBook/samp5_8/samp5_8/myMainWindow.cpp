#include "myMainWindow.h"
#include "ui_myMainWindow.h"

void myMainWindow::iniModelFromStringList(QStringList &aFileContent)
{
    int rowCnt=aFileContent.count();
    theModel->setRowCount(rowCnt-1);
    QString header=aFileContent.at(0);
    QStringList headerList=header.split(QRegExp("\\s+"),QString::SkipEmptyParts);
    theModel->setHorizontalHeaderLabels(headerList);

    QStandardItem *aItem;
    QStringList tmpList;
    int j;
    for(int i=1;i<rowCnt;i++){
        QString aLineText=aFileContent.at(i);
        tmpList=aLineText.split(QRegExp("\\s+"),QString::SkipEmptyParts);
        for(int j=0;j<fixedColumnCount-1;j++){
            //不包含最后一列
            aItem=new QStandardItem(tmpList.at(i));
            theModel->setItem(i-1,j,aItem);//为模型的某个行列位置设置Item
        }
        aItem=new QStandardItem(headerList.at(j));//最后一列
        aItem->setCheckable(true);
        if(tmpList.at(j)=="0"){
            aItem->setCheckState(Qt::Unchecked);
        }else{
            aItem->setCheckState(Qt::Checked);
        }
        theModel->setItem(i-1,j,aItem);
    }
}

void myMainWindow::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    //选择单元格变化的响应
    if(current.isValid()){
        LabCellPos->setText(QString::asprintf("当前单元格:%d行，%d列",current.row(),current.column()));
        QStandardItem *aItem=theModel->itemFromIndex(current);
        LabCellText->setText("单元格内容:"+aItem->text());
        QFont font=aItem->font();
        ui->actFontBold->setChecked(font.bold());
    }
}

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->splitter);
    theModel=new QStandardItemModel(2,fixedColumnCount);//数据模型
    theSelection=new QItemSelectionModel(theModel);//选择模型
    connect(theSelection,&QItemSelectionModel::currentChanged,this,&myMainWindow::on_currentChanged);
    ui->tableView->setModel(theModel);//设置模型
    ui->tableView->setSelectionModel(theSelection);//设置数据模型
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);

    //创建状态栏组件

    LabCurFile=new QLabel();
    LabCellPos=new QLabel();
    LabCellText=new QLabel();
    ui->statusbar->addWidget(LabCurFile);
    ui->statusbar->addWidget(LabCellPos);
    ui->statusbar->addWidget(LabCellText);
}

myMainWindow::~myMainWindow()
{
    delete ui;
}


void myMainWindow::on_actOpen_triggered()
{
    //打开文件
    QString curPath=QCoreApplication::applicationDirPath();
    QString aFileName=QFileDialog::getOpenFileName(this,"打开一个文件",
                                                   curPath,"井数据文件(*.txt);;所有文件(*.*)");
    if(aFileName.isEmpty()){
        return;
    }
    QStringList fFileContent;
    QFile aFile(aFileName);
    if(aFile.open(QIODevice::ReadOnly|QIODevice::Text)){
        QTextStream aStream(&aFile);//用文本流读取文件
        ui->plainTextEdit->clear();
        while(!aStream.atEnd()){
            QString str=aStream.readLine();
            ui->plainTextEdit->appendPlainText(str);
            fFileContent.append(str);
        }
        aFile.close();
        LabCurFile->setText("当前文件:"+aFileName);//状态栏显示
        iniModelFromStringList(fFileContent);//初始化数据模型
    }
}

void myMainWindow::on_actAppend_triggered()
{
    //在表格最后添加行
    QList<QStandardItem*> aItemList;//列表类
    QStandardItem *aItem;
    for(int i=0;i<fixedColumnCount;i++){//不包含最后一列
        aItem=new QStandardItem("0");
        aItemList<<aItem;//添加到列表
    }
    //获取最后一列的表头文字
    QString str=theModel->headerData(theModel->columnCount()-1,Qt::Horizontal,Qt::DisplayRole).toString();
    aItem=new QStandardItem(str);//创建测试取样Item
    aItem->setCheckable(true);
    aItemList<<aItem;//添加到列表

    theModel->insertRow(theModel->rowCount(),aItemList);//插入一行
    QModelIndex curIndex=theModel->index(theModel->rowCount()-1,0);
    theSelection->clearSelection();
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}

void myMainWindow::on_actDelete_triggered()
{
    //删除当前行
    QModelIndex curIndex=theSelection->currentIndex();//获取模型索引
    if(curIndex.row()==theModel->rowCount()-1)//最后一行
        theModel->removeRow(curIndex.row());//删除最后一行
    else{
        theModel->removeRow(curIndex.row());//删除一行，并重新设置当前选择行
        theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
    }
}

void myMainWindow::on_actAlignLeft_triggered()
{
    //设置文字居左对齐
    if(!theSelection->hasSelection())
        return;
    //获取选择的单元格的模型索引列表，可以是多选
    QModelIndexList selectedIndex=theSelection->selectedIndexes();
    for(int i=0;i<selectedIndex.count();i++){
        QModelIndex aIndex=selectedIndex.at(i);//获取一个模型索引
        QStandardItem *aItem=theModel->itemFromIndex(aIndex);
        aItem->setTextAlignment(Qt::AlignLeft);//设置文字对齐方式
    }
}

void myMainWindow::on_actFontBold_triggered(bool checked)
{
    //设置字体粗体
    if(!theSelection->hasSelection()){
        return;
    }
    QModelIndexList selectedIndex=theSelection->selectedIndexes();
    for(int i=0;i<selectedIndex.size();i++){
        QModelIndex aIndex=selectedIndex.at(i);
        QStandardItem *aItem=theModel->itemFromIndex(aIndex);
        QFont font=aItem->font();
        font.setBold(checked);
        aItem->setFont(font);
    }
}

void myMainWindow::on_actSave_triggered()
{
    //保存文件
    QString curPath=QCoreApplication::applicationDirPath();
    QString aFileName=QFileDialog::getSaveFileName(this,"选择一个文件",curPath,"井斜数据文件(.*txt);;所有文件(*.*)");
    if(aFileName.isEmpty())
        return;
    QFile aFile(aFileName);
    if(!(aFile.open(QIODevice::ReadWrite|QIODevice::Text|QIODevice::Truncate)))
            return;//以读写，覆盖原有内容方式打开文件
    QTextStream aStream(&aFile);
    QStandardItem *aItem;
    int i,j;
    QString str;
    ui->plainTextEdit->clear();
    //获取表头文字
    for(int i=0;i<theModel->columnCount();i++){
        aItem=theModel->horizontalHeaderItem(i);//获取表头的项数据
        str=str+aItem->text()+"\t\t";//以TAB隔开
    }
    aStream<<str<<"\n";//文件里需要加入换行符\n
    ui->plainTextEdit->appendPlainText(str);
    //获取数据区文字
    for(int i=0;i<theModel->rowCount();i++){
        str="";
        for(int j=0;j<theModel->columnCount()-1;j++){
            aItem=theModel->item(i,j);
            str=str+aItem->text()+QString::asprintf("\t\t");
        }
        aItem=theModel->item(i,j);//最后一列是逻辑型
        if(aItem->checkState()==Qt::Checked)
            str=str+"1";
        else
            str=str+"0";
        ui->plainTextEdit->appendPlainText(str);
        aStream<<str<<"\n";
    }

}













