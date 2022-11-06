/********************************************************************************
** Form generated from reading UI file 'myMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW_H
#define UI_MYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myMainWindow
{
public:
    QAction *actDoc_New;
    QAction *actDoc_Open;
    QAction *actClose_All;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFont;
    QAction *actMDI_Model;
    QAction *actCasde_Open;
    QAction *actArea_Open;
    QAction *actExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QString::fromUtf8("myMainWindow"));
        myMainWindow->resize(696, 511);
        actDoc_New = new QAction(myMainWindow);
        actDoc_New->setObjectName(QString::fromUtf8("actDoc_New"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/image/new.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actDoc_New->setIcon(icon);
        actDoc_Open = new QAction(myMainWindow);
        actDoc_Open->setObjectName(QString::fromUtf8("actDoc_Open"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/image/open.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actDoc_Open->setIcon(icon1);
        actClose_All = new QAction(myMainWindow);
        actClose_All->setObjectName(QString::fromUtf8("actClose_All"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/image/close.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actClose_All->setIcon(icon2);
        actCut = new QAction(myMainWindow);
        actCut->setObjectName(QString::fromUtf8("actCut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/image/cut.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon3);
        actCopy = new QAction(myMainWindow);
        actCopy->setObjectName(QString::fromUtf8("actCopy"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/image/copy.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon4);
        actPaste = new QAction(myMainWindow);
        actPaste->setObjectName(QString::fromUtf8("actPaste"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/image/paste.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon5);
        actFont = new QAction(myMainWindow);
        actFont->setObjectName(QString::fromUtf8("actFont"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/image/font.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actFont->setIcon(icon6);
        actMDI_Model = new QAction(myMainWindow);
        actMDI_Model->setObjectName(QString::fromUtf8("actMDI_Model"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/image/toolbarlab.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actMDI_Model->setIcon(icon7);
        actCasde_Open = new QAction(myMainWindow);
        actCasde_Open->setObjectName(QString::fromUtf8("actCasde_Open"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/image/Redo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actCasde_Open->setIcon(icon8);
        actArea_Open = new QAction(myMainWindow);
        actArea_Open->setObjectName(QString::fromUtf8("actArea_Open"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/image/Undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actArea_Open->setIcon(icon9);
        actExit = new QAction(myMainWindow);
        actExit->setObjectName(QString::fromUtf8("actExit"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/image/image/redX.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actExit->setIcon(icon10);
        centralwidget = new QWidget(myMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        myMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(myMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        myMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(myMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        myMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actDoc_New);
        toolBar->addAction(actDoc_Open);
        toolBar->addAction(actClose_All);
        toolBar->addSeparator();
        toolBar->addAction(actCut);
        toolBar->addAction(actCopy);
        toolBar->addAction(actPaste);
        toolBar->addAction(actFont);
        toolBar->addSeparator();
        toolBar->addAction(actMDI_Model);
        toolBar->addAction(actCasde_Open);
        toolBar->addAction(actArea_Open);
        toolBar->addSeparator();
        toolBar->addAction(actExit);

        retranslateUi(myMainWindow);

        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QCoreApplication::translate("myMainWindow", "myMainWindow", nullptr));
        actDoc_New->setText(QCoreApplication::translate("myMainWindow", "\346\226\260\345\273\272\346\226\207\346\241\243", nullptr));
        actDoc_Open->setText(QCoreApplication::translate("myMainWindow", "\346\211\223\345\274\200\346\226\207\346\241\243", nullptr));
        actClose_All->setText(QCoreApplication::translate("myMainWindow", "\345\205\263\351\227\255\345\205\250\351\203\250", nullptr));
        actCut->setText(QCoreApplication::translate("myMainWindow", "\345\211\252\345\210\207", nullptr));
        actCopy->setText(QCoreApplication::translate("myMainWindow", "\345\244\215\345\210\266", nullptr));
        actPaste->setText(QCoreApplication::translate("myMainWindow", "\347\262\230\350\264\264", nullptr));
        actFont->setText(QCoreApplication::translate("myMainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
        actMDI_Model->setText(QCoreApplication::translate("myMainWindow", "MDI\346\250\241\345\274\217", nullptr));
        actCasde_Open->setText(QCoreApplication::translate("myMainWindow", "\347\272\247\350\201\224\345\261\225\345\274\200", nullptr));
        actArea_Open->setText(QCoreApplication::translate("myMainWindow", "\345\271\263\351\223\272\345\261\225\345\274\200", nullptr));
        actExit->setText(QCoreApplication::translate("myMainWindow", "\351\200\200\345\207\272", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("myMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
