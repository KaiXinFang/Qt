#include "myMainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDialogLogin *dlgLogin=new QDialogLogin();
    if(dlgLogin->exec()==QDialog::Accepted)
    {
        myMainWindow w;
        w.show();
        return a.exec();
    }else{
        return 0;
    }

}
