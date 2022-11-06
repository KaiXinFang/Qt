/********************************************************************************
** Form generated from reading UI file 'QWDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOG_H
#define UI_QWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_QWDialog
{
public:
    QGroupBox *groupBox;
    QCheckBox *chkBoxBold;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxUnder;
    QGroupBox *groupBox_2;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnBlue;
    QRadioButton *rBtnRed;
    QPlainTextEdit *plainTextEdit;
    QPushButton *btnOK;
    QPushButton *btnCancle;
    QPushButton *btnExit;

    void setupUi(QDialog *QWDialog)
    {
        if (QWDialog->objectName().isEmpty())
            QWDialog->setObjectName(QString::fromUtf8("QWDialog"));
        QWDialog->resize(536, 363);
        groupBox = new QGroupBox(QWDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(120, 64, 299, 81));
        groupBox->setMinimumSize(QSize(299, 81));
        chkBoxBold = new QCheckBox(groupBox);
        chkBoxBold->setObjectName(QString::fromUtf8("chkBoxBold"));
        chkBoxBold->setGeometry(QRect(13, 30, 49, 18));
        chkBoxItalic = new QCheckBox(groupBox);
        chkBoxItalic->setObjectName(QString::fromUtf8("chkBoxItalic"));
        chkBoxItalic->setGeometry(QRect(68, 30, 61, 18));
        chkBoxUnder = new QCheckBox(groupBox);
        chkBoxUnder->setObjectName(QString::fromUtf8("chkBoxUnder"));
        chkBoxUnder->setGeometry(QRect(135, 30, 73, 18));
        groupBox_2 = new QGroupBox(QWDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 151, 299, 51));
        groupBox_2->setMinimumSize(QSize(299, 51));
        rBtnBlack = new QRadioButton(groupBox_2);
        rBtnBlack->setObjectName(QString::fromUtf8("rBtnBlack"));
        rBtnBlack->setGeometry(QRect(13, 30, 87, 16));
        rBtnBlue = new QRadioButton(groupBox_2);
        rBtnBlue->setObjectName(QString::fromUtf8("rBtnBlue"));
        rBtnBlue->setGeometry(QRect(106, 30, 87, 16));
        rBtnRed = new QRadioButton(groupBox_2);
        rBtnRed->setObjectName(QString::fromUtf8("rBtnRed"));
        rBtnRed->setGeometry(QRect(199, 30, 87, 16));
        plainTextEdit = new QPlainTextEdit(QWDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(120, 208, 299, 59));
        plainTextEdit->setMinimumSize(QSize(297, 59));
        btnOK = new QPushButton(QWDialog);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setGeometry(QRect(140, 274, 80, 20));
        btnCancle = new QPushButton(QWDialog);
        btnCancle->setObjectName(QString::fromUtf8("btnCancle"));
        btnCancle->setGeometry(QRect(226, 274, 80, 20));
        btnExit = new QPushButton(QWDialog);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(332, 274, 80, 20));
        QWidget::setTabOrder(chkBoxBold, chkBoxItalic);
        QWidget::setTabOrder(chkBoxItalic, chkBoxUnder);
        QWidget::setTabOrder(chkBoxUnder, rBtnBlack);
        QWidget::setTabOrder(rBtnBlack, rBtnBlue);
        QWidget::setTabOrder(rBtnBlue, rBtnRed);
        QWidget::setTabOrder(rBtnRed, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, btnOK);
        QWidget::setTabOrder(btnOK, btnCancle);
        QWidget::setTabOrder(btnCancle, btnExit);

        retranslateUi(QWDialog);
        QObject::connect(btnOK, SIGNAL(clicked()), QWDialog, SLOT(accept()));
        QObject::connect(btnCancle, SIGNAL(clicked()), QWDialog, SLOT(reject()));
        QObject::connect(btnExit, SIGNAL(clicked()), QWDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(QWDialog);
    } // setupUi

    void retranslateUi(QDialog *QWDialog)
    {
        QWDialog->setWindowTitle(QCoreApplication::translate("QWDialog", "QWDialog", nullptr));
        groupBox->setTitle(QString());
        chkBoxBold->setText(QCoreApplication::translate("QWDialog", "Bold", nullptr));
        chkBoxItalic->setText(QCoreApplication::translate("QWDialog", "Italic", nullptr));
        chkBoxUnder->setText(QCoreApplication::translate("QWDialog", "Underlin", nullptr));
        groupBox_2->setTitle(QString());
        rBtnBlack->setText(QCoreApplication::translate("QWDialog", "Black", nullptr));
        rBtnBlue->setText(QCoreApplication::translate("QWDialog", "Blue", nullptr));
        rBtnRed->setText(QCoreApplication::translate("QWDialog", "Red", nullptr));
        btnOK->setText(QCoreApplication::translate("QWDialog", "\347\241\256\345\256\232", nullptr));
        btnCancle->setText(QCoreApplication::translate("QWDialog", "\345\217\226\346\266\210", nullptr));
        btnExit->setText(QCoreApplication::translate("QWDialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWDialog: public Ui_QWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOG_H
