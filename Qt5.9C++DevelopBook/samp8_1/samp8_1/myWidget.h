#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPalette>
#include <QPainter>
#include <QRect>
#include <QPen>
#include <QBrush>

QT_BEGIN_NAMESPACE
namespace Ui { class myWidget; }
QT_END_NAMESPACE

class myWidget : public QWidget
{
    Q_OBJECT
protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

public:
    myWidget(QWidget *parent = nullptr);
    ~myWidget();

private:
    Ui::myWidget *ui;
};
#endif // MYWIDGET_H
