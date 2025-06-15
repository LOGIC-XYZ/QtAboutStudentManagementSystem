#include "SortWidget.h"
#include "studentinfo.h"
#include "ui_sortwidget.h"

SortWidget::SortWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SortWidget)
{
    ui->setupUi(this);
}

SortWidget::~SortWidget()
{
    delete ui;
}

void SortWidget::on_returnButton_clicked(){   //返回按钮点击
    // 清空表格内容
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    emit display(0); // 发送 display 信号,参数为 0(对应主菜单)
}

// 点击"排序"按钮时触发的槽函数
void SortWidget::on_sortButton_clicked(){
    // 打开学生信息文件
    QFile file("student.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);

    // 检查文件是否打开成功
    if(!file.isOpen()){ //文件打开失败,弹出对话框
        QMessageBox::about(NULL, "反馈", "文件打开失败");
        return;
    }
    QTextStream inp(&file);// 创建一个 QTextStream 用于读取文件
    QVector<StudentInfo> allStudentInfo; // 创建一个数据类型为StudentInfo的QVector容器 用于存储所有学生信息
    while(!inp.atEnd()){ //读到文件结尾
        QString name,gender;
        int id, math, english, computer,total;
        inp >> id >> name >> gender >> math >> english >> computer >> total;
        allStudentInfo.push_back(StudentInfo(id, name, gender, math, english, computer, total));
        //调用之前建立的构造函数实例化一个StudentInfo对象并将其加入allStudentInfo
    }
    allStudentInfo.pop_back();//去掉最后的无用数据
    file.close();//关闭文件

     // 对 allStudentInfo 进行排序,按照总分从高到低
    std::sort(allStudentInfo.begin(), allStudentInfo.end(), []( StudentInfo& a, StudentInfo& b) {
        return a.getTotal() > b.getTotal();
    });
    //allStudentInfo.begin() 和 allStudentInfo.end() 分别获取容器的起始和结束迭代器,表示要排序的范围。


    // 设置表格属性
    ui->tableWidget->setShowGrid(true);//显示格子线
    ui->tableWidget->setColumnCount(4);//设置列数
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //禁止编辑
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true); //行头自适应表格

    // 将排序后的学生信息填充到表格中
    for(auto i:allStudentInfo)
    {
        int row=ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row,0,new QTableWidgetItem(QString::number(i.getId())));
        ui->tableWidget->setItem(row,1,new QTableWidgetItem(i.getName()));
        ui->tableWidget->setItem(row,2,new QTableWidgetItem(i.getGender()));
        ui->tableWidget->setItem(row,3, new QTableWidgetItem(QString::number(i.getTotal())));
    }
}
