#ifndef ADDSTUDENTWIDGET_H
#define ADDSTUDENTWIDGET_H

#include <QWidget> //可视化用户界面组件
#include <QFile> //用于文件操作的类
#include <QMessageBox> //用于显示消息框的类
#include <QDebug> //用于调试输出的类


namespace Ui {
class AddStudentWidget;
}

// AddStudentWidget 类继承自 QWidget 类
class AddStudentWidget : public QWidget
{
    Q_OBJECT

public:
    // 构造函数,可以传入一个 QWidget 类型的 parent 参数
    explicit AddStudentWidget(QWidget *parent = nullptr);
    ~AddStudentWidget();

private:
    Ui::AddStudentWidget *ui;

signals:
     // display 信号,用于向其他界面传递一个整数参数
    void display(int number);

private slots:
    void on_returnButton_clicked(); //点击返回按钮
    void on_addButton_clicked();    //点击添加按钮
};

#endif // ADDSTUDENTWIDGET_H
