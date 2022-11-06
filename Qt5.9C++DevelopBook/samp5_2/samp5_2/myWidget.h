#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QStringListModel>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class myWidget; }
QT_END_NAMESPACE

class myWidget : public QWidget
{
    Q_OBJECT
private:
    QStringListModel *theModel;

public:
    myWidget(QWidget *parent = nullptr);
    ~myWidget();

private slots:
    void on_btnListAppend_clicked();

    void on_btnListInsert_clicked();

    void on_btnListDel_clicked();

    void on_btnListClear_clicked();

    void on_btnTextImport_clicked();

    void on_listView_clicked(const QModelIndex &index);

private:
    Ui::myWidget *ui;
};
#endif // MYWIDGET_H
