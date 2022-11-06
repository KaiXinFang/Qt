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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myMainWindow
{
public:
    QAction *actSetrowandcolumn;
    QAction *actSetHeader;
    QAction *actLocation;
    QAction *actExit;
    QWidget *centralwidget;
    QTableView *tableView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QString::fromUtf8("myMainWindow"));
        myMainWindow->resize(640, 472);
        actSetrowandcolumn = new QAction(myMainWindow);
        actSetrowandcolumn->setObjectName(QString::fromUtf8("actSetrowandcolumn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/image/boy.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actSetrowandcolumn->setIcon(icon);
        actSetHeader = new QAction(myMainWindow);
        actSetHeader->setObjectName(QString::fromUtf8("actSetHeader"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/image/girl.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actSetHeader->setIcon(icon1);
        actLocation = new QAction(myMainWindow);
        actLocation->setObjectName(QString::fromUtf8("actLocation"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/image/toolbarlab.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actLocation->setIcon(icon2);
        actExit = new QAction(myMainWindow);
        actExit->setObjectName(QString::fromUtf8("actExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/image/redX.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actExit->setIcon(icon3);
        centralwidget = new QWidget(myMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(9, 9, 619, 383));
        myMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(myMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        myMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(myMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        myMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actSetrowandcolumn);
        toolBar->addAction(actSetHeader);
        toolBar->addAction(actLocation);
        toolBar->addSeparator();
        toolBar->addAction(actExit);

        retranslateUi(myMainWindow);

        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QCoreApplication::translate("myMainWindow", "myMainWindow", nullptr));
        actSetrowandcolumn->setText(QCoreApplication::translate("myMainWindow", "\350\256\276\347\275\256\350\241\214\345\210\227\346\225\260", nullptr));
        actSetHeader->setText(QCoreApplication::translate("myMainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
        actLocation->setText(QCoreApplication::translate("myMainWindow", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", nullptr));
        actExit->setText(QCoreApplication::translate("myMainWindow", "\351\200\200\345\207\272", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("myMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
