
#include "DisplayWidget.h"
#include "ui_DisplayWidget.h"
#include "studentinfo.h"

DisplayWidget::DisplayWidget(QWidget* parent) :
    QWidget(parent),
    ui(new Ui::DisplayWidget)
{
    ui->setupUi(this);
}

DisplayWidget::~DisplayWidget()
{
    delete ui;
}

void DisplayWidget::on_returnButton_clicked(){   //返回按钮点击
    //清空表格内容
    ui->tableWidget->clearContents();//清空原有所有内容
    ui->tableWidget->setRowCount(0);//表格行数设为0,清空表格所有行
    emit display(0);
}

void DisplayWidget::on_displayButton_clicked(){
    QFile file("student.txt");//创建一个student.txt文件
    file.open(QIODevice::ReadOnly|QIODevice::Text);//以只读的方式,文本模式打开学生信息文件
    if(!file.isOpen()){
        //文件打开失败,弹出对话框
        QMessageBox::about(NULL, "反馈", "文件打开失败");
        return;
    }
    QTextStream inp(&file); // 创建一个 QTextStream 用于读取文件
    QVector<StudentInfo> allStudentInfo;//数据类型为StudentInfo的QVector容器用于存储所有学生信息
    while(!inp.atEnd()){ //读到文件结尾
        QString name,gender;
        int id, math, english, computer, total;
        inp >> id >> name >> gender >> math >> english >> computer >> total;//从输入流中读取数据。
        allStudentInfo.push_back(StudentInfo(id, name, gender, math, english, computer, total));
        //调用之前建立的构造函数实例化一个StudentInfo对象并将其加入allStudentInfo
    }
    allStudentInfo.pop_back();//去掉最后的无用数据
    file.close();//关闭文件

    //设置表格属性
    ui->tableWidget->setShowGrid(true);//显示格子线
    ui->tableWidget->setColumnCount(6);//设置列数
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //禁止编辑
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true); //行头自适应表格

    //将学生信息填充到表格
    for(auto i:allStudentInfo)
    {
        int row=ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row,0,new QTableWidgetItem(QString::number(i.getId())));
        ui->tableWidget->setItem(row,1,new QTableWidgetItem(i.getName()));
        ui->tableWidget->setItem(row,2,new QTableWidgetItem(i.getGender()));
        ui->tableWidget->setItem(row,3,new QTableWidgetItem(QString::number(i.getMath())));
        ui->tableWidget->setItem(row,4,new QTableWidgetItem(QString::number(i.getEnglish())));
        ui->tableWidget->setItem(row,5,new QTableWidgetItem(QString::number(i.getComputer())));
    }
}
