#ifndef QWMAINWINDOW_H
#define QWMAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QProgressBar>
#include <QSpinBox>
#include <QFontComboBox>
#include <QTextCharFormat>


QT_BEGIN_NAMESPACE
namespace Ui { class QWMainWindow; }
QT_END_NAMESPACE

class QWMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel *flabCurFile;
    QProgressBar *progressBar1;
    QSpinBox *spinFontSize;
    QFontComboBox *comboFont;

    void iniUI();
    void iniSignalSlots();

public:
    QWMainWindow(QWidget *parent = nullptr);
    ~QWMainWindow();

private slots:
    void on_actFontBold_triggered(bool checked);

    void on_txtEdit_copyAvailable(bool b);

    void on_txtEdit_selectionChanged();


private:
    Ui::QWMainWindow *ui;
};
#endif // QWMAINWINDOW_H
