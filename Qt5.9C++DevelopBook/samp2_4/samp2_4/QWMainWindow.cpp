#include "QWMainWindow.h"
#include "ui_QWMainWindow.h"

QWMainWindow::QWMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QWMainWindow)
{
    ui->setupUi(this);//创建可视化设计的界面
    iniUI();//在可视化设计界面的基础上添加其他组件
    iniSignalSlots();
}

QWMainWindow::~QWMainWindow()
{
    delete ui;
}

void QWMainWindow::iniUI()
{
    //状态栏上添加组件
    flabCurFile=new QLabel();
    flabCurFile->setMinimumWidth(150);
    flabCurFile->setText(QString::fromLocal8Bit("当前文件："));
    ui->statusbar->addWidget(flabCurFile);

    progressBar1=new QProgressBar();
    progressBar1->setMaximumWidth(200);
    progressBar1->setMinimum(5);
    progressBar1->setMaximum(50);
    progressBar1->setValue(ui->txtEdit->font().pointSize());
    ui->statusbar->addWidget(progressBar1);

    //工具栏上添加组件
    spinFontSize=new QSpinBox();
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->txtEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->toolBar->addWidget(new QLabel(QString::fromLocal8Bit("字体大小：")));
    ui->toolBar->addWidget(spinFontSize);

    ui->toolBar->addSeparator();
    ui->toolBar->addWidget(new QLabel(QString::fromLocal8Bit("字体")));
    comboFont=new QFontComboBox();
    comboFont->setMinimumWidth(150);
    ui->toolBar->addWidget(comboFont);

    setCentralWidget(ui->txtEdit);
}

void QWMainWindow::iniSignalSlots()
{
    connect(spinFontSize,QOverload<int>::of(&QSpinBox::valueChanged),
            [=](int i)
            {
                QTextCharFormat fmt;
                fmt.setFontPointSize(i);
                ui->txtEdit->mergeCurrentCharFormat(fmt);
                progressBar1->setValue(i);
            });
    connect(comboFont,&QFontComboBox::currentFontChanged,
            [=](const QFont &font)
            {
                QTextCharFormat fmt;
                fmt.setFont(font);
                ui->txtEdit->mergeCurrentCharFormat(fmt);
            });
}



void QWMainWindow::on_actFontBold_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();
    if(checked){
        fmt.setFontWeight(QFont::Bold);
    }else{
        fmt.setFontWeight(QFont::Normal);
    }
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWindow::on_txtEdit_copyAvailable(bool b)
{
    ui->actCut->setEnabled(b);
    ui->actCopy->setEnabled(b);
    ui->actPaste->setEnabled(ui->txtEdit->canPaste());
}

void QWMainWindow::on_txtEdit_selectionChanged()
{
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();
    ui->actFontItalic->setChecked(fmt.fontItalic());
    ui->actFontBold->setChecked(fmt.font().bold());
    ui->actFontUnder->setChecked(fmt.fontUnderline());
}


