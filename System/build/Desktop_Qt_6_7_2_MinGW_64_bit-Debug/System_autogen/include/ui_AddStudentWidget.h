/********************************************************************************
** Form generated from reading UI file 'AddStudentWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTWIDGET_H
#define UI_ADDSTUDENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStudentWidget
{
public:
    QPushButton *returnButton;
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
    QPushButton *addButton;

    void setupUi(QWidget *AddStudentWidget)
    {
        if (AddStudentWidget->objectName().isEmpty())
            AddStudentWidget->setObjectName("AddStudentWidget");
        AddStudentWidget->resize(800, 480);
        AddStudentWidget->setStyleSheet(QString::fromUtf8(""));
        returnButton = new QPushButton(AddStudentWidget);
        returnButton->setObjectName("returnButton");
        returnButton->setGeometry(QRect(660, 400, 101, 41));
        nameLabel = new QLabel(AddStudentWidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(220, 100, 61, 21));
        genderLabel = new QLabel(AddStudentWidget);
        genderLabel->setObjectName("genderLabel");
        genderLabel->setGeometry(QRect(220, 130, 61, 21));
        mathLabel = new QLabel(AddStudentWidget);
        mathLabel->setObjectName("mathLabel");
        mathLabel->setGeometry(QRect(220, 160, 61, 21));
        enLabel = new QLabel(AddStudentWidget);
        enLabel->setObjectName("enLabel");
        enLabel->setGeometry(QRect(220, 190, 61, 21));
        cLabel = new QLabel(AddStudentWidget);
        cLabel->setObjectName("cLabel");
        cLabel->setGeometry(QRect(220, 220, 61, 21));
        nameLineEdit = new QLineEdit(AddStudentWidget);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(340, 100, 113, 20));
        genderLineEdit = new QLineEdit(AddStudentWidget);
        genderLineEdit->setObjectName("genderLineEdit");
        genderLineEdit->setGeometry(QRect(340, 130, 113, 20));
        mathLineEdit = new QLineEdit(AddStudentWidget);
        mathLineEdit->setObjectName("mathLineEdit");
        mathLineEdit->setGeometry(QRect(340, 160, 113, 20));
        enLineEdit = new QLineEdit(AddStudentWidget);
        enLineEdit->setObjectName("enLineEdit");
        enLineEdit->setGeometry(QRect(340, 190, 113, 20));
        cLineEdit = new QLineEdit(AddStudentWidget);
        cLineEdit->setObjectName("cLineEdit");
        cLineEdit->setGeometry(QRect(340, 220, 113, 20));
        addButton = new QPushButton(AddStudentWidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(270, 270, 101, 31));

        retranslateUi(AddStudentWidget);

        QMetaObject::connectSlotsByName(AddStudentWidget);
    } // setupUi

    void retranslateUi(QWidget *AddStudentWidget)
    {
        AddStudentWidget->setWindowTitle(QCoreApplication::translate("AddStudentWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("AddStudentWidget", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        nameLabel->setText(QCoreApplication::translate("AddStudentWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
        genderLabel->setText(QCoreApplication::translate("AddStudentWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\200\247\345\210\253</span></p></body></html>", nullptr));
        mathLabel->setText(QCoreApplication::translate("AddStudentWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\225\260\345\255\246</span></p></body></html>", nullptr));
        enLabel->setText(QCoreApplication::translate("AddStudentWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\350\213\261\350\257\255</span></p></body></html>", nullptr));
        cLabel->setText(QCoreApplication::translate("AddStudentWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\350\256\241\347\256\227\346\234\272</span></p></body></html>", nullptr));
        addButton->setText(QCoreApplication::translate("AddStudentWidget", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudentWidget: public Ui_AddStudentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTWIDGET_H
