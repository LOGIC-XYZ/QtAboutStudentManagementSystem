/********************************************************************************
** Form generated from reading UI file 'SelectWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIDGET_H
#define UI_SELECTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectWidget
{
public:
    QPushButton *returnButton;
    QLabel *nameLabel;
    QLabel *idLabel;
    QLabel *genderLabel;
    QLabel *mathLabel;
    QLabel *enLabel;
    QLabel *computerLabel;
    QPushButton *selectIdButton;
    QLineEdit *idLineEdit;
    QLabel *showNameLabel;
    QLabel *showGenderLabel;
    QLabel *showMathLabel;
    QLabel *showEnLabel;
    QLabel *CLabel;
    QLabel *showIdLabel;
    QLabel *label;
    QPushButton *selectNameButton;
    QLabel *label_2;
    QLineEdit *nameLineEdit;

    void setupUi(QWidget *SelectWidget)
    {
        if (SelectWidget->objectName().isEmpty())
            SelectWidget->setObjectName("SelectWidget");
        SelectWidget->resize(800, 480);
        returnButton = new QPushButton(SelectWidget);
        returnButton->setObjectName("returnButton");
        returnButton->setGeometry(QRect(670, 400, 91, 41));
        nameLabel = new QLabel(SelectWidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(120, 110, 61, 21));
        idLabel = new QLabel(SelectWidget);
        idLabel->setObjectName("idLabel");
        idLabel->setGeometry(QRect(120, 70, 61, 21));
        genderLabel = new QLabel(SelectWidget);
        genderLabel->setObjectName("genderLabel");
        genderLabel->setGeometry(QRect(120, 150, 61, 21));
        mathLabel = new QLabel(SelectWidget);
        mathLabel->setObjectName("mathLabel");
        mathLabel->setGeometry(QRect(120, 190, 61, 21));
        enLabel = new QLabel(SelectWidget);
        enLabel->setObjectName("enLabel");
        enLabel->setGeometry(QRect(120, 230, 61, 21));
        computerLabel = new QLabel(SelectWidget);
        computerLabel->setObjectName("computerLabel");
        computerLabel->setGeometry(QRect(120, 270, 61, 21));
        selectIdButton = new QPushButton(SelectWidget);
        selectIdButton->setObjectName("selectIdButton");
        selectIdButton->setGeometry(QRect(670, 60, 91, 41));
        idLineEdit = new QLineEdit(SelectWidget);
        idLineEdit->setObjectName("idLineEdit");
        idLineEdit->setGeometry(QRect(490, 80, 113, 20));
        showNameLabel = new QLabel(SelectWidget);
        showNameLabel->setObjectName("showNameLabel");
        showNameLabel->setGeometry(QRect(280, 110, 131, 16));
        showGenderLabel = new QLabel(SelectWidget);
        showGenderLabel->setObjectName("showGenderLabel");
        showGenderLabel->setGeometry(QRect(280, 150, 131, 16));
        showMathLabel = new QLabel(SelectWidget);
        showMathLabel->setObjectName("showMathLabel");
        showMathLabel->setGeometry(QRect(280, 190, 131, 16));
        showEnLabel = new QLabel(SelectWidget);
        showEnLabel->setObjectName("showEnLabel");
        showEnLabel->setGeometry(QRect(280, 230, 131, 16));
        CLabel = new QLabel(SelectWidget);
        CLabel->setObjectName("CLabel");
        CLabel->setGeometry(QRect(280, 270, 131, 16));
        showIdLabel = new QLabel(SelectWidget);
        showIdLabel->setObjectName("showIdLabel");
        showIdLabel->setGeometry(QRect(280, 70, 131, 16));
        label = new QLabel(SelectWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(490, 30, 111, 41));
        selectNameButton = new QPushButton(SelectWidget);
        selectNameButton->setObjectName("selectNameButton");
        selectNameButton->setGeometry(QRect(670, 200, 91, 41));
        label_2 = new QLabel(SelectWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(490, 170, 111, 41));
        nameLineEdit = new QLineEdit(SelectWidget);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(490, 220, 113, 20));

        retranslateUi(SelectWidget);

        QMetaObject::connectSlotsByName(SelectWidget);
    } // setupUi

    void retranslateUi(QWidget *SelectWidget)
    {
        SelectWidget->setWindowTitle(QCoreApplication::translate("SelectWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("SelectWidget", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        nameLabel->setText(QCoreApplication::translate("SelectWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
        idLabel->setText(QCoreApplication::translate("SelectWidget", "\345\255\246\345\217\267", nullptr));
        genderLabel->setText(QCoreApplication::translate("SelectWidget", "\346\200\247\345\210\253", nullptr));
        mathLabel->setText(QCoreApplication::translate("SelectWidget", "\346\225\260\345\255\246\346\210\220\347\273\251", nullptr));
        enLabel->setText(QCoreApplication::translate("SelectWidget", "\350\213\261\350\257\255\346\210\220\347\273\251", nullptr));
        computerLabel->setText(QCoreApplication::translate("SelectWidget", "\350\256\241\347\256\227\346\234\272\346\210\220\347\273\251", nullptr));
        selectIdButton->setText(QCoreApplication::translate("SelectWidget", "\351\200\232\350\277\207\345\255\246\345\217\267\346\237\245\350\257\242", nullptr));
        showNameLabel->setText(QCoreApplication::translate("SelectWidget", "NULL", nullptr));
        showGenderLabel->setText(QCoreApplication::translate("SelectWidget", "NULL", nullptr));
        showMathLabel->setText(QCoreApplication::translate("SelectWidget", "NULL", nullptr));
        showEnLabel->setText(QCoreApplication::translate("SelectWidget", "NULL", nullptr));
        CLabel->setText(QCoreApplication::translate("SelectWidget", "NULL", nullptr));
        showIdLabel->setText(QCoreApplication::translate("SelectWidget", "NULL", nullptr));
        label->setText(QCoreApplication::translate("SelectWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267</span></p></body></html>", nullptr));
        selectNameButton->setText(QCoreApplication::translate("SelectWidget", "\351\200\232\350\277\207\345\247\223\345\220\215\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("SelectWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectWidget: public Ui_SelectWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIDGET_H
