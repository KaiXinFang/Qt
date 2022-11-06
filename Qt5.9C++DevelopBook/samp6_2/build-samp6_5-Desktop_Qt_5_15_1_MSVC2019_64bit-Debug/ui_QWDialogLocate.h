/********************************************************************************
** Form generated from reading UI file 'QWDialogLocate.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOGLOCATE_H
#define UI_QWDIALOGLOCATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QWDialogLocate
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxColumn;
    QCheckBox *checkBoxColumn;
    QLabel *label_2;
    QSpinBox *spinBoxRow;
    QCheckBox *checkBoxRow;
    QLabel *label_3;
    QLineEdit *edtCaption;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QDialog *QWDialogLocate)
    {
        if (QWDialogLocate->objectName().isEmpty())
            QWDialogLocate->setObjectName(QString::fromUtf8("QWDialogLocate"));
        QWDialogLocate->resize(294, 172);
        gridLayout_3 = new QGridLayout(QWDialogLocate);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(QWDialogLocate);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxColumn = new QSpinBox(groupBox);
        spinBoxColumn->setObjectName(QString::fromUtf8("spinBoxColumn"));

        gridLayout->addWidget(spinBoxColumn, 0, 1, 1, 1);

        checkBoxColumn = new QCheckBox(groupBox);
        checkBoxColumn->setObjectName(QString::fromUtf8("checkBoxColumn"));

        gridLayout->addWidget(checkBoxColumn, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxRow = new QSpinBox(groupBox);
        spinBoxRow->setObjectName(QString::fromUtf8("spinBoxRow"));

        gridLayout->addWidget(spinBoxRow, 1, 1, 1, 1);

        checkBoxRow = new QCheckBox(groupBox);
        checkBoxRow->setObjectName(QString::fromUtf8("checkBoxRow"));

        gridLayout->addWidget(checkBoxRow, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        edtCaption = new QLineEdit(groupBox);
        edtCaption->setObjectName(QString::fromUtf8("edtCaption"));

        gridLayout->addWidget(edtCaption, 2, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(QWDialogLocate);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(QWDialogLocate);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(QWDialogLocate);

        QMetaObject::connectSlotsByName(QWDialogLocate);
    } // setupUi

    void retranslateUi(QDialog *QWDialogLocate)
    {
        QWDialogLocate->setWindowTitle(QCoreApplication::translate("QWDialogLocate", "\345\215\225\345\205\203\346\240\274\345\256\232\344\275\215\344\272\216\346\226\207\345\255\227\350\256\276\347\275\256", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("QWDialogLocate", "\345\210\227\345\217\267", nullptr));
        checkBoxColumn->setText(QCoreApplication::translate("QWDialogLocate", "\345\210\227\345\242\236", nullptr));
        label_2->setText(QCoreApplication::translate("QWDialogLocate", "\350\241\214\345\217\267", nullptr));
        checkBoxRow->setText(QCoreApplication::translate("QWDialogLocate", "\350\241\214\345\242\236", nullptr));
        label_3->setText(QCoreApplication::translate("QWDialogLocate", "\350\256\276\345\256\232\346\226\207\345\255\227", nullptr));
        pushButton->setText(QCoreApplication::translate("QWDialogLocate", "\350\256\276\345\256\232\346\226\207\345\255\227", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QWDialogLocate", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWDialogLocate: public Ui_QWDialogLocate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOGLOCATE_H
