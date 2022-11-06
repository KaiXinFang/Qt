#include "QDiceThread.h"

QDiceThread::QDiceThread(QObject *parent) : QThread(parent)
{

}

void QDiceThread::diceBegin()
{
    //开始掷骰子
    m_Paused=false;
}

void QDiceThread::dicePause()
{
    //暂停掷骰子
    m_Paused=true;
}

void QDiceThread::stopThread()
{
    //停止线程
    m_stop=true;
}

bool QDiceThread::readValue(int *seq, int *diceValue)
{
    if(mutex.tryLock()){
        *seq=m_seq;
        *diceValue=m_diceValue;
        mutex.unlock();
        return true;
    }
    else
        return false;
}

void QDiceThread::run()/*线程开启，自动调用*/
{
    //线程任务
    m_stop=false;
    m_seq=0;
    qsrand(QTime::currentTime().msec());//随机数初始化，qsrand是线程安全的
    while (!m_stop) {
        if(!m_Paused){
            mutex.lock();
            m_diceValue=qrand();//获取随机数
            m_diceValue=(m_diceValue%6)+1;
            m_seq++;
            mutex.unlock();
            //emit newValue(m_seq,m_diceValue);//发射信号
        }
        msleep(500);//线程休眠500ms
    }
    quit();//相当于exit(0),退出线程的事件循环
}
