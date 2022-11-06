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
    QAction *actConnect;
    QAction *actDisconnect;
    QAction *actClear;
    QAction *actExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QPushButton *btnSend;
    QLabel *label_2;
    QComboBox *comboServer;
    QPlainTextEdit *plainTextEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QString::fromUtf8("myMainWindow"));
        myMainWindow->resize(452, 382);
        actConnect = new QAction(myMainWindow);
        actConnect->setObjectName(QString::fromUtf8("actConnect"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/image/boy.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actConnect->setIcon(icon);
        actDisconnect = new QAction(myMainWindow);
        actDisconnect->setObjectName(QString::fromUtf8("actDisconnect"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/image/girl.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actDisconnect->setIcon(icon1);
        actClear = new QAction(myMainWindow);
        actClear->setObjectName(QString::fromUtf8("actClear"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/image/clear.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actClear->setIcon(icon2);
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

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 4);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 0, 4, 1, 1);

        btnSend = new QPushButton(centralwidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        gridLayout->addWidget(btnSend, 1, 4, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        comboServer = new QComboBox(centralwidget);
        comboServer->setObjectName(QString::fromUtf8("comboServer"));

        gridLayout->addWidget(comboServer, 0, 1, 1, 2);


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

        toolBar->addAction(actConnect);
        toolBar->addAction(actDisconnect);
        toolBar->addAction(actClear);
        toolBar->addSeparator();
        toolBar->addAction(actExit);

        retranslateUi(myMainWindow);

        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QCoreApplication::translate("myMainWindow", "myMainWindow", nullptr));
        actConnect->setText(QCoreApplication::translate("myMainWindow", "\350\277\236\346\216\245\345\210\260\346\234\215\345\212\241\345\231\250", nullptr));
        actDisconnect->setText(QCoreApplication::translate("myMainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        actClear->setText(QCoreApplication::translate("myMainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
        actExit->setText(QCoreApplication::translate("myMainWindow", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("myMainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\357\274\232", nullptr));
        btnSend->setText(QCoreApplication::translate("myMainWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("myMainWindow", "\347\253\257\345\217\243\357\274\232", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("myMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
