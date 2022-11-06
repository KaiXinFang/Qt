#include "myDialog.h"
#include "ui_myDialog.h"

myDialog::myDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::myDialog)
{
    ui->setupUi(this);
}

myDialog::~myDialog()
{
    delete ui;
}


void myDialog::on_btnOpen_clicked()
{
    //选择单个文件
    QString curPath=QDir::currentPath();//获取应用程序当前目录
    QString dlgTitle="选择一个文件";
    QString filter="文本文件(*.txt);;图片文件(*.jpg *.gif);;所有文件(*.*)";
    QString aFileName=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(!aFileName.isEmpty()){
        ui->plainTextEdit->appendPlainText(aFileName);
    }
}

void myDialog::on_pushButton_2_clicked()
{
    //选择多个文件
    QString curPath=QDir::currentPath();
    QString dlgTitle="选择多个文件";
    QString filter="文本文件(*.txt);;图片文件(*.jpg *.jif);;所有文件(*.*)";
    QStringList fileList=QFileDialog::getOpenFileNames(this,dlgTitle,curPath,filter);
    for(int i=0;i<fileList.size();i++){
        ui->plainTextEdit->appendPlainText(fileList[i]);
    }
}

void myDialog::on_pushButton_4_clicked()
{
    //选择文件夹
    QString curPath=QCoreApplication::applicationDirPath();
    QString dlgTitle="选择一个目录";
    QString selectedDir=QFileDialog::getExistingDirectory(this,dlgTitle,curPath,QFileDialog::ShowDirsOnly);//只显示目录
    if(!selectedDir.isEmpty()){
        ui->plainTextEdit->appendPlainText(selectedDir);
    }
}

void myDialog::on_pushButton_3_clicked()
{
    //保存文件
    QString curPath=QCoreApplication::applicationDirPath();
    QString dlgTitle="保存文件";
    QString filter="h文件(*.h);;C++文件(*.cpp);;所有文件(*.*)";
    QString aFileName=QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);
    if(!aFileName.isEmpty()){
        ui->plainTextEdit->appendPlainText(aFileName);
    }
}

void myDialog::on_pushButton_5_clicked()
{
    //选择颜色
    QPalette pal=ui->plainTextEdit->palette();//获取现有的palette
    QColor iniColor=pal.color(QPalette::Text);//现有的文字颜色
    QColor color=QColorDialog::getColor(iniColor,this,"选择颜色");
    if(color.isValid()){
        pal.setColor(QPalette::Text,color);
        ui->plainTextEdit->setPalette(pal);
    }
}

void myDialog::on_pushButton_6_clicked()
{
    //选择字体
    QFont iniFont=ui->plainTextEdit->font();
    bool ok=false;
    QFont font=QFontDialog::getFont(&ok,iniFont);
    if(ok){
        ui->plainTextEdit->setFont(font);
    }
}

void myDialog::on_pushButton_13_clicked()
{
    //输入字符串
    QString dlgTitle="输入文字对话框";
    QString txtLabel="请输入文件名";
    QString defaultInput="新建文件夹.txt";
    QLineEdit::EchoMode echoModel=QLineEdit::Normal;
    bool ok=false;
    QString text=QInputDialog::getText(this,dlgTitle,txtLabel,echoModel,defaultInput,&ok);
    if(ok&&!text.isEmpty()){
        ui->plainTextEdit->appendPlainText(text);
    }
}

void myDialog::on_pushButton_14_clicked()
{
    //输入整数
    QString dlgTitle="输入整数对话框";
    QString txtLabel="设置字体大小";
    int defaultValue=ui->plainTextEdit->font().pixelSize();
    int minValue=6,maxValue=50,stepValue=1;
    bool ok=false;
    int inputValue=QInputDialog::getInt(this,dlgTitle,txtLabel,defaultValue,minValue,maxValue,stepValue,&ok);
    if(ok){
        QFont font=ui->plainTextEdit->font();
        font.setPointSize(inputValue);
        ui->plainTextEdit->setFont(font);
    }
}

void myDialog::on_pushButton_15_clicked()
{
    //输入浮点数
    QString dlgTitle="输入浮点数对话框";
    QString txtLabel="输入一个浮点数";
    float defaultValue=3.13;
    float minValue=0,maxValue=10000;
    int decimals=2;//小数点位数
    bool ok=false;
    float inputValue=QInputDialog::getDouble(this,dlgTitle,txtLabel,defaultValue,minValue,maxValue,decimals,&ok);
    if(ok){
        QString str=QString::asprintf("输入一个浮点数:%.2f",inputValue);
        ui->plainTextEdit->appendPlainText(str);
    }
}

void myDialog::on_pushButton_16_clicked()
{
    //条目选择输入
    QStringList items;
    items<<"优秀"<<"良好"<<"及格"<<"不合格";
    QString dlgTitle="条目选择对话框";
    QString txtLabel="请选择级别";
    int curIndex=0;//初始选择项
    bool editable=true;//combobox是否能编辑
    bool ok=false;
    QString text=QInputDialog::getItem(this,dlgTitle,txtLabel,items,curIndex,editable,&ok);
    if(ok&&!text.isEmpty()){
        ui->plainTextEdit->appendPlainText(text);
    }
}

void myDialog::on_pushButton_17_clicked()
{
    ui->plainTextEdit->clear();
}

void myDialog::on_pushButton_8_clicked()
{
    //information
    QString dlgTitle="information消息框";
    QString strInfo="文件已经打开，字体已经设置";
    QMessageBox::information(this,dlgTitle,strInfo,QMessageBox::Ok,QMessageBox::NoButton);

}

void myDialog::on_pushButton_9_clicked()
{
    //waring
    QString dlgTitle="waring消息框";
    QString strInfo="文件内容已被修改";
    QMessageBox::warning(this,dlgTitle,strInfo);
}

void myDialog::on_pushButton_10_clicked()
{
    //critical
    QString dlgTitle="critical消息框";
    QString strInfo="有不明程序正在访问";
    QMessageBox::critical(this,dlgTitle,strInfo);
}

void myDialog::on_pushButton_12_clicked()
{
    //about
    QString dlgTitle="about消息框";
    QString strInfo="我开发的数据查看软件 v1.0 \n 保留所有版权";
    QMessageBox::about(this,dlgTitle,strInfo);
}

void myDialog::on_pushButton_7_clicked()
{
    //question
    QString dlgTitle="question消息框";
    QString strInfo="文件已被修改，是否保存修改？";
    QMessageBox::StandardButton defaultBtn=QMessageBox::NoButton;
    QMessageBox::StandardButton result;//用于接收选择的按钮类型
    result=QMessageBox::question(this,dlgTitle,strInfo,QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel,defaultBtn);
    if(result==QMessageBox::Yes){
        ui->plainTextEdit->appendPlainText("Questuion消息框: Yes被选中!");
    }else if(result==QMessageBox::No){
        ui->plainTextEdit->appendPlainText("Questuion消息框: No被选中!");
    }else if(result==QMessageBox::Cancel){
        ui->plainTextEdit->appendPlainText("Questuion消息框: Cancel被选中!");
    }else{
        ui->plainTextEdit->appendPlainText("Questuion消息框: 无选择!");
    }
}
