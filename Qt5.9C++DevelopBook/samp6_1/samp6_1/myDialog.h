#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QString>
#include <QDir>
#include <QFileDialog>
#include <QColorDialog>
#include <QPalette>
#include <QColor>
#include <QFont>
#include <QFontDialog>
#include <QInputDialog>
#include <QLineEdit>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class myDialog; }
QT_END_NAMESPACE

class myDialog : public QDialog
{
    Q_OBJECT

public:
    myDialog(QWidget *parent = nullptr);
    ~myDialog();

private slots:
    void on_btnOpen_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::myDialog *ui;
};
#endif // MYDIALOG_H
