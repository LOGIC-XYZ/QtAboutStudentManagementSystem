#include "mainwidget.h"
#include "ui_mainwidget.h"

namespace Ui {
class Ui_mainWidget;
}

//构造函数
mainWidget::mainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainWidget)//创建一个新的对象,赋值给成员变量ui,Ui::mainWidget是自动生成的类,用于管理主窗口的UI界面
{
    //设置ui界面
    ui->setupUi(this);//用于将 Qt 设计器生成的 UI 布局和组件设置到当前的 mainWidget 对象上。

    // 创建各个功能窗口的实例
    menuwidget = new MenuWidget;//使用 new 关键字创建了一个新的 MenuWidget 对象,并将其赋值给 menuwidget 指针。
    addstudentwidget = new AddStudentWidget;
    displaywidget = new DisplayWidget;
    selectwidget = new SelectWidget;
    sortwidget = new SortWidget;

    stackLayout = new QStackedLayout;// 创建 QStackedLayout 实例

    // 创建 QStackedLayout 实例
    stackLayout->addWidget(menuwidget);//将 menuwidget 对象添加到 stackLayout 中。
    stackLayout->addWidget(addstudentwidget);
    stackLayout->addWidget(displaywidget);
    stackLayout->addWidget(selectwidget);
    stackLayout->addWidget(sortwidget);

    setLayout(stackLayout);// 设置主窗口的布局为 QStackedLayout

    // 建立信号与槽的连接
    connect(menuwidget, &MenuWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(addstudentwidget, &AddStudentWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(displaywidget, &DisplayWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(selectwidget, &SelectWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(sortwidget, &SortWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);
}

mainWidget::~mainWidget()
{
    delete ui;
}
