#ifndef QDIALOGLOGIN_H
#define QDIALOGLOGIN_H

#include <QDialog>
#include <QLineEdit>
#include <QPoint>
#include <QString>
#include <QMouseEvent>
#include <QSettings>
#include <QByteArray>
#include <QCryptographicHash>
#include <QMessageBox>


namespace Ui {
class QDialogLogin;
}

class QDialogLogin : public QDialog
{
    Q_OBJECT
private:
    bool m_moving=false;//表示窗口是否在鼠标操作下移动
    QPoint m_lastPos;//上一次鼠标的位置
    QString m_user="user";//初始化用户名
    QString m_pswd="12345";//初始化密码，未加密的
    int m_tryCount=0;//试错次数
    void readSettings();//读取设置，注册表
    void writeSettings();//写入设置，注册表
    QString encrypt(const QString &str);//字符串加密
protected:
    //用于鼠标拖动窗口的鼠标事件
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
public:
    explicit QDialogLogin(QWidget *parent = nullptr);
    ~QDialogLogin();

private slots:
    void on_btnOK_clicked();

private:
    Ui::QDialogLogin *ui;
};

#endif // QDIALOGLOGIN_H
