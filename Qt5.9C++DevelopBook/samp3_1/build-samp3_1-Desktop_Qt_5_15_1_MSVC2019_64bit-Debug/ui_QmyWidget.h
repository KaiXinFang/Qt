/********************************************************************************
** Form generated from reading UI file 'QmyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYWIDGET_H
#define UI_QMYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmyWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QSpinBox *spinBoy;
    QLabel *label_2;
    QSpinBox *spinGirl;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QPushButton *btnClassInfo;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPlainTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *QmyWidget)
    {
        if (QmyWidget->objectName().isEmpty())
            QmyWidget->setObjectName(QString::fromUtf8("QmyWidget"));
        QmyWidget->resize(567, 468);
        gridLayout = new QGridLayout(QmyWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(79, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(QmyWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        spinBoy = new QSpinBox(QmyWidget);
        spinBoy->setObjectName(QString::fromUtf8("spinBoy"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinBoy);

        label_2 = new QLabel(QmyWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        spinGirl = new QSpinBox(QmyWidget);
        spinGirl->setObjectName(QString::fromUtf8("spinGirl"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinGirl);


        horizontalLayout->addLayout(formLayout_2);

        horizontalSpacer = new QSpacerItem(56, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton = new QPushButton(QmyWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton);

        btnClassInfo = new QPushButton(QmyWidget);
        btnClassInfo->setObjectName(QString::fromUtf8("btnClassInfo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, btnClassInfo);

        pushButton_2 = new QPushButton(QmyWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_2);

        pushButton_4 = new QPushButton(QmyWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_4);


        horizontalLayout->addLayout(formLayout);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QPlainTextEdit(QmyWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        gridLayout->addLayout(verticalLayout, 1, 1, 2, 1);

        horizontalSpacer_3 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);


        retranslateUi(QmyWidget);

        QMetaObject::connectSlotsByName(QmyWidget);
    } // setupUi

    void retranslateUi(QWidget *QmyWidget)
    {
        QmyWidget->setWindowTitle(QCoreApplication::translate("QmyWidget", "QmyWidget", nullptr));
        label->setText(QCoreApplication::translate("QmyWidget", "\350\256\276\347\275\256\347\224\267\347\224\237\345\271\264\351\276\204", nullptr));
        label_2->setText(QCoreApplication::translate("QmyWidget", "\350\256\276\347\275\256\345\245\263\347\224\237\345\271\264\351\276\204", nullptr));
        pushButton->setText(QCoreApplication::translate("QmyWidget", "boy\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        btnClassInfo->setText(QCoreApplication::translate("QmyWidget", "\347\261\273\347\232\204\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QmyWidget", "girl\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        pushButton_4->setText(QCoreApplication::translate("QmyWidget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QmyWidget: public Ui_QmyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYWIDGET_H
