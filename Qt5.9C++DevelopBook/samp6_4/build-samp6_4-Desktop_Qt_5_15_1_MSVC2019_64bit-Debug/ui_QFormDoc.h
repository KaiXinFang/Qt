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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFormDoc
{
public:
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *QFormDoc)
    {
        if (QFormDoc->objectName().isEmpty())
            QFormDoc->setObjectName(QString::fromUtf8("QFormDoc"));
        QFormDoc->resize(452, 482);
        horizontalLayout = new QHBoxLayout(QFormDoc);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        plainTextEdit = new QPlainTextEdit(QFormDoc);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        horizontalLayout->addWidget(plainTextEdit);


        retranslateUi(QFormDoc);

        QMetaObject::connectSlotsByName(QFormDoc);
    } // setupUi

    void retranslateUi(QWidget *QFormDoc)
    {
        QFormDoc->setWindowTitle(QCoreApplication::translate("QFormDoc", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QFormDoc: public Ui_QFormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFORMDOC_H
