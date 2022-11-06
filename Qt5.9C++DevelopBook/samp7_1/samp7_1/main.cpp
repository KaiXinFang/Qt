#include "myMainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //解决汉字乱码的问题
    QTextCodec *codec=QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);
    QApplication a(argc, argv);
    myMainWindow w;
    w.show();
    return a.exec();
}
