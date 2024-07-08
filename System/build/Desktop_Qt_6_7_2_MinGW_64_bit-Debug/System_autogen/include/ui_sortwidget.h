/********************************************************************************
** Form generated from reading UI file 'SortWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTWIDGET_H
#define UI_SORTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortWidget
{
public:
    QPushButton *returnButton;
    QLabel *label;
    QPushButton *sortButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *SortWidget)
    {
        if (SortWidget->objectName().isEmpty())
            SortWidget->setObjectName("SortWidget");
        SortWidget->resize(800, 480);
        returnButton = new QPushButton(SortWidget);
        returnButton->setObjectName("returnButton");
        returnButton->setGeometry(QRect(670, 410, 101, 41));
        label = new QLabel(SortWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 10, 341, 41));
        sortButton = new QPushButton(SortWidget);
        sortButton->setObjectName("sortButton");
        sortButton->setGeometry(QRect(670, 350, 101, 41));
        tableWidget = new QTableWidget(SortWidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QFont font;
        font.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 50, 641, 421));

        retranslateUi(SortWidget);

        QMetaObject::connectSlotsByName(SortWidget);
    } // setupUi

    void retranslateUi(QWidget *SortWidget)
    {
        SortWidget->setWindowTitle(QCoreApplication::translate("SortWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("SortWidget", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        label->setText(QCoreApplication::translate("SortWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\345\255\246\347\224\237\346\200\273\345\210\206\346\216\222\345\272\217</span></p></body></html>", nullptr));
        sortButton->setText(QCoreApplication::translate("SortWidget", "\346\216\222\345\272\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SortWidget", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SortWidget", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SortWidget", "\346\200\247\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SortWidget", "\346\200\273\345\210\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SortWidget: public Ui_SortWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTWIDGET_H
