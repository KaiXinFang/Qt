#include "QmyWidget.h"
#include "ui_QmyWidget.h"

QmyWidget::QmyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QmyWidget)
{
    ui->setupUi(this);
    boy=new QPerson("王小明");
    boy->setProperty("age",10);
    boy->setProperty("score",95);
    boy->setProperty("sex","Boy");//动态属性
    connect(boy,&QPerson::ageChanged,this,&QmyWidget::on_ageChanged);

    gril=new QPerson("张小丽");
    gril->setProperty("score",81);
    gril->setProperty("age",18);
    gril->setProperty("sex","Girl");
    connect(gril,&QPerson::ageChanged,this,&QmyWidget::on_ageChanged);
    ui->spinBoy->setProperty("isBoy",true);
    ui->spinGirl->setProperty("isBoy",false);

    connect(ui->spinBoy,QOverload<int>::of(&QSpinBox::valueChanged),
            this,&QmyWidget::on_spin_valueChanged);
    connect(ui->spinGirl,QOverload<int>::of(&QSpinBox::valueChanged),
            this,&QmyWidget::on_spin_valueChanged);
    connect(ui->btnClassInfo,&QPushButton::clicked,
            this,&QmyWidget::on_btnClassInfo_clicked);
}

QmyWidget::~QmyWidget()
{
    delete ui;
}

void QmyWidget::on_ageChanged(int value)
{
    //响应QPerson的ageChanged()信号
    Q_UNUSED(value);    //若函数参数没有使用，就把他标明，避免出错
    QPerson *aPerson=qobject_cast<QPerson *>(sender());
    QString hisName=aPerson->property("name").toString();
    QString hisSex=aPerson->property("sex").toString();
    int hisAge=aPerson->age();
    ui->textEdit->appendPlainText(hisName+","+hisSex+QString::asprintf(",年龄=%d",hisAge));
}

void QmyWidget::on_spin_valueChanged(int arg1)
{
    //响应界面上spinBox的valueChanged(int)信号
    Q_UNUSED(arg1);
    QSpinBox *spinBox=qobject_cast<QSpinBox *>(sender());
    if(spinBox->property("isBoy").toBool()){
        boy->setAge(spinBox->value());
    }else{
        gril->setAge(spinBox->value());
    }
}

void QmyWidget::on_btnClassInfo_clicked()
{
    //类的元对象信息按钮
    const QMetaObject *meta=boy->metaObject();
    ui->textEdit->clear();
    ui->textEdit->appendPlainText("==元对象信息==\n");
    ui->textEdit->appendPlainText(QString("类名称:%1\n").arg(meta->className()));
    ui->textEdit->appendPlainText("property");
    for(int i=meta->propertyOffset();i<meta->propertyCount();i++){
        QMetaProperty prop=meta->property(i);
        const char* propName=prop.name();
        QString propValue=boy->property(propName).toString();
        ui->textEdit->appendPlainText(QString("属性名称=%1,属性值=%2").arg(propName).arg(propValue));
    }

    ui->textEdit->appendPlainText("");
    ui->textEdit->appendPlainText("classInfo");
    for(int i=meta->classInfoOffset();i<meta->classInfoCount();++i){
        QMetaClassInfo classInfo=meta->classInfo(i);
        ui->textEdit->appendPlainText(QString("Name=%1;Value=%2")
                                      .arg(classInfo.name()).arg(classInfo.value()));
    }
}






