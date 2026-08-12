//结构体
//创建用户自己的数据类型
#include <iostream>
#include <string>
using namespace std;
struct Student
{
string name;
int age;
string sex;
};
struct Teacher
{
    string name;
    int age;
    string sex;
    Student stu;//嵌套结构体
};
void printStudent(Student stu)
{
    cout << "姓名: " << stu.name << endl;
    cout << "年龄: " << stu.age << endl;
    cout << "性别: " << stu.sex << endl;
}
// int main()
// {
//     Student stu1;
//     stu1.name = "张三";
//     stu1.age = 18;
//     stu1.sex = '男';
//     cout << "姓名: " << stu1.name << endl;
//     cout << "年龄: " << stu1.age << endl;
//     cout << "性别: " << stu1.sex << endl;
//     return 0;
// }

//结构体数组
 int main()
 {
// Student stu[3] = {{"张三", 18, "男"}, {"李四", 19, "女"}, {"王五", 20, "男"}};
// stu[0].name = "赵六";// 修改信息
// for (int i = 0; i < 3; i++)
// {
//     cout << "姓名: " << stu[i].name << endl;
//     cout << "年龄: " << stu[i].age << endl;
//     cout << "性别: " << stu[i].sex << endl;
// }


//结构体指针
// Student s = {"张三", 18, "男"};
// Student *p = &s;
//  p->name = "李四";// 箭头访问结构体并修改信息
//  p->age = 19;
//  cout << "姓名: " << p->name << endl;
//  cout << "年龄: " << p->age << endl;
//  cout << "性别: " << p->sex << endl;

//结构体嵌套
// Teacher t = {"王老师", 30, "男", {"张三", 18, "男"}};
// cout << "姓名: " << t.name << endl;
// cout << "年龄: " << t.age << endl;
// cout << "性别: " << t.sex << endl;
// cout << "学生姓名: " << t.stu.name << endl;
// cout << "学生年龄: " << t.stu.age << endl;
// cout << "学生性别: " << t.stu.sex << endl;

//结构体做函数参数
// Student stu1 = {"张三", 18, "男"};
// printStudent(stu1);

//结构体const修饰
const Student stu1 = {"张三", 18, "男"};
// stu1.name = "李四";// 错误，const修饰的结构体不能修改成员变量    









}  