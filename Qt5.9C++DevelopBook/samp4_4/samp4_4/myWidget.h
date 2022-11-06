#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class myWidget; }
QT_END_NAMESPACE

class myWidget : public QWidget
{
    Q_OBJECT

public:
    myWidget(QWidget *parent = nullptr);
    ~myWidget();

private slots:
    void on_SliderRed_valueChanged(int value);

    void on_dial_valueChanged(int value);

    void on_rbtDec_clicked();

    void on_rbtBin_clicked();

    void on_rbtOct_clicked();

    void on_rbtHex_clicked();

private:
    Ui::myWidget *ui;
};
#endif // MYWIDGET_H
