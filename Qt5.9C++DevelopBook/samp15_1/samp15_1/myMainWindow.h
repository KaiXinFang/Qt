#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QString>
#include <QListWidgetItem>
#include <QDir>
#include <QString>
#include <QStringList>
#include <QFileDialog>
#include <QUrl>
#include <QFileInfo>
#include <QModelIndex>

QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE

class myMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QMediaPlayer *player;//播放器
    QMediaPlaylist *playList;//播放列表
    QString durationTime;//总长度
    QString positionTime;//当前播放到的位置
private slots:
    //自定义槽函数
    void onStateChanged(QMediaPlayer::State state);
    void onPlayListChanged(int position);
    void onDurationChanged(qint64 duration);
    void onPositionChanged(qint64 position);

    void on_btnAdd_clicked();

    void on_btnRemove_clicked();

    void on_btnClear_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_btnPlay_clicked();

    void on_btnPause_clicked();

    void on_btnStop_clicked();



    void on_sliderVolumn_valueChanged(int value);

    void on_sliderPosition_valueChanged(int value);

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();

private:
    Ui::myMainWindow *ui;
};
#endif // MYMAINWINDOW_H
