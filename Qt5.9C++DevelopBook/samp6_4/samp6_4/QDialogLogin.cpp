#include "QDialogLogin.h"
#include "ui_QDialogLogin.h"

QDialogLogin::QDialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QDialogLogin)
{
    ui->setupUi(this);
    ui->editPWSD->setEchoMode(QLineEdit::Password);//设置为密码输入模式
    //this->setWindowState(Qt::WindowMaximized);
    this->setAttribute(Qt::WA_DeleteOnClose);//设置为关闭时删除
    this->setWindowFlags(Qt::SplashScreen);//设置为SplashScreen
    readSettings();//读取用户储存的用户名和密码
}

QDialogLogin::~QDialogLogin()
{
    delete ui;
}

void QDialogLogin::readSettings()
{
    //读取储存的用户名和密码，密码是经过加密的
    QString organization="WWB-Qt";//用于注册表
    QString appName="samp6_5";
    QSettings settings(organization,appName);
    bool saved=settings.value("saved",false).toBool();//读取saved
    m_user=settings.value("Username","user").toString();//读取Username
    QString defaultPSWD=encrypt("12345");//缺省密码"12345"加密后的数据
    m_pswd=settings.value("PSWD",defaultPSWD).toString();//读取PSWD
    if(saved)
        ui->editUser->setText(m_user);
    ui->checkBox_Save->setChecked(saved);
}

void QDialogLogin::writeSettings()
{
    //保存用户名，密码等设置
    QSettings settings("WWB-Qt","samp6_5");//注册表键组
    settings.setValue("Username",m_user);//用户名
    settings.setValue("PSWD",m_pswd);//密码，经过加密的
    settings.setValue("saved",ui->checkBox_Save->isChecked());
}

QString QDialogLogin::encrypt(const QString &str)
{
    //字符串MD5算法加密
    QByteArray btArray;
    btArray.append(str);
    QCryptographicHash hash(QCryptographicHash::Md5);//MD5加密算法
    hash.addData(btArray);//添加数据
    QByteArray resultArray=hash.result();//返回最终的散列值
    QString md5=resultArray.toHex();//转换为16进制字符串
    return md5;
}

void QDialogLogin::mousePressEvent(QMouseEvent *event)
{
    //鼠标按键被按下
    if(event->button()==Qt::LeftButton){
        m_moving=true;
        m_lastPos=event->globalPos()-pos();//记录下鼠标相对于窗口的位置
    }
    return QDialog::mousePressEvent(event);
}

void QDialogLogin::mouseMoveEvent(QMouseEvent *event)
{
    //鼠标按下左键移动
    if(m_moving&&(event->buttons() && Qt::LeftButton)&&(event->globalPos()-m_lastPos).manhattanLength()>QApplication::startDragDistance()){
        move(event->globalPos()-m_lastPos);
        m_lastPos=event->globalPos()-pos();
    }
    return QDialog::mouseMoveEvent(event);
}

void QDialogLogin::mouseReleaseEvent(QMouseEvent *event)
{
    //鼠标按键释放
    m_moving=false;//停止移动
}



void QDialogLogin::on_btnOK_clicked()
{
    //“确定”按钮
    QString user=ui->editUser->text().trimmed();//输入用户名
    QString pswd=ui->editPWSD->text().trimmed();//输入密码
    QString encrptPSWD=encrypt(pswd);//对输入密码进行加密
    if((user==m_user)&&(encrptPSWD==m_pswd)){
        writeSettings();
        this->accept();//对话框accept(), 关闭对话框
    }
    else{
        m_tryCount++;//错误次数
        if(m_tryCount>3){
            QMessageBox::critical(this,"错误","输入错误次数过多，强行退出");
            this->reject();//退出
        }
        else{
            QMessageBox::warning(this,"错误提示","用户名或密码错误");
        }
    }
}
