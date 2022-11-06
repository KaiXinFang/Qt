/********************************************************************************
** Form generated from reading UI file 'QFormDoc.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFORMDOC_H
#define UI_QFORMDOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFormDoc
{
public:
    QAction *actOpen;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFont;
    QAction *actClose;
    QAction *actUndo;
    QAction *actRedo;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *QFormDoc)
    {
        if (QFormDoc->objectName().isEmpty())
            QFormDoc->setObjectName(QString::fromUtf8("QFormDoc"));
        QFormDoc->resize(705, 489);
        actOpen = new QAction(QFormDoc);
        actOpen->setObjectName(QString::fromUtf8("actOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/image/open.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon);
        actCut = new QAction(QFormDoc);
        actCut->setObjectName(QString::fromUtf8("actCut"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/image/cut.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon1);
        actCopy = new QAction(QFormDoc);
        actCopy->setObjectName(QString::fromUtf8("actCopy"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/image/copy.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon2);
        actPaste = new QAction(QFormDoc);
        actPaste->setObjectName(QString::fromUtf8("actPaste"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/image/paste.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon3);
        actFont = new QAction(QFormDoc);
        actFont->setObjectName(QString::fromUtf8("actFont"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/image/font.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actFont->setIcon(icon4);
        actClose = new QAction(QFormDoc);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/image/close.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon5);
        actUndo = new QAction(QFormDoc);
        actUndo->setObjectName(QString::fromUtf8("actUndo"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/image/Undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actUndo->setIcon(icon6);
        actRedo = new QAction(QFormDoc);
        actRedo->setObjectName(QString::fromUtf8("actRedo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/image/Redo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actRedo->setIcon(icon7);
        plainTextEdit = new QPlainTextEdit(QFormDoc);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(156, 112, 256, 192));

        retranslateUi(QFormDoc);

        QMetaObject::connectSlotsByName(QFormDoc);
    } // setupUi

    void retranslateUi(QWidget *QFormDoc)
    {
        QFormDoc->setWindowTitle(QCoreApplication::translate("QFormDoc", "Form", nullptr));
        actOpen->setText(QCoreApplication::translate("QFormDoc", "\346\211\223\345\274\200", nullptr));
        actCut->setText(QCoreApplication::translate("QFormDoc", "\345\211\252\345\210\207", nullptr));
        actCopy->setText(QCoreApplication::translate("QFormDoc", "\345\244\215\345\210\266", nullptr));
        actPaste->setText(QCoreApplication::translate("QFormDoc", "\347\262\230\350\264\264", nullptr));
        actFont->setText(QCoreApplication::translate("QFormDoc", "\345\255\227\344\275\223", nullptr));
        actClose->setText(QCoreApplication::translate("QFormDoc", "\345\205\263\351\227\255", nullptr));
        actUndo->setText(QCoreApplication::translate("QFormDoc", "\346\222\244\351\224\200", nullptr));
        actRedo->setText(QCoreApplication::translate("QFormDoc", "\351\207\215\345\244\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QFormDoc: public Ui_QFormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFORMDOC_H
