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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myMainWindow
{
public:
    QAction *actOpen_IODevice;
    QAction *actSave_IODevice;
    QAction *actOpen_OnStream;
    QAction *actSave_OnStream;
    QAction *actExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPlainTextEdit *textEditDevice;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *textEditStream;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QString::fromUtf8("myMainWindow"));
        myMainWindow->resize(475, 355);
        actOpen_IODevice = new QAction(myMainWindow);
        actOpen_IODevice->setObjectName(QString::fromUtf8("actOpen_IODevice"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/image/boy.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen_IODevice->setIcon(icon);
        actSave_IODevice = new QAction(myMainWindow);
        actSave_IODevice->setObjectName(QString::fromUtf8("actSave_IODevice"));
        actSave_IODevice->setIcon(icon);
        actOpen_OnStream = new QAction(myMainWindow);
        actOpen_OnStream->setObjectName(QString::fromUtf8("actOpen_OnStream"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/image/girl.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen_OnStream->setIcon(icon1);
        actSave_OnStream = new QAction(myMainWindow);
        actSave_OnStream->setObjectName(QString::fromUtf8("actSave_OnStream"));
        actSave_OnStream->setIcon(icon1);
        actExit = new QAction(myMainWindow);
        actExit->setObjectName(QString::fromUtf8("actExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/image/redX.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actExit->setIcon(icon2);
        centralwidget = new QWidget(myMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEditDevice = new QPlainTextEdit(tab);
        textEditDevice->setObjectName(QString::fromUtf8("textEditDevice"));

        gridLayout->addWidget(textEditDevice, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEditStream = new QPlainTextEdit(tab_2);
        textEditStream->setObjectName(QString::fromUtf8("textEditStream"));

        gridLayout_2->addWidget(textEditStream, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);

        myMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(myMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        myMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(myMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        myMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actOpen_IODevice);
        toolBar->addAction(actSave_IODevice);
        toolBar->addSeparator();
        toolBar->addAction(actOpen_OnStream);
        toolBar->addAction(actSave_OnStream);
        toolBar->addSeparator();
        toolBar->addAction(actExit);

        retranslateUi(myMainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QCoreApplication::translate("myMainWindow", "myMainWindow", nullptr));
        actOpen_IODevice->setText(QCoreApplication::translate("myMainWindow", "QFile\347\233\264\346\216\245\346\211\223\345\274\200", nullptr));
        actSave_IODevice->setText(QCoreApplication::translate("myMainWindow", "QFile\345\217\246\345\255\230", nullptr));
        actOpen_OnStream->setText(QCoreApplication::translate("myMainWindow", "QStreamText\346\211\223\345\274\200", nullptr));
        actSave_OnStream->setText(QCoreApplication::translate("myMainWindow", "QStreamText\345\217\246\345\255\230", nullptr));
        actExit->setText(QCoreApplication::translate("myMainWindow", "\351\200\200\345\207\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("myMainWindow", "QFile\347\233\264\346\216\245 \346\223\215\344\275\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("myMainWindow", "  QTextStream\346\223\215\344\275\234", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("myMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
