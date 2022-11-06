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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QCheckBox *checkOpen;
    QLabel *label_2;
    QPushButton *btnDownload;
    QPushButton *btnDefaultPath;
    QLineEdit *editPath;
    QProgressBar *progressBar;
    QLineEdit *editURL;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QString::fromUtf8("myMainWindow"));
        myMainWindow->resize(452, 142);
        centralwidget = new QWidget(myMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        checkOpen = new QCheckBox(centralwidget);
        checkOpen->setObjectName(QString::fromUtf8("checkOpen"));

        gridLayout->addWidget(checkOpen, 2, 3, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        btnDownload = new QPushButton(centralwidget);
        btnDownload->setObjectName(QString::fromUtf8("btnDownload"));

        gridLayout->addWidget(btnDownload, 0, 3, 1, 1);

        btnDefaultPath = new QPushButton(centralwidget);
        btnDefaultPath->setObjectName(QString::fromUtf8("btnDefaultPath"));

        gridLayout->addWidget(btnDefaultPath, 1, 3, 1, 1);

        editPath = new QLineEdit(centralwidget);
        editPath->setObjectName(QString::fromUtf8("editPath"));

        gridLayout->addWidget(editPath, 1, 1, 1, 2);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 2, 1, 1, 2);

        editURL = new QLineEdit(centralwidget);
        editURL->setObjectName(QString::fromUtf8("editURL"));

        gridLayout->addWidget(editURL, 0, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        myMainWindow->setCentralWidget(centralwidget);

        retranslateUi(myMainWindow);

        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QCoreApplication::translate("myMainWindow", "myMainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("myMainWindow", "\346\226\207\344\273\266\344\270\213\350\275\275\350\277\233\345\272\246\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("myMainWindow", "URL\357\274\232", nullptr));
        checkOpen->setText(QCoreApplication::translate("myMainWindow", "\345\256\214\346\210\220\345\220\216\346\211\223\345\274\200", nullptr));
        label_2->setText(QCoreApplication::translate("myMainWindow", "\344\270\213\350\275\275\344\277\235\345\255\230\346\226\207\344\273\266\350\267\257\345\276\204\357\274\232", nullptr));
        btnDownload->setText(QCoreApplication::translate("myMainWindow", "\344\270\213\350\275\275", nullptr));
        btnDefaultPath->setText(QCoreApplication::translate("myMainWindow", "\347\274\272\347\234\201\350\267\257\345\276\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
