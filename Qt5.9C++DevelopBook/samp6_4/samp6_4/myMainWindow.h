#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include "QFormDoc.h"
#include <QMdiSubWindow>
#include <QDir>
#include <QFileDialog>
#include "QDialogLogin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE

class myMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();

private slots:
    void on_actDoc_New_triggered();

    void on_actDoc_Open_triggered();

    void on_actCasde_Open_triggered();

    void on_actArea_Open_triggered();

    void on_actClose_All_triggered();



    void on_actMDI_Model_triggered(bool checked);

    void on_mdiArea_subWindowActivated(QMdiSubWindow *arg1);

    void on_actCut_triggered();

    void on_actFont_triggered();

private:
    Ui::myMainWindow *ui;
};
#endif // MYMAINWINDOW_H
