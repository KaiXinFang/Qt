#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QTime>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class myWidget; }
QT_END_NAMESPACE

class myWidget : public QWidget
{
    Q_OBJECT

public:
    myWidget(QWidget *parent = nullptr);
    ~myWidget();
private:
    QTimer *fTimer;//定时器
    QTime fTimeCounter;//计时器
private slots:

    void on_timer_timeout();//定时器槽函数

    void on_pushButton_clicked();

    void on_btnSetDateTime_clicked();

    void on_calendarWidget_selectionChanged();

    void on_btnStart_clicked();

    void on_btnStop_clicked();

private:
    Ui::myWidget *ui;
};
#endif // MYWIDGET_H
