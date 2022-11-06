/********************************************************************************
** Form generated from reading UI file 'QWDialogHeaders.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOGHEADERS_H
#define UI_QWDIALOGHEADERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QWDialogHeaders
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QListView *listView;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnOk;
    QSpacerItem *verticalSpacer;
    QPushButton *btnCancle;

    void setupUi(QDialog *QWDialogHeaders)
    {
        if (QWDialogHeaders->objectName().isEmpty())
            QWDialogHeaders->setObjectName(QString::fromUtf8("QWDialogHeaders"));
        QWDialogHeaders->resize(386, 185);
        gridLayout_2 = new QGridLayout(QWDialogHeaders);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(QWDialogHeaders);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listView = new QListView(groupBox);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnOk = new QPushButton(QWDialogHeaders);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        verticalLayout->addWidget(btnOk);

        verticalSpacer = new QSpacerItem(20, 84, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnCancle = new QPushButton(QWDialogHeaders);
        btnCancle->setObjectName(QString::fromUtf8("btnCancle"));

        verticalLayout->addWidget(btnCancle);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);


        retranslateUi(QWDialogHeaders);
        QObject::connect(btnOk, SIGNAL(clicked()), QWDialogHeaders, SLOT(accept()));
        QObject::connect(btnCancle, SIGNAL(clicked()), QWDialogHeaders, SLOT(reject()));

        QMetaObject::connectSlotsByName(QWDialogHeaders);
    } // setupUi

    void retranslateUi(QDialog *QWDialogHeaders)
    {
        QWDialogHeaders->setWindowTitle(QCoreApplication::translate("QWDialogHeaders", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QWDialogHeaders", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
        btnOk->setText(QCoreApplication::translate("QWDialogHeaders", "\347\241\256\345\256\232", nullptr));
        btnCancle->setText(QCoreApplication::translate("QWDialogHeaders", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWDialogHeaders: public Ui_QWDialogHeaders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOGHEADERS_H
