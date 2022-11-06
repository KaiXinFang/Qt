#include "myMainWindow.h"
#include "ui_myMainWindow.h"

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    player=new QMediaPlayer(this);//创建视频播放器
    player->setNotifyInterval(2000);//信息更新周期200ms
    player->setVideoOutput(ui->videoWidegt);//视频显示组件
    ui->videoWidegt->setMediaPlayer(player);//设置显示组件的关联播放器

    connect(player,&QMediaPlayer::stateChanged,this,&myMainWindow::onStateChanged);//文件播放状态变化响应
    connect(player,&QMediaPlayer::positionChanged,this,&myMainWindow::onPositionChanged);//文件播放时间变化响应
    connect(player,&QMediaPlayer::durationChanged,this,&myMainWindow::onDurationChanged);//文件总时长变化响应
}

myMainWindow::~myMainWindow()
{
    delete ui;
}

void myMainWindow::onStateChanged(QMediaPlayer::State state)
{
    //播放器状态变化
    ui->btnPlay->setEnabled(!(state==QMediaPlayer::PlayingState));
    ui->btnPause->setEnabled(state==QMediaPlayer::PlayingState);
    ui->btnStop->setEnabled(state==QMediaPlayer::PlayingState);
}

void myMainWindow::onDurationChanged(qint64 duration)
{
    //文件时长变化
    ui->sliderPosition->setMaximum(duration);
    int secs=duration/1000;//秒
    int mins=secs/60;//分钟
    secs=secs%60;//余数秒
    durationTime=QString::asprintf("%d:%d",mins,secs);
    ui->labRatio->setText(positionTime+"/"+durationTime);
}

void myMainWindow::onPositionChanged(qint64 position)
{
    //文件时间播放位置变化
    if(ui->sliderPosition->isSliderDown())
        return;//如果正在拖动滑条，退出
    ui->sliderPosition->setSliderPosition(position);
    int secs=position/1000;//秒
    int mins=secs/60;//分钟
    secs=secs%60;//余数秒
    positionTime=QString::asprintf("%d:%d",mins,secs);
    ui->labRatio->setText(positionTime+"/"+durationTime);
}



void myMainWindow::on_btnAdd_clicked()
{
    //打开文件
    QString curPath=QDir::homePath();
    QString dlgTitle="选择视频文件";//对话框标题
    QString filter="wmv文件(*.wmv);;mp4文件(*.mp4);;所有文件(*.*)";
    QString aFile=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(aFile.isEmpty())
        return;
    QFileInfo fileInfo(aFile);
    ui->labCurMedia->setText(fileInfo.fileName());
    player->setMedia(QUrl::fromLocalFile(aFile));
    player->play();
}

void myMainWindow::on_btnPlay_clicked()
{
    //播放
    player->play();
}

void myMainWindow::on_btnPause_clicked()
{
    //暂停
    player->pause();
}

void myMainWindow::on_btnStop_clicked()
{
    //停止
    player->stop();
}

void myMainWindow::on_btnSound_clicked()
{
    //静音按钮
    bool mute=player->isMuted();//mute沉默的，无声的
    player->setMuted(!mute);
    if(mute)
        ui->btnSound->setIcon(QIcon("qrc:/img/image/jingyin.jfif"));
    else
        ui->btnSound->setIcon(QIcon("qrc:/img/image/sound.jfif"));

}

void myMainWindow::on_sliderPosition_valueChanged(int value)
{
    //播放位置
    player->setPosition(value);
}

void myMainWindow::on_btnFullScreen_clicked()
{
    //全屏按键
    ui->videoWidegt->setFullScreen(true);
}
