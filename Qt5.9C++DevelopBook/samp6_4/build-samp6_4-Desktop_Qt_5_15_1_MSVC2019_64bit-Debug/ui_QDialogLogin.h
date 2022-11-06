/********************************************************************************
** Form generated from reading UI file 'QDialogLogin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOGLOGIN_H
#define UI_QDIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QDialogLogin
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *editUser;
    QLabel *label_3;
    QLineEdit *editPWSD;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_Save;
    QPushButton *btnOK;
    QPushButton *pushButton_2;

    void setupUi(QDialog *QDialogLogin)
    {
        if (QDialogLogin->objectName().isEmpty())
            QDialogLogin->setObjectName(QString::fromUtf8("QDialogLogin"));
        QDialogLogin->resize(590, 456);
        QDialogLogin->setMaximumSize(QSize(1938, 456));
        verticalLayout = new QVBoxLayout(QDialogLogin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(QDialogLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 373));
        label->setMaximumSize(QSize(572, 402));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/image/senery.jfif")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(QDialogLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        editUser = new QLineEdit(QDialogLogin);
        editUser->setObjectName(QString::fromUtf8("editUser"));

        horizontalLayout->addWidget(editUser);

        label_3 = new QLabel(QDialogLogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        editPWSD = new QLineEdit(QDialogLogin);
        editPWSD->setObjectName(QString::fromUtf8("editPWSD"));

        horizontalLayout->addWidget(editPWSD);

        horizontalSpacer = new QSpacerItem(22, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBox_Save = new QCheckBox(QDialogLogin);
        checkBox_Save->setObjectName(QString::fromUtf8("checkBox_Save"));

        horizontalLayout->addWidget(checkBox_Save);

        btnOK = new QPushButton(QDialogLogin);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout->addWidget(btnOK);

        pushButton_2 = new QPushButton(QDialogLogin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QDialogLogin);

        QMetaObject::connectSlotsByName(QDialogLogin);
    } // setupUi

    void retranslateUi(QDialog *QDialogLogin)
    {
        QDialogLogin->setWindowTitle(QCoreApplication::translate("QDialogLogin", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("QDialogLogin", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("QDialogLogin", "\345\257\206\347\240\201\357\274\232", nullptr));
        checkBox_Save->setText(QCoreApplication::translate("QDialogLogin", "\344\277\235\345\255\230\347\224\250\346\210\267\345\220\215", nullptr));
        btnOK->setText(QCoreApplication::translate("QDialogLogin", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QDialogLogin", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QDialogLogin: public Ui_QDialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOGLOGIN_H
