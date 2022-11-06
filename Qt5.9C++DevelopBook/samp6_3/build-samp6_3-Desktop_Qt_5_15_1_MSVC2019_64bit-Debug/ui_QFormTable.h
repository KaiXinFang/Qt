/********************************************************************************
** Form generated from reading UI file 'QFormTable.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFORMTABLE_H
#define UI_QFORMTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFormTable
{
public:
    QAction *actSetSizeForTable;
    QAction *actSetHeader;
    QAction *actClose;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QFormTable)
    {
        if (QFormTable->objectName().isEmpty())
            QFormTable->setObjectName(QString::fromUtf8("QFormTable"));
        QFormTable->resize(740, 493);
        actSetSizeForTable = new QAction(QFormTable);
        actSetSizeForTable->setObjectName(QString::fromUtf8("actSetSizeForTable"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/image/toolbarlab.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actSetSizeForTable->setIcon(icon);
        actSetHeader = new QAction(QFormTable);
        actSetHeader->setObjectName(QString::fromUtf8("actSetHeader"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/image/paste.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actSetHeader->setIcon(icon1);
        actClose = new QAction(QFormTable);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/image/redX.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon2);
        centralwidget = new QWidget(QFormTable);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        QFormTable->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(QFormTable);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QFormTable->setStatusBar(statusbar);
        toolBar = new QToolBar(QFormTable);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        QFormTable->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actSetSizeForTable);
        toolBar->addAction(actSetHeader);
        toolBar->addSeparator();
        toolBar->addAction(actClose);

        retranslateUi(QFormTable);

        QMetaObject::connectSlotsByName(QFormTable);
    } // setupUi

    void retranslateUi(QMainWindow *QFormTable)
    {
        QFormTable->setWindowTitle(QCoreApplication::translate("QFormTable", "\345\237\272\344\272\216QMainWindow\347\232\204\347\252\227\345\217\243", nullptr));
        actSetSizeForTable->setText(QCoreApplication::translate("QFormTable", "\345\256\232\344\271\211\350\241\250\346\240\274\345\244\247\345\260\217", nullptr));
        actSetHeader->setText(QCoreApplication::translate("QFormTable", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
        actClose->setText(QCoreApplication::translate("QFormTable", "\345\205\263\351\227\255", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("QFormTable", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QFormTable: public Ui_QFormTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFORMTABLE_H
