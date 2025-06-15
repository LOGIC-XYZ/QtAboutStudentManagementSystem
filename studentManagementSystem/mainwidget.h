//这是一个预处理指令,用于防止头文件被多次包含。如果没有这个防范,在多个文件中包含该头文件会导致编译错误。
#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QStackedLayout>

#include "MenuWidget.h"
#include "AddStudentWidget.h"
#include "SelectWidget.h"
#include "DisplayWidget.h"
#include "SelectWidget.h"
#include "SortWidget.h"

//定义了ui命名空间
namespace Ui {
class mainWidget;//声明mainWidget
}
//定义mainWidget,公有继承QWidget
class mainWidget : public QWidget
{
    Q_OBJECT//Q_OBJECT 宏是Qt元对象系统的一部分,用于支持信号/槽机制和运行时类型信息。

public:
    explicit mainWidget(QWidget *parent = nullptr);
    //explicit用于修饰构造函数,表示这个构造函数不能被用于隐式转换。防止意外的隐式对象创建,提高代码的可读性和安全性。
    //QWidget *parent 表示一个指向 QWidget 对象的指针,这个指针将作为新创建的 mainWidget 对象的父窗口。
    //= nullptr 表示这个参数是可选的,如果不提供,将使用默认值 nullptr。
    ~mainWidget();

private:
    Ui::mainWidget *ui;//声明Ui::mainWidget类型的指针ui,用于访问主窗口的UI界面

    // 各个功能窗口的指针
    MenuWidget *menuwidget;	//菜单窗口
    AddStudentWidget *addstudentwidget;	//添加学生窗口
    DisplayWidget *displaywidget;//浏览窗口
    SelectWidget *selectwidget;	//查询窗口
    SortWidget *sortwidget;	//排序窗口
    QStackedLayout *stackLayout;	// 用于切换窗口的 QStackedLayout 指针


};

#endif // MAINWIDGET_H
