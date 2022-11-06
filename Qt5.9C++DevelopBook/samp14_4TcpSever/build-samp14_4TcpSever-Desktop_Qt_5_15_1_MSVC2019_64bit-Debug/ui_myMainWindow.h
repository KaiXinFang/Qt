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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myMainWindow
{
public:
    QAction *actStart;
    QAction *actStop;
    QAction *actClearText;
    QAction *actExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editMsg;
    QPushButton *btnSend;
    QSpinBox *spinPort;
    QLabel *label_2;
    QComboBox *comboIP;
    QPlainTextEdit *plainTextEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QString::fromUtf8("myMainWindow"));
        myMainWindow->resize(410, 350);
        actStart = new QAction(myMainWindow);
        actStart->setObjectName(QString::fromUtf8("actStart"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/image/boy.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actStart->setIcon(icon);
        actStop = new QAction(myMainWindow);
        actStop->setObjectName(QString::fromUtf8("actStop"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/image/girl.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actStop->setIcon(icon1);
        actClearText = new QAction(myMainWindow);
        actClearText->setObjectName(QString::fromUtf8("actClearText"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/image/clearXX.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actClearText->setIcon(icon2);
        actExit = new QAction(myMainWindow);
        actExit->setObjectName(QString::fromUtf8("actExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/image/redX.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actExit->setIcon(icon3);
        centralwidget = new QWidget(myMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editMsg = new QLineEdit(centralwidget);
        editMsg->setObjectName(QString::fromUtf8("editMsg"));

        gridLayout->addWidget(editMsg, 1, 0, 1, 4);

        btnSend = new QPushButton(centralwidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        gridLayout->addWidget(btnSend, 1, 4, 1, 1);

        spinPort = new QSpinBox(centralwidget);
        spinPort->setObjectName(QString::fromUtf8("spinPort"));

        gridLayout->addWidget(spinPort, 0, 4, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        comboIP = new QComboBox(centralwidget);
        comboIP->setObjectName(QString::fromUtf8("comboIP"));

        gridLayout->addWidget(comboIP, 0, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_2->addWidget(plainTextEdit, 1, 0, 1, 1);

        myMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(myMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        myMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(myMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        myMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actStart);
        toolBar->addAction(actStop);
        toolBar->addAction(actClearText);
        toolBar->addSeparator();
        toolBar->addAction(actExit);

        retranslateUi(myMainWindow);

        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QCoreApplication::translate("myMainWindow", "myMainWindow", nullptr));
        actStart->setText(QCoreApplication::translate("myMainWindow", "\345\274\200\345\247\213\347\233\221\345\220\254", nullptr));
        actStop->setText(QCoreApplication::translate("myMainWindow", "\345\201\234\346\255\242\347\233\221\345\220\254", nullptr));
        actClearText->setText(QCoreApplication::translate("myMainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        actExit->setText(QCoreApplication::translate("myMainWindow", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("myMainWindow", "\347\233\221\345\220\254\345\234\260\345\235\200\357\274\232", nullptr));
        btnSend->setText(QCoreApplication::translate("myMainWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("myMainWindow", "\347\233\221\345\220\254\347\253\257\345\217\243\357\274\232", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("myMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
