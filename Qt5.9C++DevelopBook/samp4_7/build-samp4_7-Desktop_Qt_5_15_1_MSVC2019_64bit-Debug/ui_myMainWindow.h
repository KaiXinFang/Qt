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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myMainWindow
{
public:
    QAction *actListIni;
    QAction *actListClear;
    QAction *actListInsert;
    QAction *actListDelete;
    QAction *actSelALL;
    QAction *actSellNone;
    QAction *actSelInvs;
    QAction *actSelPopMenu;
    QAction *actQuit;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter;
    QToolBox *QTreeWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QWidget *page_2;
    QWidget *page_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *editCutItemText;
    QCheckBox *chkBoxListEditable;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *tBtnSelectItem;
    QPushButton *tBtnSelALL;
    QPushButton *tBtnSelNone;
    QPushButton *tBtnSelInvs;
    QListWidget *listWidget;
    QWidget *tab_2;
    QWidget *tab_3;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QString::fromUtf8("myMainWindow"));
        myMainWindow->resize(684, 463);
        actListIni = new QAction(myMainWindow);
        actListIni->setObjectName(QString::fromUtf8("actListIni"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/image/toolbarlab.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actListIni->setIcon(icon);
        actListClear = new QAction(myMainWindow);
        actListClear->setObjectName(QString::fromUtf8("actListClear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/image/cut.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actListClear->setIcon(icon1);
        actListInsert = new QAction(myMainWindow);
        actListInsert->setObjectName(QString::fromUtf8("actListInsert"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/image/new.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actListInsert->setIcon(icon2);
        actListDelete = new QAction(myMainWindow);
        actListDelete->setObjectName(QString::fromUtf8("actListDelete"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/image/redX.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actListDelete->setIcon(icon3);
        actSelALL = new QAction(myMainWindow);
        actSelALL->setObjectName(QString::fromUtf8("actSelALL"));
        actSellNone = new QAction(myMainWindow);
        actSellNone->setObjectName(QString::fromUtf8("actSellNone"));
        actSelInvs = new QAction(myMainWindow);
        actSelInvs->setObjectName(QString::fromUtf8("actSelInvs"));
        actSelPopMenu = new QAction(myMainWindow);
        actSelPopMenu->setObjectName(QString::fromUtf8("actSelPopMenu"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/image/open.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actSelPopMenu->setIcon(icon4);
        actQuit = new QAction(myMainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        centralwidget = new QWidget(myMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        QTreeWidget = new QToolBox(splitter);
        QTreeWidget->setObjectName(QString::fromUtf8("QTreeWidget"));
        QTreeWidget->setMinimumSize(QSize(163, 357));
        QTreeWidget->setMaximumSize(QSize(160, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(13);
        QTreeWidget->setFont(font);
        QTreeWidget->setFrameShape(QFrame::NoFrame);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 163, 269));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toolButton = new QToolButton(page);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMinimumSize(QSize(123, 0));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextOnly);

        gridLayout->addWidget(toolButton, 0, 0, 1, 1);

        toolButton_2 = new QToolButton(page);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(123, 0));
        toolButton_2->setToolButtonStyle(Qt::ToolButtonTextOnly);

        gridLayout->addWidget(toolButton_2, 1, 0, 1, 1);

        toolButton_3 = new QToolButton(page);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(123, 0));
        toolButton_3->setToolButtonStyle(Qt::ToolButtonTextOnly);

        gridLayout->addWidget(toolButton_3, 2, 0, 1, 1);

        toolButton_4 = new QToolButton(page);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setToolButtonStyle(Qt::ToolButtonTextOnly);

        gridLayout->addWidget(toolButton_4, 3, 0, 1, 1);

        toolButton_5 = new QToolButton(page);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        toolButton_5->setMinimumSize(QSize(123, 0));
        toolButton_5->setToolButtonStyle(Qt::ToolButtonTextOnly);

        gridLayout->addWidget(toolButton_5, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        QTreeWidget->addItem(page, QString::fromUtf8("QListWidget\346\223\215\344\275\234"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 163, 269));
        QTreeWidget->addItem(page_2, QString::fromUtf8("QTreeWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 163, 269));
        QTreeWidget->addItem(page_3, QString::fromUtf8("QTableWidget"));
        splitter->addWidget(QTreeWidget);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(351, 0));
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(12, 16, 473, 309));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        editCutItemText = new QLineEdit(widget);
        editCutItemText->setObjectName(QString::fromUtf8("editCutItemText"));

        horizontalLayout->addWidget(editCutItemText);

        chkBoxListEditable = new QCheckBox(widget);
        chkBoxListEditable->setObjectName(QString::fromUtf8("chkBoxListEditable"));
        chkBoxListEditable->setFont(font1);

        horizontalLayout->addWidget(chkBoxListEditable);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tBtnSelectItem = new QToolButton(widget);
        tBtnSelectItem->setObjectName(QString::fromUtf8("tBtnSelectItem"));

        horizontalLayout_2->addWidget(tBtnSelectItem);

        tBtnSelALL = new QPushButton(widget);
        tBtnSelALL->setObjectName(QString::fromUtf8("tBtnSelALL"));

        horizontalLayout_2->addWidget(tBtnSelALL);

        tBtnSelNone = new QPushButton(widget);
        tBtnSelNone->setObjectName(QString::fromUtf8("tBtnSelNone"));

        horizontalLayout_2->addWidget(tBtnSelNone);

        tBtnSelInvs = new QPushButton(widget);
        tBtnSelInvs->setObjectName(QString::fromUtf8("tBtnSelInvs"));

        horizontalLayout_2->addWidget(tBtnSelInvs);


        verticalLayout_2->addLayout(horizontalLayout_2);

        listWidget = new QListWidget(widget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        splitter->addWidget(tabWidget);

        horizontalLayout_3->addWidget(splitter);

        myMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(myMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        myMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(myMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        myMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actListIni);
        toolBar->addAction(actListClear);
        toolBar->addAction(actListInsert);
        toolBar->addAction(actListDelete);

        retranslateUi(myMainWindow);
        QObject::connect(toolButton_2, SIGNAL(clicked()), actListClear, SLOT(trigger()));
        QObject::connect(toolButton_3, SIGNAL(clicked()), actListInsert, SLOT(trigger()));
        QObject::connect(toolButton_5, SIGNAL(clicked()), actListDelete, SLOT(trigger()));

        QTreeWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QCoreApplication::translate("myMainWindow", "myMainWindow", nullptr));
        actListIni->setText(QCoreApplication::translate("myMainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        actListClear->setText(QCoreApplication::translate("myMainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        actListInsert->setText(QCoreApplication::translate("myMainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
        actListDelete->setText(QCoreApplication::translate("myMainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
        actSelALL->setText(QCoreApplication::translate("myMainWindow", "\345\205\250\351\200\211", nullptr));
        actSellNone->setText(QCoreApplication::translate("myMainWindow", "\345\205\250\344\270\215\351\200\211", nullptr));
        actSelInvs->setText(QCoreApplication::translate("myMainWindow", "\345\217\215\351\200\211", nullptr));
        actSelPopMenu->setText(QCoreApplication::translate("myMainWindow", "\351\241\271\351\200\211\346\213\251", nullptr));
        actQuit->setText(QCoreApplication::translate("myMainWindow", "\351\200\200\345\207\272", nullptr));
        toolButton->setText(QCoreApplication::translate("myMainWindow", "tBtnListIni", nullptr));
        toolButton_2->setText(QCoreApplication::translate("myMainWindow", "tBtnListClear", nullptr));
        toolButton_3->setText(QCoreApplication::translate("myMainWindow", "tBtnListInsert", nullptr));
        toolButton_4->setText(QCoreApplication::translate("myMainWindow", "tBtnListAppend", nullptr));
        toolButton_5->setText(QCoreApplication::translate("myMainWindow", "tBtnListDelete", nullptr));
        QTreeWidget->setItemText(QTreeWidget->indexOf(page), QCoreApplication::translate("myMainWindow", "QListWidget\346\223\215\344\275\234", nullptr));
        QTreeWidget->setItemText(QTreeWidget->indexOf(page_2), QCoreApplication::translate("myMainWindow", "QTreeWidget", nullptr));
        QTreeWidget->setItemText(QTreeWidget->indexOf(page_3), QCoreApplication::translate("myMainWindow", "QTableWidget", nullptr));
        label->setText(QCoreApplication::translate("myMainWindow", " \345\275\223\345\211\215\345\217\230\345\214\226\351\241\271", nullptr));
        chkBoxListEditable->setText(QCoreApplication::translate("myMainWindow", " \345\217\257\347\274\226\350\276\221", nullptr));
        tBtnSelectItem->setText(QCoreApplication::translate("myMainWindow", "tBtnSelectItem", nullptr));
        tBtnSelALL->setText(QCoreApplication::translate("myMainWindow", "tBtnSelALL", nullptr));
        tBtnSelNone->setText(QCoreApplication::translate("myMainWindow", "tBtnSelNone", nullptr));
        tBtnSelInvs->setText(QCoreApplication::translate("myMainWindow", "tBtnSelInvs", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("myMainWindow", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("myMainWindow", "New Item", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("myMainWindow", "QListWidget", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("myMainWindow", "QTreeWidget", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("myMainWindow", "QTableWidget", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("myMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
