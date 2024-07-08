#include "mainwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    mainWidget w;
    w.setWindowTitle(QStringLiteral("学生信息管理系统"));//设置窗口名字
    w.show();

    return a.exec();
}
