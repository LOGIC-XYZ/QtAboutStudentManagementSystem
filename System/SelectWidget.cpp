#include "SelectWidget.h"
#include "studentinfo.h"
#include "ui_SelectWidget.h"

SelectWidget::SelectWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectWidget)
{
    ui->setupUi(this);
}

SelectWidget::~SelectWidget()
{
    delete ui;
}

// 点击返回按钮时触发的槽函数
void SelectWidget::on_returnButton_clicked(){
    //清除数据
    ui->showIdLabel->clear();
    ui->showNameLabel->clear();
    ui->showGenderLabel->clear();
    ui->showMathLabel->clear();
    ui->showEnLabel->clear();
    ui->CLabel->clear();
    emit display(0);
}

// 点击"按学号查询"按钮时触发的槽函数
void SelectWidget::on_selectIdButton_clicked()
{
    // 检查输入的学号是否为空
    if(ui->idLineEdit->text() == "")
    {
        QMessageBox::about(NULL, "反馈", "id不能为空");
        return;
    }

    // 打开学生信息文件
    QFile file("student.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    // 检查文件是否打开成功
    if(!file.isOpen())
    { //文件打开失败,弹出对话框
        QMessageBox::about(NULL, "反馈", "文件打开失败");
        return;
    }
    QTextStream inp(&file);// 创建一个 QTextStream 用于读取文件
    QVector<StudentInfo> allStudentInfo; //数据类型为StudentInfo的QVector容器用于存储所有学生信息

    // 读取文件,并将学生信息存入 allStudentInfo
    while(!inp.atEnd())
    { //读到文件结尾
        QString name,gender;
        int id, math, english, computer, total;
        inp >> id >>name  >> gender >> math >> english >> computer >> total;
        allStudentInfo.push_back(StudentInfo(id, name, gender, math, english, computer, total));
        //调用之前建立的构造函数实例化一个StudentInfo对象并将其加入allStudentInfo
    }
    file.close(); //关闭文件

    int id = ui->idLineEdit->text().toInt(); // 获取输入的学号
    bool flag = false;
    for(auto i : allStudentInfo)
    {
        if(i.getId() == id)
        {
             // 获取输入的学号
            ui->showIdLabel->setText(QString::number(i.getId()));
            ui->showNameLabel->setText(i.getName());
            ui->showGenderLabel->setText(i.getGender());
            ui->showMathLabel->setText(QString::number(i.getMath()));
            ui->showEnLabel->setText(QString::number(i.getEnglish()));
            ui->CLabel->setText(QString::number(i.getComputer()));
            flag = true;
            break;
        }
    }

    // 如果没有找到,弹出对话框提示
    if(!flag)
    {
        QMessageBox::about(NULL, "反馈", "id不存在！");
    }
    ui->idLineEdit->clear();// 清空输入框
}

// 点击"按姓名查询"按钮时触发的槽函数
void SelectWidget::on_selectNameButton_clicked()
{
    // 检查输入的姓名是否为空
    if(ui->nameLineEdit->text() == "")
    {
        // 如果为空,弹出对话框提示
        QMessageBox::about(NULL, "反馈", "姓名不能为空");
        return;
    }

    // 打开学生信息文件
    QFile file("student.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);

     // 检查文件是否打开成功
    if(!file.isOpen())
    {   // 如果打开失败,弹出对话框提示
        QMessageBox::about(NULL, "反馈", "文件打开失败");
        return;
    }
    QTextStream inp(&file);// 创建一个 QTextStream 用于读取文件
    QVector<StudentInfo> allStudentInfo;// 创建一个数据类型为StudentInfo的QVector容器用于存储所有学生信息
    //读取文件,并将学生信息存入 allStudentInfo
    while(!inp.atEnd())
    { //读到文件结尾
        QString name,gender;
        int id, math, english, computer , total;
        inp >> id >>name  >> gender >> math >> english >> computer >> total;
        allStudentInfo.push_back(StudentInfo(id, name, gender, math, english, computer, total));
        //调用之前建立的构造函数实例化一个StudentInfo对象并将其加入allStudentInfo
    }
    allStudentInfo.pop_back();//去掉最后的无用数据
    file.close();//关闭文件
    QString name = ui->nameLineEdit->text();//关闭文件
    bool flag = false;
    // 遍历 allStudentInfo,查找匹配的学生信息
    for(auto i : allStudentInfo)
    {
        // 如果找到,则显示学生信息
        if(i.getName() == name)
        {
            ui->showIdLabel->setText(QString::number(i.getId()));
            ui->showNameLabel->setText(i.getName());
            ui->showGenderLabel->setText(i.getGender());
            ui->showMathLabel->setText(QString::number(i.getMath()));
            ui->showEnLabel->setText(QString::number(i.getEnglish()));
            ui->CLabel->setText(QString::number(i.getComputer()));
            flag = true;
            break;
        }

    }
     // 如果没有找到,弹出对话框提示
    if(!flag)
    {
        QMessageBox::about(NULL, "反馈", "姓名不存在！");
    }
    ui->nameLineEdit->clear(); // 清空输入框
}
