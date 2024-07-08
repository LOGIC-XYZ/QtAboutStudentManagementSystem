/********************************************************************************
** Form generated from reading UI file 'ModifyWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYWIDGET_H
#define UI_MODIFYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyWidget
{
public:
    QPushButton *returnButton;
    QPushButton *modifyButton;
    QPushButton *deleteButton;
    QLineEdit *idLineEdit;
    QLabel *idLabel;
    QLabel *nameLabel;
    QLabel *genderLabel;
    QLabel *mathLabel;
    QLabel *enLabel;
    QLabel *cLabel;
    QLineEdit *nameLineEdit;
    QLineEdit *genderLineEdit;
    QLineEdit *mathLineEdit;
    QLineEdit *enLineEdit;
    QLineEdit *cLineEdit;

    void setupUi(QWidget *ModifyWidget)
    {
        if (ModifyWidget->objectName().isEmpty())
            ModifyWidget->setObjectName("ModifyWidget");
        ModifyWidget->resize(800, 480);
        returnButton = new QPushButton(ModifyWidget);
        returnButton->setObjectName("returnButton");
        returnButton->setGeometry(QRect(600, 300, 101, 41));
        modifyButton = new QPushButton(ModifyWidget);
        modifyButton->setObjectName("modifyButton");
        modifyButton->setGeometry(QRect(600, 180, 101, 41));
        deleteButton = new QPushButton(ModifyWidget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(600, 240, 101, 41));
        idLineEdit = new QLineEdit(ModifyWidget);
        idLineEdit->setObjectName("idLineEdit");
        idLineEdit->setGeometry(QRect(582, 130, 131, 20));
        idLabel = new QLabel(ModifyWidget);
        idLabel->setObjectName("idLabel");
        idLabel->setGeometry(QRect(620, 90, 61, 21));
        nameLabel = new QLabel(ModifyWidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(220, 130, 61, 31));
        genderLabel = new QLabel(ModifyWidget);
        genderLabel->setObjectName("genderLabel");
        genderLabel->setGeometry(QRect(220, 180, 61, 31));
        mathLabel = new QLabel(ModifyWidget);
        mathLabel->setObjectName("mathLabel");
        mathLabel->setGeometry(QRect(220, 280, 61, 21));
        enLabel = new QLabel(ModifyWidget);
        enLabel->setObjectName("enLabel");
        enLabel->setGeometry(QRect(220, 230, 61, 21));
        cLabel = new QLabel(ModifyWidget);
        cLabel->setObjectName("cLabel");
        cLabel->setGeometry(QRect(220, 330, 61, 21));
        nameLineEdit = new QLineEdit(ModifyWidget);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(340, 230, 113, 20));
        genderLineEdit = new QLineEdit(ModifyWidget);
        genderLineEdit->setObjectName("genderLineEdit");
        genderLineEdit->setGeometry(QRect(340, 130, 113, 20));
        mathLineEdit = new QLineEdit(ModifyWidget);
        mathLineEdit->setObjectName("mathLineEdit");
        mathLineEdit->setGeometry(QRect(340, 180, 113, 20));
        enLineEdit = new QLineEdit(ModifyWidget);
        enLineEdit->setObjectName("enLineEdit");
        enLineEdit->setGeometry(QRect(340, 280, 113, 20));
        cLineEdit = new QLineEdit(ModifyWidget);
        cLineEdit->setObjectName("cLineEdit");
        cLineEdit->setGeometry(QRect(340, 330, 113, 20));

        retranslateUi(ModifyWidget);

        QMetaObject::connectSlotsByName(ModifyWidget);
    } // setupUi

    void retranslateUi(QWidget *ModifyWidget)
    {
        ModifyWidget->setWindowTitle(QCoreApplication::translate("ModifyWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("ModifyWidget", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        modifyButton->setText(QCoreApplication::translate("ModifyWidget", "\344\277\256\346\224\271", nullptr));
        deleteButton->setText(QCoreApplication::translate("ModifyWidget", "\345\210\240\351\231\244", nullptr));
        idLabel->setText(QCoreApplication::translate("ModifyWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\345\255\246\345\217\267</span></p></body></html>", nullptr));
        nameLabel->setText(QCoreApplication::translate("ModifyWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
        genderLabel->setText(QCoreApplication::translate("ModifyWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\200\247\345\210\253</span></p></body></html>", nullptr));
        mathLabel->setText(QCoreApplication::translate("ModifyWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\225\260\345\255\246</span></p></body></html>", nullptr));
        enLabel->setText(QCoreApplication::translate("ModifyWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\350\213\261\350\257\255</span></p></body></html>", nullptr));
        cLabel->setText(QCoreApplication::translate("ModifyWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\350\256\241\347\256\227\346\234\272</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyWidget: public Ui_ModifyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYWIDGET_H
