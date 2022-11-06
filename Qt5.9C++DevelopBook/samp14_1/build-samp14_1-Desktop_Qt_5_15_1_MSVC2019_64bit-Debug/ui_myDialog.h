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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_myDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btnGetHostInfo;
    QPushButton *btnDetail;
    QCheckBox *chkOnlyIPv4;
    QPushButton *btnALLInterface;
    QPushButton *btnLookUp;
    QLineEdit *editHost;
    QPushButton *btnClearText;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *myDialog)
    {
        if (myDialog->objectName().isEmpty())
            myDialog->setObjectName(QString::fromUtf8("myDialog"));
        myDialog->resize(432, 374);
        verticalLayout = new QVBoxLayout(myDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnGetHostInfo = new QPushButton(myDialog);
        btnGetHostInfo->setObjectName(QString::fromUtf8("btnGetHostInfo"));

        gridLayout->addWidget(btnGetHostInfo, 0, 0, 1, 1);

        btnDetail = new QPushButton(myDialog);
        btnDetail->setObjectName(QString::fromUtf8("btnDetail"));

        gridLayout->addWidget(btnDetail, 0, 1, 1, 1);

        chkOnlyIPv4 = new QCheckBox(myDialog);
        chkOnlyIPv4->setObjectName(QString::fromUtf8("chkOnlyIPv4"));

        gridLayout->addWidget(chkOnlyIPv4, 1, 0, 1, 1);

        btnALLInterface = new QPushButton(myDialog);
        btnALLInterface->setObjectName(QString::fromUtf8("btnALLInterface"));

        gridLayout->addWidget(btnALLInterface, 1, 1, 1, 1);

        btnLookUp = new QPushButton(myDialog);
        btnLookUp->setObjectName(QString::fromUtf8("btnLookUp"));

        gridLayout->addWidget(btnLookUp, 2, 0, 1, 1);

        editHost = new QLineEdit(myDialog);
        editHost->setObjectName(QString::fromUtf8("editHost"));

        gridLayout->addWidget(editHost, 2, 1, 1, 1);

        btnClearText = new QPushButton(myDialog);
        btnClearText->setObjectName(QString::fromUtf8("btnClearText"));

        gridLayout->addWidget(btnClearText, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        plainTextEdit = new QPlainTextEdit(myDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(myDialog);

        QMetaObject::connectSlotsByName(myDialog);
    } // setupUi

    void retranslateUi(QDialog *myDialog)
    {
        myDialog->setWindowTitle(QCoreApplication::translate("myDialog", "myDialog", nullptr));
        btnGetHostInfo->setText(QCoreApplication::translate("myDialog", "QHostInfo\350\216\267\345\217\226\346\234\254\346\234\272\344\270\273\346\234\272\345\220\215\345\222\214IP\345\234\260\345\235\200", nullptr));
        btnDetail->setText(QCoreApplication::translate("myDialog", "QNetworkInterface::allAddess()", nullptr));
        chkOnlyIPv4->setText(QCoreApplication::translate("myDialog", "\345\217\252\346\230\276\347\244\272IPv4\345\215\217\350\256\256\345\234\260\345\235\200", nullptr));
        btnALLInterface->setText(QCoreApplication::translate("myDialog", "QNetworkInterface::allInterfaces()", nullptr));
        btnLookUp->setText(QCoreApplication::translate("myDialog", "QHostInfo\346\237\245\346\211\276\345\237\237\345\220\215\345\222\214IP\345\234\260\345\235\200", nullptr));
        btnClearText->setText(QCoreApplication::translate("myDialog", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myDialog: public Ui_myDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
