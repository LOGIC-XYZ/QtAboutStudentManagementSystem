#ifndef STUDENTINFO_H
#define STUDENTINFO_H

// 包含 QString 头文件,用于处理字符串
#include <QString>

class StudentInfo
{
private:
    QString name,gender;
    int  math, english, computer,id,total;
public:
    StudentInfo();// 默认构造函数

    // 带参数的构造函数,用于初始化学生信息
    StudentInfo(int tid, QString tname,QString tgender, int tmath, int tenglish, int tcomputer,int ttotal){
        id = tid;
        name = tname;
        gender = tgender;
        math = tmath;
        english = tenglish;
        computer = tcomputer;
        total = ttotal;
    }
    //用于获取学生信息
    int getId(){
        return id;
    }
    QString getName(){
        return name;
    }
    QString getGender(){
        return gender;
    }
    int getMath(){
        return math;
    }
    int getEnglish(){
        return english;
    }
    int getComputer(){
        return computer;
    }
    int getTotal() {
        return getMath() + getEnglish() + getComputer();
    }
    //用于设置学生信息
    void setId(int tid){
        id = tid;
    }
    void setName(QString tname){
        name = tname;
    }
    void setGender(QString tgender){
        gender = tgender;
    }
    void setMath(int tmath){
        math = tmath;
    }
    void setEnglish(int tenglish){
        english = tenglish;
    }
    void setcomputer(int tcomputer){
        computer = tcomputer;
    }
};


#endif // STUDENTINFO_H
