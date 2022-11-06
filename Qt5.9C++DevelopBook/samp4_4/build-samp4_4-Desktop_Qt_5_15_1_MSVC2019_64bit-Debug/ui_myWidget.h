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
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *SliderRed;
    QLabel *label_2;
    QSlider *SLiderGreen;
    QLabel *label_3;
    QSlider *SliderBlue;
    QLabel *label_4;
    QSlider *SliderAlpha;
    QTextEdit *textEdit;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QDial *dial;
    QLCDNumber *LCDDispaly;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rbtDec;
    QRadioButton *rbtBin;
    QRadioButton *rbtOct;
    QRadioButton *rbtHex;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QString::fromUtf8("myWidget"));
        myWidget->resize(427, 442);
        verticalLayout_3 = new QVBoxLayout(myWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(myWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        SliderRed = new QSlider(groupBox);
        SliderRed->setObjectName(QString::fromUtf8("SliderRed"));
        SliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderRed, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        SLiderGreen = new QSlider(groupBox);
        SLiderGreen->setObjectName(QString::fromUtf8("SLiderGreen"));
        SLiderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SLiderGreen, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        SliderBlue = new QSlider(groupBox);
        SliderBlue->setObjectName(QString::fromUtf8("SliderBlue"));
        SliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderBlue, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        SliderAlpha = new QSlider(groupBox);
        SliderAlpha->setObjectName(QString::fromUtf8("SliderAlpha"));
        SliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderAlpha, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMaximumSize(QSize(180, 16777215));

        horizontalLayout->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(myWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dial = new QDial(groupBox_2);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setWrapping(false);
        dial->setNotchesVisible(true);

        horizontalLayout_2->addWidget(dial);

        LCDDispaly = new QLCDNumber(groupBox_2);
        LCDDispaly->setObjectName(QString::fromUtf8("LCDDispaly"));

        horizontalLayout_2->addWidget(LCDDispaly);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, -1, -1, -1);
        rbtDec = new QRadioButton(groupBox_3);
        rbtDec->setObjectName(QString::fromUtf8("rbtDec"));

        verticalLayout_2->addWidget(rbtDec);

        rbtBin = new QRadioButton(groupBox_3);
        rbtBin->setObjectName(QString::fromUtf8("rbtBin"));

        verticalLayout_2->addWidget(rbtBin);

        rbtOct = new QRadioButton(groupBox_3);
        rbtOct->setObjectName(QString::fromUtf8("rbtOct"));

        verticalLayout_2->addWidget(rbtOct);

        rbtHex = new QRadioButton(groupBox_3);
        rbtHex->setObjectName(QString::fromUtf8("rbtHex"));

        verticalLayout_2->addWidget(rbtHex);


        horizontalLayout_2->addWidget(groupBox_3);


        verticalLayout_3->addWidget(groupBox_2);


        retranslateUi(myWidget);

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QCoreApplication::translate("myWidget", "myWidget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("myWidget", "Slider\345\222\214QColor", nullptr));
        label->setText(QCoreApplication::translate("myWidget", "Red", nullptr));
        label_2->setText(QCoreApplication::translate("myWidget", "Green", nullptr));
        label_3->setText(QCoreApplication::translate("myWidget", "Blue", nullptr));
        label_4->setText(QCoreApplication::translate("myWidget", "Alpha", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("myWidget", "Dial\345\222\214LCDNUmber", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("myWidget", "LCD\346\230\276\347\244\272\350\277\233\345\210\266", nullptr));
        rbtDec->setText(QCoreApplication::translate("myWidget", "\345\215\201\350\277\233\345\210\266", nullptr));
        rbtBin->setText(QCoreApplication::translate("myWidget", "\344\272\214\350\277\233\345\210\266", nullptr));
        rbtOct->setText(QCoreApplication::translate("myWidget", "\345\205\253\350\277\233\345\210\266", nullptr));
        rbtHex->setText(QCoreApplication::translate("myWidget", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
