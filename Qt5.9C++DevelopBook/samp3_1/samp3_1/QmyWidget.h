#ifndef QMYWIDGET_H
#define QMYWIDGET_H

#include <QWidget>
#include "QPerson.h"
#include <QMetaClassInfo>
#include <QMetaProperty>
#include <QMetaObject>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class QmyWidget; }
QT_END_NAMESPACE

class QmyWidget : public QWidget
{
    Q_OBJECT
private:
    QPerson *boy;
    QPerson *gril;

public:
    QmyWidget(QWidget *parent = nullptr);
    ~QmyWidget();

private slots:
    //自定义槽函数
    void on_ageChanged(int value);
    void on_spin_valueChanged(int arg1);
    //界面按钮的槽函数
    void on_btnClear_clicked();
    void on_btnBoyInc_clicked();
    void on_btnGrilInc_clicked();
    void on_btnClassInfo_clicked();

private:
    Ui::QmyWidget *ui;
};
#endif // QMYWIDGET_H
