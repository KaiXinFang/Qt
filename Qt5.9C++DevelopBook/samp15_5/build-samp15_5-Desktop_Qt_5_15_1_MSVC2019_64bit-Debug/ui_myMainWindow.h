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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QmyVideoWidget.h"

QT_BEGIN_NAMESPACE

class Ui_myMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QmyVideoWidget *videoWidegt;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnStop;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSound;
    QSlider *horizontalSlider;
    QPushButton *btnFullScreen;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labCurMedia;
    QSlider *sliderPosition;
    QLabel *labRatio;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QString::fromUtf8("myMainWindow"));
        myMainWindow->resize(581, 490);
        centralwidget = new QWidget(myMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        videoWidegt = new QmyVideoWidget(centralwidget);
        videoWidegt->setObjectName(QString::fromUtf8("videoWidegt"));
        videoWidegt->setMinimumSize(QSize(563, 385));

        verticalLayout->addWidget(videoWidegt);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/image/open.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon);
        btnAdd->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(btnAdd);

        btnPlay = new QPushButton(centralwidget);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/image/bofang.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlay->setIcon(icon1);
        btnPlay->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(btnPlay);

        btnPause = new QPushButton(centralwidget);
        btnPause->setObjectName(QString::fromUtf8("btnPause"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/image/zanting.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon2);
        btnPause->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(btnPause);

        btnStop = new QPushButton(centralwidget);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/image/tingzhi.jpg!ys"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon3);
        btnStop->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(btnStop);

        horizontalSpacer = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSound = new QPushButton(centralwidget);
        btnSound->setObjectName(QString::fromUtf8("btnSound"));

        horizontalLayout->addWidget(btnSound);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        btnFullScreen = new QPushButton(centralwidget);
        btnFullScreen->setObjectName(QString::fromUtf8("btnFullScreen"));

        horizontalLayout->addWidget(btnFullScreen);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labCurMedia = new QLabel(centralwidget);
        labCurMedia->setObjectName(QString::fromUtf8("labCurMedia"));
        labCurMedia->setMinimumSize(QSize(54, 0));

        horizontalLayout_2->addWidget(labCurMedia);

        sliderPosition = new QSlider(centralwidget);
        sliderPosition->setObjectName(QString::fromUtf8("sliderPosition"));
        sliderPosition->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderPosition);

        labRatio = new QLabel(centralwidget);
        labRatio->setObjectName(QString::fromUtf8("labRatio"));
        labRatio->setMinimumSize(QSize(54, 0));

        horizontalLayout_2->addWidget(labRatio);


        verticalLayout->addLayout(horizontalLayout_2);

        myMainWindow->setCentralWidget(centralwidget);

        retranslateUi(myMainWindow);

        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QCoreApplication::translate("myMainWindow", "myMainWindow", nullptr));
        btnAdd->setText(QString());
        btnPlay->setText(QString());
        btnPause->setText(QString());
        btnStop->setText(QString());
        btnSound->setText(QString());
        btnFullScreen->setText(QCoreApplication::translate("myMainWindow", "\345\205\250\345\261\217", nullptr));
        labCurMedia->setText(QString());
        labRatio->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
