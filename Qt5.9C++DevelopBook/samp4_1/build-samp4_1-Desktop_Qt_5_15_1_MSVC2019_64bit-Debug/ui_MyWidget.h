/********************************************************************************
** Form generated from reading UI file 'MyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editNum;
    QLabel *label_2;
    QLineEdit *editPrice;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QPushButton *btnCal;
    QLineEdit *editTotal;
    QSpacerItem *verticalSpacer;
    QDoubleSpinBox *doubleSpinBox;
    QSpinBox *spinBox;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *editDec;
    QPushButton *btnDec;
    QLabel *label_5;
    QLineEdit *editBin;
    QPushButton *btnBin;
    QLabel *label_6;
    QLineEdit *editHex;
    QPushButton *btnHex;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QString::fromUtf8("MyWidget"));
        MyWidget->resize(339, 259);
        verticalLayout_2 = new QVBoxLayout(MyWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(MyWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editNum = new QLineEdit(MyWidget);
        editNum->setObjectName(QString::fromUtf8("editNum"));

        gridLayout->addWidget(editNum, 0, 1, 1, 1);

        label_2 = new QLabel(MyWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        editPrice = new QLineEdit(MyWidget);
        editPrice->setObjectName(QString::fromUtf8("editPrice"));

        gridLayout->addWidget(editPrice, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(26, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 2, 1);

        label_3 = new QLabel(MyWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 2, 2);

        btnCal = new QPushButton(MyWidget);
        btnCal->setObjectName(QString::fromUtf8("btnCal"));

        gridLayout->addWidget(btnCal, 2, 1, 1, 1);

        editTotal = new QLineEdit(MyWidget);
        editTotal->setObjectName(QString::fromUtf8("editTotal"));

        gridLayout->addWidget(editTotal, 2, 3, 1, 2);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        doubleSpinBox = new QDoubleSpinBox(MyWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);

        verticalLayout->addWidget(doubleSpinBox);

        spinBox = new QSpinBox(MyWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(0);
        spinBox->setValue(0);
        spinBox->setDisplayIntegerBase(10);

        verticalLayout->addWidget(spinBox);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(MyWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(54, 0));
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_4->setWordWrap(false);
        label_4->setMargin(0);
        label_4->setIndent(-1);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        editDec = new QLineEdit(MyWidget);
        editDec->setObjectName(QString::fromUtf8("editDec"));

        gridLayout_2->addWidget(editDec, 0, 1, 1, 1);

        btnDec = new QPushButton(MyWidget);
        btnDec->setObjectName(QString::fromUtf8("btnDec"));

        gridLayout_2->addWidget(btnDec, 0, 2, 1, 1);

        label_5 = new QLabel(MyWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(54, 0));
        label_5->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        editBin = new QLineEdit(MyWidget);
        editBin->setObjectName(QString::fromUtf8("editBin"));

        gridLayout_2->addWidget(editBin, 1, 1, 1, 1);

        btnBin = new QPushButton(MyWidget);
        btnBin->setObjectName(QString::fromUtf8("btnBin"));

        gridLayout_2->addWidget(btnBin, 1, 2, 1, 1);

        label_6 = new QLabel(MyWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(54, 16777215));
        label_6->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        editHex = new QLineEdit(MyWidget);
        editHex->setObjectName(QString::fromUtf8("editHex"));

        gridLayout_2->addWidget(editHex, 2, 1, 1, 1);

        btnHex = new QPushButton(MyWidget);
        btnHex->setObjectName(QString::fromUtf8("btnHex"));

        gridLayout_2->addWidget(btnHex, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        label->setText(QCoreApplication::translate("MyWidget", "\346\225\260\351\207\217", nullptr));
        label_2->setText(QCoreApplication::translate("MyWidget", "\345\215\225\344\273\267", nullptr));
        label_3->setText(QCoreApplication::translate("MyWidget", "\346\200\273\344\273\267", nullptr));
        btnCal->setText(QCoreApplication::translate("MyWidget", "\350\256\241\347\256\227", nullptr));
        label_4->setText(QCoreApplication::translate("MyWidget", "\345\215\201\350\277\233\345\210\266", nullptr));
        btnDec->setText(QCoreApplication::translate("MyWidget", "\350\275\254\346\215\242\344\270\272\345\205\266\345\256\203\350\277\233\345\210\266", nullptr));
        label_5->setText(QCoreApplication::translate("MyWidget", "\344\272\214\350\277\233\345\210\266", nullptr));
        btnBin->setText(QCoreApplication::translate("MyWidget", "\350\275\254\346\215\242\344\270\272\345\205\266\345\256\203\350\277\233\345\210\266", nullptr));
        label_6->setText(QCoreApplication::translate("MyWidget", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        btnHex->setText(QCoreApplication::translate("MyWidget", "\350\275\254\346\215\242\344\270\272\345\205\266\345\256\203\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
