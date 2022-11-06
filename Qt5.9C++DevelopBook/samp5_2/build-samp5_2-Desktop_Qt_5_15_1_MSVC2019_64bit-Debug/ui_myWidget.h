/********************************************************************************
** Form generated from reading UI file 'myWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnListAppend;
    QPushButton *btnListInsert;
    QPushButton *btnListDel;
    QPushButton *btnListClear;
    QListView *listView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *btnTextClear;
    QPushButton *btnTextImport;
    QPlainTextEdit *plainTextEdit;
    QLabel *labInfo;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QString::fromUtf8("myWidget"));
        myWidget->resize(601, 385);
        gridLayout_4 = new QGridLayout(myWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(myWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(106, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        btnListAppend = new QPushButton(groupBox);
        btnListAppend->setObjectName(QString::fromUtf8("btnListAppend"));

        gridLayout->addWidget(btnListAppend, 1, 0, 1, 1);

        btnListInsert = new QPushButton(groupBox);
        btnListInsert->setObjectName(QString::fromUtf8("btnListInsert"));
        btnListInsert->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(btnListInsert, 1, 1, 1, 1);

        btnListDel = new QPushButton(groupBox);
        btnListDel->setObjectName(QString::fromUtf8("btnListDel"));

        gridLayout->addWidget(btnListDel, 2, 0, 1, 1);

        btnListClear = new QPushButton(groupBox);
        btnListClear->setObjectName(QString::fromUtf8("btnListClear"));
        btnListClear->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(btnListClear, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        listView = new QListView(groupBox);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout_2->addWidget(listView, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(myWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btnTextClear = new QPushButton(groupBox_2);
        btnTextClear->setObjectName(QString::fromUtf8("btnTextClear"));

        gridLayout_3->addWidget(btnTextClear, 0, 0, 1, 1);

        btnTextImport = new QPushButton(groupBox_2);
        btnTextImport->setObjectName(QString::fromUtf8("btnTextImport"));

        gridLayout_3->addWidget(btnTextImport, 1, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_3->addWidget(plainTextEdit, 2, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        labInfo = new QLabel(myWidget);
        labInfo->setObjectName(QString::fromUtf8("labInfo"));

        gridLayout_4->addWidget(labInfo, 1, 0, 1, 2);


        retranslateUi(myWidget);

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QCoreApplication::translate("myWidget", "myWidget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("myWidget", "QListView", nullptr));
        pushButton->setText(QCoreApplication::translate("myWidget", "\346\201\242\345\244\215\345\210\227\350\241\250", nullptr));
        btnListAppend->setText(QCoreApplication::translate("myWidget", "\346\267\273\345\212\240\351\241\271", nullptr));
        btnListInsert->setText(QCoreApplication::translate("myWidget", "\346\217\222\345\205\245\351\241\271", nullptr));
        btnListDel->setText(QCoreApplication::translate("myWidget", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
        btnListClear->setText(QCoreApplication::translate("myWidget", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("myWidget", "QPlainTextEdit", nullptr));
        btnTextClear->setText(QCoreApplication::translate("myWidget", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        btnTextImport->setText(QCoreApplication::translate("myWidget", "\346\230\276\347\244\272\346\225\260\346\215\256\346\250\241\345\236\213\347\232\204StringList", nullptr));
        labInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
