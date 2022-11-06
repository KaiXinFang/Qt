#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "QWDialog.h"
#include "QWDialogHeaders.h"
#include "QWDialogLocate.h"
#include <QCloseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE

class myMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QStandardItemModel *theModel;
    QItemSelectionModel *theSelectModel;
    QWDialogHeaders *dlgSetHeaders=NULL;
    QWDialogLocate *dlgLocate=NULL;
    void closeEvent(QCloseEvent *event);

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();
    void setACellText(int row,int column,QString text);
    void setActLocateEnable(bool enable);
    void setDlgLaocteNull();

private slots:
    void on_actSetrowandcolumn_triggered();

    void on_actSetHeader_triggered();

    void on_actLocation_triggered();

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::myMainWindow *ui;
};
#endif // MYMAINWINDOW_H
