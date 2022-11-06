/********************************************************************************
** Form generated from reading UI file 'QWMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWINDOW_H
#define UI_QWMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWindow
{
public:
    QAction *actWidgetInsite;
    QAction *actWidget;
    QAction *actWindowInsite;
    QAction *actWindow;
    QAction *actExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QWMainWindow)
    {
        if (QWMainWindow->objectName().isEmpty())
            QWMainWindow->setObjectName(QString::fromUtf8("QWMainWindow"));
        QWMainWindow->resize(679, 516);
        actWidgetInsite = new QAction(QWMainWindow);
        actWidgetInsite->setObjectName(QString::fromUtf8("actWidgetInsite"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/image/boy.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actWidgetInsite->setIcon(icon);
        actWidget = new QAction(QWMainWindow);
        actWidget->setObjectName(QString::fromUtf8("actWidget"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/image/girl.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actWidget->setIcon(icon1);
        actWindowInsite = new QAction(QWMainWindow);
        actWindowInsite->setObjectName(QString::fromUtf8("actWindowInsite"));
        actWindowInsite->setIcon(icon);
        actWindow = new QAction(QWMainWindow);
        actWindow->setObjectName(QString::fromUtf8("actWindow"));
        actWindow->setIcon(icon1);
        actExit = new QAction(QWMainWindow);
        actExit->setObjectName(QString::fromUtf8("actExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/image/redX.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actExit->setIcon(icon2);
        centralwidget = new QWidget(QWMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        QWMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(QWMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QWMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(QWMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        QWMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actWidgetInsite);
        toolBar->addAction(actWidget);
        toolBar->addSeparator();
        toolBar->addAction(actWindowInsite);
        toolBar->addAction(actWindow);
        toolBar->addSeparator();
        toolBar->addAction(actExit);

        retranslateUi(QWMainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QWMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWindow)
    {
        QWMainWindow->setWindowTitle(QCoreApplication::translate("QWMainWindow", "QWMainWindow", nullptr));
        actWidgetInsite->setText(QCoreApplication::translate("QWMainWindow", "\345\265\214\345\205\245\345\274\217widget", nullptr));
        actWidget->setText(QCoreApplication::translate("QWMainWindow", "\347\213\254\347\253\213widget\347\252\227\345\217\243", nullptr));
        actWindowInsite->setText(QCoreApplication::translate("QWMainWindow", "\345\265\214\345\205\245\345\274\217MainWindow", nullptr));
        actWindow->setText(QCoreApplication::translate("QWMainWindow", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", nullptr));
        actExit->setText(QCoreApplication::translate("QWMainWindow", "\351\200\200\345\207\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("QWMainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("QWMainWindow", "Tab 2", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("QWMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWMainWindow: public Ui_QWMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWINDOW_H
