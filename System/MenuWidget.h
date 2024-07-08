#ifndef MENUWIDGET_H
#define MENUWIDGET_H

#include <QWidget>

namespace Ui {
class MenuWidget;
}

class MenuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MenuWidget(QWidget *parent = nullptr);
    ~MenuWidget();

private:
    Ui::MenuWidget *ui;

//定义信号成员
signals:
    void display(int number);//信号声明

//私有的槽函数声明
private slots:
    void on_addButton_clicked();    //添加
    void on_displayButton_clicked();//浏览
    void on_selectButton_clicked(); //查询
    void on_sortButton_clicked();   //排序
    void on_exitButton_clicked();   //退出
};

#endif // MENUWIDGET_H
