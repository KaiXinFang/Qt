#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QString>
#include <QDir>
#include <QFileDialog>
#include <QTextStream>
#include <QTextCodec>

QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE

class myMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();
    bool openTextByIODevice(const QString &aFileName);
    bool saveTextByIODevice(const QString &aFileName);
    bool openTextByStream(const QString &aFileName);
    bool saveTextByStream(const QString &aFileName);

private slots:
    void on_actOpen_IODevice_triggered();

    void on_actSave_IODevice_triggered();

    void on_actOpen_OnStream_triggered();

    void on_actSave_OnStream_triggered();

private:
    Ui::myMainWindow *ui;
};
#endif // MYMAINWINDOW_H
