#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QString>
#include <QDir>
#include <QFileDialog>
#include <QFileInfo>
#include <QUrl>


QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE

class myMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QMediaPlayer *player;//视频播放器
    QString durationTime;//文件播放时间位置
    QString positionTime;//文件总共时长

private slots:
    //自定义槽函数
    void onStateChanged(QMediaPlayer::State state);
    void onDurationChanged(qint64 duration);
    void onPositionChanged(qint64 position);

    void on_btnAdd_clicked();

    void on_btnPlay_clicked();

    void on_btnPause_clicked();

    void on_btnStop_clicked();

    void on_btnSound_clicked();

    void on_sliderPosition_valueChanged(int value);

    void on_btnFullScreen_clicked();

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();

private:
    Ui::myMainWindow *ui;
};
#endif // MYMAINWINDOW_H
