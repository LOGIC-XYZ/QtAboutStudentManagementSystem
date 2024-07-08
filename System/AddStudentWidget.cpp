#include "AddStudentWidget.h"
#include "./ui_AddStudentWidget.h"

// 构造函数
AddStudentWidget::AddStudentWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddStudentWidget)
{
    // 设置 ui 界面
    ui->setupUi(this);
}

AddStudentWidget::~AddStudentWidget()
{
    delete ui;
}

// 点击"主菜单"按钮时触发的槽函数
void AddStudentWidget::on_returnButton_clicked(){   //返回按钮点击
     // 发送 display 信号,参数为 0
    emit display(0);
}


void AddStudentWidget::on_addButton_clicked(){  //添加按钮点击
    //获取用户输入的学生信息
    QString name = ui->nameLineEdit->text();
    QString gender = ui->genderLineEdit->text();
    //获取用户输入的学生信息,并转换为整型
    int math = ui->mathLineEdit->text().toInt();
    int english = ui->enLineEdit->text().toInt();
    int computer = ui->cLineEdit->text().toInt();

    //检查是否存在空项
    if(ui->nameLineEdit->text() == ""  || ui->genderLineEdit->text() == "" || ui->mathLineEdit->text() == "" || ui->enLineEdit->text() == "" || ui->cLineEdit->text() == ""){
        //弹出对话框提示
        QMessageBox::about(NULL, "反馈", "存在空项");
    }

    //打开学生信息文件
    QFile file("student.txt");
    file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
    //open()可以用来打开文件,QIODevice::WriteOnly代表将文件以只写的方式打开
    //QIODevice::Text代表打开的是文本文件，QIODevice::Text会对end-of-line结束符进行转译
    //QIODevice::Append以追加的方式打开，新增加的内容将被追加到文件末尾

    if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
        QMessageBox::about(NULL, "反馈", "数据文件打开失败");
        return;
    }

    //生成随机学号
    srand(static_cast<unsigned int>(time(0)));//根据当前时间随机,static_cast<unsigned int>() 将 time(0) 的返回值转换为无符号整数类型。
    int id = rand() % 1000 + 2014000;
    int total = math + english + computer;//计算总分

    //将学生信息写入文件
    QTextStream out(&file);
    out << id << " " << name << " " << gender << " "<< math << " " << english << " " << computer << " " << total << Qt::endl;

    file.close();//关闭文件

    //将用户输入的数据清空
    ui->nameLineEdit->clear();
    ui->genderLineEdit->clear();
    ui->mathLineEdit->clear();
    ui->enLineEdit->clear();
    ui->cLineEdit->clear();

}
