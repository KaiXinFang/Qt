#ifndef QWDIALOG_H
#define QWDIALOG_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class QWDialog;
}

class QWDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QWDialog(QWidget *parent = nullptr);
    ~QWDialog();
    int rowCount();//返回对话框输入的行数
    int columnCount();//返回对话框输入的列数
    void setRowColumn(int row,int column);//初始对话框上两个spinbox的值

private:
    Ui::QWDialog *ui;
};

#endif // QWDIALOG_H
