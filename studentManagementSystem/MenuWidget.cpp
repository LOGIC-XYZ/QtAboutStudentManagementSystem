#include "menuwidget.h"
#include "ui_menuwidget.h"

// 构造函数
MenuWidget::MenuWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWidget)
{
    // 设置 ui 界面
    ui->setupUi(this);
}

// 析构函数
MenuWidget::~MenuWidget()
{
    delete ui;
}

// 点击"添加学生"按钮时触发的槽函数
void MenuWidget::on_addButton_clicked(){
    emit display(1);     // 发送 display 信号,参数为 1(对应添加学生界面)
}

// 点击"显示学生"按钮时触发的槽函数
void MenuWidget::on_displayButton_clicked(){
    emit display(2);     // 发送 display 信号,参数为 2(对应显示学生界面)
}

// 点击"查询学生"按钮时触发的槽函数
void MenuWidget::on_selectButton_clicked(){
    emit display(3);    // 发送 display 信号,参数为 3(对应查询学生界面)
}

// 点击"学生排序"按钮时触发的槽函数
void MenuWidget::on_sortButton_clicked(){
    emit display(4);    // 发送 display 信号,参数为 4(对应学生排序界面)
}

// 点击"退出"按钮时触发的槽函数
void MenuWidget::on_exitButton_clicked(){
    QApplication::exit();   // 退出应用程序
}
