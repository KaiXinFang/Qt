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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLineEdit *editTime;
    QPushButton *pushButton_2;
    QLineEdit *editDate;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *editTimeDate;
    QPushButton *btnSetDateTime;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labElapsTime;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *spinBox;
    QPushButton *btnSetIntv;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLCDNumber *lcdHour;
    QLCDNumber *lcdMin;
    QLCDNumber *lcdSec;
    QProgressBar *progressBar;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *editClendarWidget;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton_8;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QString::fromUtf8("myWidget"));
        myWidget->resize(775, 428);
        verticalLayout_6 = new QVBoxLayout(myWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox = new QGroupBox(myWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_4);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        editTime = new QLineEdit(groupBox);
        editTime->setObjectName(QString::fromUtf8("editTime"));

        gridLayout->addWidget(editTime, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 4, 1, 1);

        editDate = new QLineEdit(groupBox);
        editDate->setObjectName(QString::fromUtf8("editDate"));

        gridLayout->addWidget(editDate, 1, 3, 1, 1);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 4, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout->addWidget(dateTimeEdit, 2, 2, 1, 1);

        editTimeDate = new QLineEdit(groupBox);
        editTimeDate->setObjectName(QString::fromUtf8("editTimeDate"));

        gridLayout->addWidget(editTimeDate, 2, 3, 1, 1);

        btnSetDateTime = new QPushButton(groupBox);
        btnSetDateTime->setObjectName(QString::fromUtf8("btnSetDateTime"));

        gridLayout->addWidget(btnSetDateTime, 2, 4, 1, 1);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 1, 2, 1, 1);

        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        gridLayout->addWidget(timeEdit, 0, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(myWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnStart = new QPushButton(groupBox_2);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));

        horizontalLayout_3->addWidget(btnStart);

        btnStop = new QPushButton(groupBox_2);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));

        horizontalLayout_3->addWidget(btnStop);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        labElapsTime = new QLabel(groupBox_2);
        labElapsTime->setObjectName(QString::fromUtf8("labElapsTime"));

        horizontalLayout_3->addWidget(labElapsTime);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalSpacer_5 = new QSpacerItem(76, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_4->addWidget(spinBox);

        btnSetIntv = new QPushButton(groupBox_2);
        btnSetIntv->setObjectName(QString::fromUtf8("btnSetIntv"));

        horizontalLayout_4->addWidget(btnSetIntv);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        horizontalSpacer_4 = new QSpacerItem(152, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lcdHour = new QLCDNumber(groupBox_2);
        lcdHour->setObjectName(QString::fromUtf8("lcdHour"));

        horizontalLayout_5->addWidget(lcdHour);

        lcdMin = new QLCDNumber(groupBox_2);
        lcdMin->setObjectName(QString::fromUtf8("lcdMin"));

        horizontalLayout_5->addWidget(lcdMin);

        lcdSec = new QLCDNumber(groupBox_2);
        lcdSec->setObjectName(QString::fromUtf8("lcdSec"));

        horizontalLayout_5->addWidget(lcdSec);


        verticalLayout_2->addLayout(horizontalLayout_5);

        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout_2->addWidget(progressBar);


        verticalLayout_5->addWidget(groupBox_2);


        horizontalLayout_9->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_3 = new QGroupBox(myWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        editClendarWidget = new QLineEdit(groupBox_3);
        editClendarWidget->setObjectName(QString::fromUtf8("editClendarWidget"));

        horizontalLayout_8->addWidget(editClendarWidget);


        verticalLayout_3->addLayout(horizontalLayout_8);

        calendarWidget = new QCalendarWidget(groupBox_3);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        verticalLayout_3->addWidget(calendarWidget);


        verticalLayout_4->addWidget(groupBox_3);

        pushButton_8 = new QPushButton(myWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_4->addWidget(pushButton_8);


        horizontalLayout_9->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_9);


        retranslateUi(myWidget);

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QCoreApplication::translate("myWidget", "myWidget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("myWidget", "\346\227\245\346\234\237\345\222\214\346\227\266\351\227\264", nullptr));
        pushButton->setText(QCoreApplication::translate("myWidget", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\345\222\214\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("myWidget", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("myWidget", "\350\256\276\347\275\256\346\227\266\351\227\264", nullptr));
        pushButton_3->setText(QCoreApplication::translate("myWidget", "\350\256\276\347\275\256\346\227\245\346\234\237", nullptr));
        label_3->setText(QCoreApplication::translate("myWidget", "\346\227\266\346\227\245\346\234\237\351\227\264", nullptr));
        btnSetDateTime->setText(QCoreApplication::translate("myWidget", "\350\256\276\347\275\256\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        label->setText(QCoreApplication::translate("myWidget", "\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("myWidget", "\346\227\245\346\234\237", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("myWidget", "\345\256\232\346\227\266\345\231\250", nullptr));
        btnStart->setText(QCoreApplication::translate("myWidget", "\345\274\200\345\247\213", nullptr));
        btnStop->setText(QCoreApplication::translate("myWidget", "\345\201\234\346\255\242", nullptr));
        labElapsTime->setText(QCoreApplication::translate("myWidget", "\346\227\266\351\227\264\346\265\201\351\200\235", nullptr));
        label_5->setText(QCoreApplication::translate("myWidget", "\345\256\232\346\227\266\345\221\250\346\234\237", nullptr));
        btnSetIntv->setText(QCoreApplication::translate("myWidget", "\350\256\276\347\275\256\345\221\250\346\234\237", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("myWidget", "\346\227\245\345\216\206\351\200\211\346\213\251", nullptr));
        label_7->setText(QCoreApplication::translate("myWidget", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237\357\274\232", nullptr));
        pushButton_8->setText(QCoreApplication::translate("myWidget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
