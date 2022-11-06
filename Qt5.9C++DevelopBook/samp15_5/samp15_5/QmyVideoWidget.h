#ifndef QMYVIDEOWIDGET_H
#define QMYVIDEOWIDGET_H

#include <QObject>
#include <QVideoWidget>
#include <QWidget>
#include <QMediaPlayer>
#include <QKeyEvent>
#include <QMouseEvent>

class QmyVideoWidget : public QVideoWidget
{
    Q_OBJECT
private:
    QMediaPlayer *thePlayer;
protected:
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
public:
    explicit QmyVideoWidget(QWidget *parent = nullptr);
    void setMediaPlayer(QMediaPlayer *player);

signals:

};

#endif // QMYVIDEOWIDGET_H
