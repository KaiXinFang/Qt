#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MyWidget; }
QT_END_NAMESPACE

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private slots:
    void on_btnCal_clicked();



    void on_btnDec_clicked();

    void on_btnBin_clicked();

private:
    Ui::MyWidget *ui;
};
#endif // MYWIDGET_H
