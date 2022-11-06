#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QList>
#include <QMap>
#include <QMenu>

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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_2_currentIndexChanged(const QString &arg1);

    void on_plainTextEdit_customContextMenuRequested(const QPoint &pos);

private:
    Ui::myWidget *ui;
};
#endif // MYWIDGET_H
