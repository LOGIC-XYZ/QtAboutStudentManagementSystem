
#ifndef DISPLAYWIDGET_H
#define DISPLAYWIDGET_H

#include <QWidget>
#include <QtDebug>
#include <QFile>
#include <QVector> //Qt 提供的一种动态数组容器。
#include <QMessageBox>

// 包含自定义的 StudentInfo 类
#include "studentinfo.h"

namespace Ui {
class DisplayWidget;
}

class DisplayWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DisplayWidget(QWidget *parent = nullptr);
        ~DisplayWidget();

private:
    Ui::DisplayWidget *ui;
    //数据类型为StudentInfo的QVector容器用于存储所有学生信息
    QVector<StudentInfo> allStudentInfo;

signals:
    void display(int number);

private slots:
    void on_returnButton_clicked();
    void on_displayButton_clicked();

};

#endif // DISPLAYWIDGET_H

