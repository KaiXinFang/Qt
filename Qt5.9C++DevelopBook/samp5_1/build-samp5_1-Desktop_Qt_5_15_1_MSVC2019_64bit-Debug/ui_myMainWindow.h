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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QSplitter *splitter_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QTreeView *treeView;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QListView *listView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *labFileName;
    QSpacerItem *horizontalSpacer;
    QLabel *labSize;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labType;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *chkisDir;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labPath;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QString::fromUtf8("myMainWindow"));
        myMainWindow->resize(678, 470);
        centralwidget = new QWidget(myMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        groupBox_3 = new QGroupBox(splitter_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        treeView = new QTreeView(groupBox_3);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout_3->addWidget(treeView, 0, 0, 1, 1);

        splitter_2->addWidget(groupBox_3);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listView = new QListView(groupBox);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 0, 0, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);
        splitter_2->addWidget(splitter);

        gridLayout_5->addWidget(splitter_2, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labFileName = new QLabel(groupBox_4);
        labFileName->setObjectName(QString::fromUtf8("labFileName"));

        horizontalLayout->addWidget(labFileName);

        horizontalSpacer = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labSize = new QLabel(groupBox_4);
        labSize->setObjectName(QString::fromUtf8("labSize"));

        horizontalLayout->addWidget(labSize);

        horizontalSpacer_2 = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        labType = new QLabel(groupBox_4);
        labType->setObjectName(QString::fromUtf8("labType"));

        horizontalLayout->addWidget(labType);

        horizontalSpacer_3 = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        chkisDir = new QCheckBox(groupBox_4);
        chkisDir->setObjectName(QString::fromUtf8("chkisDir"));

        horizontalLayout->addWidget(chkisDir);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labPath = new QLabel(groupBox_4);
        labPath->setObjectName(QString::fromUtf8("labPath"));

        horizontalLayout_2->addWidget(labPath);

        horizontalSpacer_4 = new QSpacerItem(498, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 1, 0, 1, 1);

        myMainWindow->setCentralWidget(centralwidget);

        retranslateUi(myMainWindow);

        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QCoreApplication::translate("myMainWindow", "myMainWindow", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("myMainWindow", "TreeView", nullptr));
        groupBox->setTitle(QCoreApplication::translate("myMainWindow", "ListView", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("myMainWindow", "TableView", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("myMainWindow", "GroupBox", nullptr));
        labFileName->setText(QString());
        labSize->setText(QString());
        labType->setText(QString());
        chkisDir->setText(QCoreApplication::translate("myMainWindow", "\346\230\257\345\220\246\346\230\257\347\233\256\345\275\225", nullptr));
        labPath->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
