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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnRemove;
    QPushButton *btnClear;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnStop;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSlider *sliderVolumn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labCurMedia;
    QSlider *sliderPosition;
    QLabel *labRatio;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QString::fromUtf8("myMainWindow"));
        myMainWindow->resize(554, 431);
        centralwidget = new QWidget(myMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAdd = new QPushButton(groupBox);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/image/boy.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon);
        btnAdd->setIconSize(QSize(18, 18));
        btnAdd->setAutoDefault(false);

        horizontalLayout->addWidget(btnAdd);

        btnRemove = new QPushButton(groupBox);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/image/girl.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemove->setIcon(icon1);
        btnRemove->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(btnRemove);

        btnClear = new QPushButton(groupBox);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/image/clearXX.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        btnClear->setIcon(icon2);
        btnClear->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(btnClear);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnPlay = new QPushButton(centralwidget);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));
        btnPlay->setMaximumSize(QSize(33, 31));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/image/bofang.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlay->setIcon(icon3);
        btnPlay->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(btnPlay);

        btnPause = new QPushButton(centralwidget);
        btnPause->setObjectName(QString::fromUtf8("btnPause"));
        btnPause->setMaximumSize(QSize(33, 31));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/image/zanting.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon4);
        btnPause->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(btnPause);

        btnStop = new QPushButton(centralwidget);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setMaximumSize(QSize(33, 31));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/image/tingzhi.jpg!ys"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon5);
        btnStop->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(btnStop);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMaximumSize(QSize(33, 31));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/image/last.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon6);
        pushButton_7->setIconSize(QSize(80, 80));

        horizontalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMaximumSize(QSize(33, 31));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/image/next.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon7);
        pushButton_8->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButton_8);

        horizontalSpacer = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(33, 31));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/image/sound.jfif")));
        label->setScaledContents(true);

        horizontalLayout_2->addWidget(label);

        sliderVolumn = new QSlider(centralwidget);
        sliderVolumn->setObjectName(QString::fromUtf8("sliderVolumn"));
        sliderVolumn->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderVolumn);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labCurMedia = new QLabel(centralwidget);
        labCurMedia->setObjectName(QString::fromUtf8("labCurMedia"));
        labCurMedia->setMinimumSize(QSize(273, 25));

        horizontalLayout_3->addWidget(labCurMedia);

        sliderPosition = new QSlider(centralwidget);
        sliderPosition->setObjectName(QString::fromUtf8("sliderPosition"));
        sliderPosition->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(sliderPosition);

        labRatio = new QLabel(centralwidget);
        labRatio->setObjectName(QString::fromUtf8("labRatio"));
        labRatio->setMinimumSize(QSize(75, 25));

        horizontalLayout_3->addWidget(labRatio);


        verticalLayout_2->addLayout(horizontalLayout_3);

        myMainWindow->setCentralWidget(centralwidget);

        retranslateUi(myMainWindow);

        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QCoreApplication::translate("myMainWindow", "myMainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("myMainWindow", "\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
        btnAdd->setText(QCoreApplication::translate("myMainWindow", "\346\267\273\345\212\240", nullptr));
        btnRemove->setText(QCoreApplication::translate("myMainWindow", "\347\247\273\351\231\244", nullptr));
        btnClear->setText(QCoreApplication::translate("myMainWindow", "\346\270\205\347\251\272", nullptr));
        btnPlay->setText(QString());
        btnPause->setText(QString());
        btnStop->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        label->setText(QString());
        labCurMedia->setText(QCoreApplication::translate("myMainWindow", "TextLabel", nullptr));
        labRatio->setText(QCoreApplication::translate("myMainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
