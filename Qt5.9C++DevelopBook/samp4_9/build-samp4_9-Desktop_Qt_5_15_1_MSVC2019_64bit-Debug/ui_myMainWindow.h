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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QSplitter *splitterMain;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnSetHeader;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QPushButton *btnIniData;
    QPushButton *btnInsertRow;
    QPushButton *btnAppendRow;
    QPushButton *btnDelCurRow;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *btnReadToEdit;
    QCheckBox *chkBoxTabEditable;
    QCheckBox *chkBoxRowColor;
    QCheckBox *chkBoxHeaderH;
    QCheckBox *chkBoxHeaderV;
    QRadioButton *rBtnSelectRow;
    QRadioButton *rBtnSelectItem;
    QSplitter *splitter;
    QTableWidget *tableInfo;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QString::fromUtf8("myMainWindow"));
        myMainWindow->resize(743, 489);
        centralwidget = new QWidget(myMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitterMain = new QSplitter(centralwidget);
        splitterMain->setObjectName(QString::fromUtf8("splitterMain"));
        splitterMain->setMinimumSize(QSize(725, 0));
        splitterMain->setMaximumSize(QSize(16777215, 16777215));
        splitterMain->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitterMain);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnSetHeader = new QPushButton(groupBox);
        btnSetHeader->setObjectName(QString::fromUtf8("btnSetHeader"));

        gridLayout->addWidget(btnSetHeader, 0, 0, 1, 2);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        btnIniData = new QPushButton(groupBox);
        btnIniData->setObjectName(QString::fromUtf8("btnIniData"));

        gridLayout->addWidget(btnIniData, 2, 0, 1, 2);

        btnInsertRow = new QPushButton(groupBox);
        btnInsertRow->setObjectName(QString::fromUtf8("btnInsertRow"));

        gridLayout->addWidget(btnInsertRow, 3, 0, 1, 1);

        btnAppendRow = new QPushButton(groupBox);
        btnAppendRow->setObjectName(QString::fromUtf8("btnAppendRow"));

        gridLayout->addWidget(btnAppendRow, 3, 1, 1, 1);

        btnDelCurRow = new QPushButton(groupBox);
        btnDelCurRow->setObjectName(QString::fromUtf8("btnDelCurRow"));

        gridLayout->addWidget(btnDelCurRow, 4, 0, 1, 2);

        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 5, 0, 1, 1);

        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 5, 1, 1, 1);

        btnReadToEdit = new QPushButton(groupBox);
        btnReadToEdit->setObjectName(QString::fromUtf8("btnReadToEdit"));

        gridLayout->addWidget(btnReadToEdit, 6, 0, 1, 2);

        chkBoxTabEditable = new QCheckBox(groupBox);
        chkBoxTabEditable->setObjectName(QString::fromUtf8("chkBoxTabEditable"));

        gridLayout->addWidget(chkBoxTabEditable, 7, 0, 1, 1);

        chkBoxRowColor = new QCheckBox(groupBox);
        chkBoxRowColor->setObjectName(QString::fromUtf8("chkBoxRowColor"));

        gridLayout->addWidget(chkBoxRowColor, 7, 1, 1, 1);

        chkBoxHeaderH = new QCheckBox(groupBox);
        chkBoxHeaderH->setObjectName(QString::fromUtf8("chkBoxHeaderH"));

        gridLayout->addWidget(chkBoxHeaderH, 8, 0, 1, 1);

        chkBoxHeaderV = new QCheckBox(groupBox);
        chkBoxHeaderV->setObjectName(QString::fromUtf8("chkBoxHeaderV"));

        gridLayout->addWidget(chkBoxHeaderV, 8, 1, 1, 1);

        rBtnSelectRow = new QRadioButton(groupBox);
        rBtnSelectRow->setObjectName(QString::fromUtf8("rBtnSelectRow"));

        gridLayout->addWidget(rBtnSelectRow, 9, 0, 1, 1);

        rBtnSelectItem = new QRadioButton(groupBox);
        rBtnSelectItem->setObjectName(QString::fromUtf8("rBtnSelectItem"));

        gridLayout->addWidget(rBtnSelectItem, 9, 1, 1, 1);

        splitterMain->addWidget(groupBox);
        splitter = new QSplitter(splitterMain);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tableInfo = new QTableWidget(splitter);
        tableInfo->setObjectName(QString::fromUtf8("tableInfo"));
        tableInfo->setMinimumSize(QSize(479, 249));
        splitter->addWidget(tableInfo);
        plainTextEdit = new QPlainTextEdit(splitter);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(479, 151));
        splitter->addWidget(plainTextEdit);
        splitterMain->addWidget(splitter);

        gridLayout_2->addWidget(splitterMain, 0, 0, 1, 1);

        myMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(myMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 743, 22));
        myMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(myMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        myMainWindow->setStatusBar(statusbar);

        retranslateUi(myMainWindow);

        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QCoreApplication::translate("myMainWindow", "myMainWindow", nullptr));
        groupBox->setTitle(QString());
        btnSetHeader->setText(QCoreApplication::translate("myMainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("myMainWindow", "\350\256\276\347\275\256\350\241\214\346\225\260", nullptr));
        btnIniData->setText(QCoreApplication::translate("myMainWindow", "\345\210\235\345\247\213\345\214\226\346\225\260\346\215\256\350\241\250\346\240\274", nullptr));
        btnInsertRow->setText(QCoreApplication::translate("myMainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
        btnAppendRow->setText(QCoreApplication::translate("myMainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
        btnDelCurRow->setText(QCoreApplication::translate("myMainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", nullptr));
        pushButton_8->setText(QCoreApplication::translate("myMainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\350\241\214\351\253\230", nullptr));
        pushButton_7->setText(QCoreApplication::translate("myMainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\345\210\227\345\256\275", nullptr));
        btnReadToEdit->setText(QCoreApplication::translate("myMainWindow", "\350\257\273\345\217\226\350\241\250\346\240\274\345\206\205\345\256\271\345\210\260\346\226\207\346\234\254", nullptr));
        chkBoxTabEditable->setText(QCoreApplication::translate("myMainWindow", "\350\241\250\346\240\274\345\217\257\347\274\226\350\276\221", nullptr));
        chkBoxRowColor->setText(QCoreApplication::translate("myMainWindow", "\351\227\264\351\232\224\350\241\214\345\272\225\350\211\262", nullptr));
        chkBoxHeaderH->setText(QCoreApplication::translate("myMainWindow", "\346\230\276\347\244\272\350\241\214\350\241\250\345\244\264", nullptr));
        chkBoxHeaderV->setText(QCoreApplication::translate("myMainWindow", "\346\230\276\347\244\272\345\210\227\350\241\250\345\244\264", nullptr));
        rBtnSelectRow->setText(QCoreApplication::translate("myMainWindow", "\350\241\214\351\200\211\346\213\251", nullptr));
        rBtnSelectItem->setText(QCoreApplication::translate("myMainWindow", "\345\215\225\345\205\203\346\240\274\351\200\211\346\213\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
