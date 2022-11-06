/********************************************************************************
** Form generated from reading UI file 'myDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_myDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnStartThread;
    QPushButton *btnDiceBegin;
    QPushButton *btnDiceEnd;
    QPushButton *btnStopThread;
    QPushButton *btnClear;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *plainTextEdit;
    QLabel *labPic;
    QLabel *labA;

    void setupUi(QDialog *myDialog)
    {
        if (myDialog->objectName().isEmpty())
            myDialog->setObjectName(QString::fromUtf8("myDialog"));
        myDialog->resize(468, 305);
        gridLayout = new QGridLayout(myDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(myDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnStartThread = new QPushButton(groupBox);
        btnStartThread->setObjectName(QString::fromUtf8("btnStartThread"));

        horizontalLayout->addWidget(btnStartThread);

        btnDiceBegin = new QPushButton(groupBox);
        btnDiceBegin->setObjectName(QString::fromUtf8("btnDiceBegin"));

        horizontalLayout->addWidget(btnDiceBegin);

        btnDiceEnd = new QPushButton(groupBox);
        btnDiceEnd->setObjectName(QString::fromUtf8("btnDiceEnd"));

        horizontalLayout->addWidget(btnDiceEnd);

        btnStopThread = new QPushButton(groupBox);
        btnStopThread->setObjectName(QString::fromUtf8("btnStopThread"));

        horizontalLayout->addWidget(btnStopThread);

        btnClear = new QPushButton(groupBox);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout->addWidget(btnClear);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        horizontalLayout_2->addWidget(plainTextEdit);

        labPic = new QLabel(groupBox);
        labPic->setObjectName(QString::fromUtf8("labPic"));
        labPic->setMinimumSize(QSize(171, 175));

        horizontalLayout_2->addWidget(labPic);


        verticalLayout->addLayout(horizontalLayout_2);

        labA = new QLabel(groupBox);
        labA->setObjectName(QString::fromUtf8("labA"));
        labA->setMinimumSize(QSize(309, 35));

        verticalLayout->addWidget(labA);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(myDialog);

        QMetaObject::connectSlotsByName(myDialog);
    } // setupUi

    void retranslateUi(QDialog *myDialog)
    {
        myDialog->setWindowTitle(QCoreApplication::translate("myDialog", "myDialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("myDialog", "\347\272\277\347\250\213", nullptr));
        btnStartThread->setText(QCoreApplication::translate("myDialog", "\345\220\257\345\212\250\347\272\277\347\250\213", nullptr));
        btnDiceBegin->setText(QCoreApplication::translate("myDialog", "\345\274\200\345\247\213", nullptr));
        btnDiceEnd->setText(QCoreApplication::translate("myDialog", "\346\232\202\345\201\234", nullptr));
        btnStopThread->setText(QCoreApplication::translate("myDialog", "\347\273\223\346\235\237\347\272\277\347\250\213", nullptr));
        btnClear->setText(QCoreApplication::translate("myDialog", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        labPic->setText(QString());
        labA->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class myDialog: public Ui_myDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
