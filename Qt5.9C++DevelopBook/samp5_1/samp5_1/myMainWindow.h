#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE

class myMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QFileSystemModel *model;

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

private:
    Ui::myMainWindow *ui;
};
#endif // MYMAINWINDOW_H
