#include<iostream>
#include<string>
using namespace std;
// 函数默认参数
//如果函数的某个参数有默认值，那么在调用该函数时可以省略该参数，编译器会使用默认值来代替。
// 注意：默认参数只能从右向左依次设置，不能从左向右设置。
// void display(int a, int b = 10, int c = 20) {
//     cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
// }
//如果函数声明有默认参数，那么在函数定义中就不能再给该参数设置默认值，否则会报错。
// int func1(int a = 10,int b = 20);//函数声明
// int main()
// {
//     int func1(int a = 20, int b =10)//错误
//     cout<<func1 ()<<endl;
// }

//函数占位参数
// void func2(int)//int占位
// {
//     cout<<"this is func"<<endl;

// }
// int main(){
//     func2(10);//输入一个整型调用函数
// }

//函数重载
//作用
//1.同一作用域下2.函数名相同3.函数参数类型或个数或顺序不同
// void func(double a,int b){
//     cout<<"func a"<<endl;
// }
// void func(int a,double b ){
//     cout<<"func b"<<endl;
// }
// int main()
// {
//   func(10,3.14);//调用第二个函数
//   func(3.14,10);// 调用第一个函数
// }

//类和对象
//封装、继承、多态
//万物为对象，有同性质的对象为类
// class student{
// public:
// int age;
// string name;
// };
// int main(){
//     student a;
//     a.name="Tom";
//     a.age=18;
//     cout<<"学生姓名为："<<a.name<<"\t"<<"学生年龄为："<<a.age<<endl;
// }

//对象的初始化和清理
//构造函数和析构函数
// class person{
// public:
//     person(){
//         cout<<"person调用"<<endl;
//     }//构造函数
// //无返回值，无void，可以重载，自动调用    
//     ~ person(){
//         cout<<"person02"<<endl;
//     }//析构函数
// //不可有参数，不可重载，无返回值，无void,前加~
// };
// void test01()
// {
//     person p;
// }
// int main(){
//     test01();
// }
//分类
//class person
// {
//     public:
//     person()//默认函数
//     {
//       cout<<"默认构造"<<endl;   
//     }
//     person(int a)
//     {
//       cout<<"有参构造"<<endl;
//     }
//     person(const person &p){
//       cout<<"拷贝构造"<<endl;  
//     }
// }

//默认情况下，编译器会给类添加以上3个函数

//调用
//void test01(){
//person p1;//默认调用
//person p2(10);//有参调用
//person p3(p2);//拷贝调用
//}

//访问权限
//public公共权限，类内类外都可访问
//protected保护权限，类外不可
//private私有权限，类外不可

//steuct默认公共权限
//class默认私有权限

//getage//让年龄可读
//setidol//让偶像只写

//深拷贝
//自己构造拷贝函数，解决浅拷贝的重复释放问题
// class person{
// public: 
//     int m_age;
//     int *m_height;
// person (int age , int height)
// {
//     m_age = age;
//     m_height = new int(height);
//     cout<<"有参构造函数调用"<<endl;
// };
// person (const person &p)
// {
//     cout<<"拷贝调用"<<endl;
//     m_age = p.m_age;
//     m_height =new int(*p.m_height);
// };
// ~person()
// {
// if (m_height!=NULL)
// {
//     delete m_height;
//     m_height=NULL;
// }
// cout<<"析构函数调用"<<endl;
// };
// };
// int main()
// {
//     person p(18,160);
//     person p1(p);
// } 

//初始化列表
class person
{
public:
//传统初始化
// person(int a,int b,int c)
// {
//     m_a=a;
//     m_b=b;
//     m_c=c;
// }

//初始化列表初始化属性
person(int a,int b,int c):m_a(a),m_b(b),m_c(c)
{

}
int m_a;
int m_b;
int m_c;
};
void test01()
{
    //person p(10,20,30);
    person p(30,20,10);
    cout<<"m_a="<<p.m_a<<endl;
    cout<<"m_b="<<p.m_b<<endl;
    cout<<"m_c="<<p.m_c<<endl;
}
int main(){
    test01();
}
