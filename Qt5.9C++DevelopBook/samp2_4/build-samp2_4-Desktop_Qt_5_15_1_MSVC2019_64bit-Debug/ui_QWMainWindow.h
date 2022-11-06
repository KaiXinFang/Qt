/********************************************************************************
** Form generated from reading UI file 'QWMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWINDOW_H
#define UI_QWMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWindow
{
public:
    QAction *actCut;
    QAction *actPaste;
    QAction *actCopy;
    QAction *actFontBold;
    QAction *actFontItalic;
    QAction *actFontUnder;
    QAction *actClose;
    QAction *actOpen;
    QAction *actClear;
    QAction *actFont;
    QAction *actNew;
    QAction *actToolbarLab;
    QWidget *centralwidget;
    QTextEdit *txtEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QWMainWindow)
    {
        if (QWMainWindow->objectName().isEmpty())
            QWMainWindow->setObjectName(QString::fromUtf8("QWMainWindow"));
        QWMainWindow->resize(778, 495);
        actCut = new QAction(QWMainWindow);
        actCut->setObjectName(QString::fromUtf8("actCut"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/img/cut.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon);
        actPaste = new QAction(QWMainWindow);
        actPaste->setObjectName(QString::fromUtf8("actPaste"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/img/paste.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon1);
        actCopy = new QAction(QWMainWindow);
        actCopy->setObjectName(QString::fromUtf8("actCopy"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/img/copy.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon2);
        actFontBold = new QAction(QWMainWindow);
        actFontBold->setObjectName(QString::fromUtf8("actFontBold"));
        actFontBold->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/img/fontbold.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actFontBold->setIcon(icon3);
        actFontItalic = new QAction(QWMainWindow);
        actFontItalic->setObjectName(QString::fromUtf8("actFontItalic"));
        actFontItalic->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/img/fontItalic.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actFontItalic->setIcon(icon4);
        actFontUnder = new QAction(QWMainWindow);
        actFontUnder->setObjectName(QString::fromUtf8("actFontUnder"));
        actFontUnder->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/img/fontunder.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actFontUnder->setIcon(icon5);
        actClose = new QAction(QWMainWindow);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/img/close.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon6);
        actOpen = new QAction(QWMainWindow);
        actOpen->setObjectName(QString::fromUtf8("actOpen"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/img/open.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon7);
        actClear = new QAction(QWMainWindow);
        actClear->setObjectName(QString::fromUtf8("actClear"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/img/clear.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actClear->setIcon(icon8);
        actFont = new QAction(QWMainWindow);
        actFont->setObjectName(QString::fromUtf8("actFont"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/img/font.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actFont->setIcon(icon9);
        actNew = new QAction(QWMainWindow);
        actNew->setObjectName(QString::fromUtf8("actNew"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/image/img/new.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actNew->setIcon(icon10);
        actToolbarLab = new QAction(QWMainWindow);
        actToolbarLab->setObjectName(QString::fromUtf8("actToolbarLab"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/image/img/toolbarlab.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actToolbarLab->setIcon(icon11);
        centralwidget = new QWidget(QWMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        txtEdit = new QTextEdit(centralwidget);
        txtEdit->setObjectName(QString::fromUtf8("txtEdit"));
        txtEdit->setGeometry(QRect(11, 7, 755, 385));
        QWMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QWMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 778, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        QWMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(QWMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QWMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(QWMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        QWMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actNew);
        menu->addAction(actOpen);
        menu->addSeparator();
        menu->addAction(actClose);
        menu_2->addAction(actCut);
        menu_2->addAction(actCopy);
        menu_2->addAction(actPaste);
        menu_2->addSeparator();
        menu_2->addAction(actClear);
        menu_3->addAction(actFontBold);
        menu_3->addAction(actFontItalic);
        menu_3->addAction(actFontUnder);
        menu_3->addSeparator();
        menu_3->addAction(actToolbarLab);
        toolBar->addAction(actNew);
        toolBar->addAction(actOpen);
        toolBar->addAction(actClear);
        toolBar->addSeparator();
        toolBar->addAction(actCut);
        toolBar->addAction(actCopy);
        toolBar->addAction(actPaste);
        toolBar->addSeparator();
        toolBar->addAction(actFontItalic);
        toolBar->addAction(actFontBold);
        toolBar->addAction(actFontUnder);
        toolBar->addSeparator();

        retranslateUi(QWMainWindow);
        QObject::connect(actPaste, SIGNAL(triggered()), txtEdit, SLOT(paste()));
        QObject::connect(actCut, SIGNAL(triggered()), txtEdit, SLOT(cut()));
        QObject::connect(actCopy, SIGNAL(triggered()), txtEdit, SLOT(copy()));
        QObject::connect(actClear, SIGNAL(triggered()), txtEdit, SLOT(clear()));
        QObject::connect(actClose, SIGNAL(triggered()), QWMainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(QWMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWindow)
    {
        QWMainWindow->setWindowTitle(QCoreApplication::translate("QWMainWindow", "QWMainWindow", nullptr));
        actCut->setText(QCoreApplication::translate("QWMainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        actCut->setToolTip(QCoreApplication::translate("QWMainWindow", "\345\211\252\345\210\207\346\226\207\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
        actPaste->setText(QCoreApplication::translate("QWMainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        actPaste->setToolTip(QCoreApplication::translate("QWMainWindow", "\347\262\230\350\264\264\346\226\207\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
        actCopy->setText(QCoreApplication::translate("QWMainWindow", "\345\244\215\345\210\266", nullptr));
        actFontBold->setText(QCoreApplication::translate("QWMainWindow", "\347\262\227\344\275\223", nullptr));
        actFontItalic->setText(QCoreApplication::translate("QWMainWindow", "\346\226\234\344\275\223", nullptr));
        actFontUnder->setText(QCoreApplication::translate("QWMainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
        actClose->setText(QCoreApplication::translate("QWMainWindow", "\351\200\200\345\207\272", nullptr));
        actOpen->setText(QCoreApplication::translate("QWMainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actOpen->setToolTip(QCoreApplication::translate("QWMainWindow", "\346\211\223\345\274\200...", nullptr));
#endif // QT_CONFIG(tooltip)
        actClear->setText(QCoreApplication::translate("QWMainWindow", "\346\270\205\347\251\272", nullptr));
        actFont->setText(QCoreApplication::translate("QWMainWindow", "\345\255\227\344\275\223", nullptr));
        actNew->setText(QCoreApplication::translate("QWMainWindow", "\346\226\260\345\273\272", nullptr));
        actToolbarLab->setText(QCoreApplication::translate("QWMainWindow", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", nullptr));
        menu->setTitle(QCoreApplication::translate("QWMainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("QWMainWindow", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("QWMainWindow", "\346\240\274\345\274\217", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("QWMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWMainWindow: public Ui_QWMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWINDOW_H
