#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QMenu>

QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE

class myMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();

private:
    void createSelectionPopMenu();

private slots:
    void on_actListIni_triggered();

    void on_actListClear_triggered();

    void on_actListInsert_triggered();

    void on_actListDelete_triggered();

    void on_pushButton_clicked();

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_actQuit_triggered();

    void on_listWidget_customContextMenuRequested(const QPoint &pos);

private:
    Ui::myMainWindow *ui;
};
#endif // MYMAINWINDOW_H
