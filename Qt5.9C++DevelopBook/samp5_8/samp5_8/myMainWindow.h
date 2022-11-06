#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QString>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include <QAbstractItemView>
#include <QCoreApplication>
#include <QFileDialog>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QDebug>

#include "QWIntSpinDelegate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE

#define fixedColumnCount 6  //文件固定6列

class myMainWindow : public QMainWindow
{
    Q_OBJECT
private:

    QWIntSpinDelegate intSpinDelegate;//实例化整型数代理类

    QLabel *LabCurFile;
    QLabel *LabCellPos;
    QLabel *LabCellText;
    QStandardItemModel *theModel;
    QItemSelectionModel *theSelection;
    void iniModelFromStringList(QStringList &aFileContent);

public slots:
    void on_currentChanged(const QModelIndex &current,const QModelIndex &previous);

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();

private slots:
    void on_actOpen_triggered();

    void on_actAppend_triggered();

    void on_actDelete_triggered();

    void on_actAlignLeft_triggered();

    void on_actFontBold_triggered(bool checked);

    void on_actSave_triggered();

private:
    Ui::myMainWindow *ui;
    //当前选择单元格发生变化

};
#endif // MYMAINWINDOW_H
