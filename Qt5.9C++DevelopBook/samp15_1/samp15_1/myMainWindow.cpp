#include "myMainWindow.h"
#include "ui_myMainWindow.h"

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    player=new QMediaPlayer(this);//播放器
    playList=new QMediaPlaylist(this);//播放列表
    playList->setPlaybackMode(QMediaPlaylist::Loop);//循环播放
    player->setPlaylist(playList);//将播放列表加入播放器

    //将自定义的槽函数和播放器绑定在一块
    connect(player,&QMediaPlayer::stateChanged,this,&myMainWindow::onStateChanged);
    connect(player,&QMediaPlayer::positionChanged,this,&myMainWindow::onPositionChanged);
    connect(player,&QMediaPlayer::durationChanged,this,&myMainWindow::onDurationChanged);
    connect(playList,&QMediaPlaylist::currentIndexChanged,this,&myMainWindow::onPlayListChanged);
}

myMainWindow::~myMainWindow()
{
    delete ui;
}

void myMainWindow::onStateChanged(QMediaPlayer::State state)
{
    //播放器状态变化，更新
    ui->btnPlay->setEnabled(!(state==QMediaPlayer::PlayingState));
    ui->btnPause->setEnabled(state==QMediaPlayer::PlayingState);
    ui->btnStop->setEnabled(state==QMediaPlayer::PlayingState);
}

void myMainWindow::onPlayListChanged(int position)
{
    //播放列表变化时，更新当前播放文件名显示
    ui->listWidget->setCurrentRow(position);
    QListWidgetItem *item=ui->listWidget->currentItem();
    if(item){
        ui->labCurMedia->setText(item->text());
    }
}

void myMainWindow::onDurationChanged(qint64 duration)
{
    //文件时长变化，更新进度显示
    ui->sliderPosition->setMaximum(duration);
    int sec=duration/1000;//秒
    int mins=sec/60;//分钟
    sec=sec%60;//余数秒
    durationTime=QString::asprintf("%d:%d",mins,sec);
    ui->labRatio->setText(positionTime+"/"+durationTime);
}

void myMainWindow::onPositionChanged(qint64 position)
{
    //当前文件播放位置变化，更新进度显示
    if(ui->sliderPosition->isSliderDown())//正处于手动调整状态,不处理
    {
        return;
    }
    ui->sliderPosition->setSliderPosition(position);
    int sec=position/1000;
    int mins=sec/60;
    sec=sec%60;
    positionTime=QString::asprintf("%d:%d",mins,sec);
    ui->labRatio->setText(positionTime+"/"+durationTime);
}

void myMainWindow::on_btnAdd_clicked()
{
    //添加文件
    QString curPath=QDir::homePath();//获取用户目录
    QString dlgTitle="选择音频文件";
    QString filter="音频文件(*.mp3 *.wav *.wma);;mp3文件(*.mp3);;wav文件(*.wav);;wma文件(*.wma);;所有文件(*.*)";
    QStringList fileList=QFileDialog::getOpenFileNames(this,dlgTitle,curPath,filter);
    if(fileList.count()<1){
        return;
    }
    for(int i=0;i<fileList.count();i++){
        QString aFile=fileList.at(i);
        playList->addMedia(QUrl::fromLocalFile(aFile));
        QFileInfo fileInfo(aFile);
        ui->listWidget->addItem(fileInfo.fileName());
    }
    if(player->state()!=QMediaPlayer::PlayingState){
        playList->setCurrentIndex(0);
    }
    player->play();
}

void myMainWindow::on_btnRemove_clicked()
{
    //移除一个文件
    int pos=ui->listWidget->currentRow();
    QListWidgetItem *item=ui->listWidget->takeItem(pos);
    delete item;
    playList->removeMedia(pos);
}

void myMainWindow::on_btnClear_clicked()
{
    //清空列表
    playList->clear();
    ui->listWidget->clear();
    player->stop();
}

void myMainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    //双击时切换播放文件
    int rowNo=index.row();
    playList->setCurrentIndex(rowNo);
    player->play();
}

void myMainWindow::on_btnPlay_clicked()
{
    //播放
    if(playList->currentIndex()<0)
        playList->setCurrentIndex(0);
    player->play();
}

void myMainWindow::on_btnPause_clicked()
{
    //暂停播放
    player->pause();
}

void myMainWindow::on_btnStop_clicked()
{
    //停止播放
    player->stop();
}

void myMainWindow::on_sliderVolumn_valueChanged(int value)
{
    //调整音量
    player->setVolume(value);
}

void myMainWindow::on_sliderPosition_valueChanged(int value)
{
    //文件进度调控
    player->setPosition(value);
}
