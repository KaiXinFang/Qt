#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include "QDiceThread.h"
#include <QString>
#include <QPixmap>
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui { class myDialog; }
QT_END_NAMESPACE

class myDialog : public QDialog
{
    Q_OBJECT
private:
    int mSeq,mDiceValue;
    QTimer mTimer;
    QDiceThread threadA;

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    //自定义槽函数
    void onthreadA_started();
    void onthreadA_finished();
    //void onthreadA_newValue(int seq,int diceValue);
    void onTimeOut();//定时器处理槽函数



    void on_btnStartThread_clicked();

    void on_btnDiceBegin_clicked();

    void on_btnDiceEnd_clicked();

    void on_btnStopThread_clicked();

    void on_btnClear_clicked();

public:
    myDialog(QWidget *parent = nullptr);
    ~myDialog();

private:
    Ui::myDialog *ui;
};
#endif // MYDIALOG_H
