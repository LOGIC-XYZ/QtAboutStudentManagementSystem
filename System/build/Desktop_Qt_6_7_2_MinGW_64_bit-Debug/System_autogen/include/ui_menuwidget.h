/********************************************************************************
** Form generated from reading UI file 'MenuWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWIDGET_H
#define UI_MENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWidget
{
public:
    QPushButton *addButton;
    QPushButton *displayButton;
    QPushButton *selectButton;
    QPushButton *sortButton;
    QPushButton *exitButton;
    QLabel *title;

    void setupUi(QWidget *MenuWidget)
    {
        if (MenuWidget->objectName().isEmpty())
            MenuWidget->setObjectName("MenuWidget");
        MenuWidget->resize(800, 480);
        MenuWidget->setStyleSheet(QString::fromUtf8(""));
        addButton = new QPushButton(MenuWidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(170, 140, 91, 31));
        displayButton = new QPushButton(MenuWidget);
        displayButton->setObjectName("displayButton");
        displayButton->setGeometry(QRect(170, 180, 91, 31));
        selectButton = new QPushButton(MenuWidget);
        selectButton->setObjectName("selectButton");
        selectButton->setGeometry(QRect(170, 220, 91, 31));
        sortButton = new QPushButton(MenuWidget);
        sortButton->setObjectName("sortButton");
        sortButton->setGeometry(QRect(170, 260, 91, 31));
        exitButton = new QPushButton(MenuWidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(170, 300, 91, 31));
        title = new QLabel(MenuWidget);
        title->setObjectName("title");
        title->setGeometry(QRect(240, 50, 321, 61));
        title->setAlignment(Qt::AlignCenter);
        title->setWordWrap(false);
        title->setMargin(8);
        title->setIndent(-1);

        retranslateUi(MenuWidget);

        QMetaObject::connectSlotsByName(MenuWidget);
    } // setupUi

    void retranslateUi(QWidget *MenuWidget)
    {
        MenuWidget->setWindowTitle(QCoreApplication::translate("MenuWidget", "Form", nullptr));
        addButton->setText(QCoreApplication::translate("MenuWidget", "\346\267\273\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        displayButton->setText(QCoreApplication::translate("MenuWidget", "\346\265\217\350\247\210\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        selectButton->setText(QCoreApplication::translate("MenuWidget", "\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        sortButton->setText(QCoreApplication::translate("MenuWidget", "\345\255\246\347\224\237\346\210\220\347\273\251\346\216\222\345\272\217", nullptr));
        exitButton->setText(QCoreApplication::translate("MenuWidget", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        title->setText(QCoreApplication::translate("MenuWidget", "<html><head/><body><p><span style=\" font-size:26pt; font-weight:700;\">\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWidget: public Ui_MenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWIDGET_H
