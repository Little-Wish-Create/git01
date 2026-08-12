# git01
//c++变量与常量
#include<iostream>
using namespace std;//将来最好用std::       ::std;
int main()
{
    // int a = 10;//int为定义变量
    // float b = 3.14f;//f表示该数据为float类型
    // double c = 1.2345;
    // float w = a+b;//若用int则会省略小数
    // char d = 'f';//字符需要单引号括起
    // bool e = 0;//0为假
    // cout <<a<<"\t"<<b<<"\t"<<c<<endl;//t相当于缩进
    // cout <<w<<endl;
    
    
    // const int a=10;//常量赋值
    // const float pi=3.1415926;
    

    // int a;
    // int b;
    // cin >>a>>b;//从键盘中输入两个整数赋值给a,b。注意用大括号
    // cout <<a<<"\t"<<b<<endl;    

  
    //标识符命名
    //标识符命名规则：1.只能由字母、数字、下划线组成，且不能以数字开头
    //              2.不能是关键字
    //              3.区分大小写
    //              4.不能包含空格
    //              5.起名时最好有意义，便于理解
    

    //sizeof()函数
    // //sizeof()函数用于计算数据类型或变量所占的字节数
    // cout << sizeof(int) << endl;
    // cout << sizeof(float) << endl;
    // cout << sizeof(double) << endl;
    // cout << sizeof(char) << endl;
    // cout << sizeof(bool) << endl;
    // short a=10;
    // cout << sizeof(a) << endl;


    //浮点型精度
    //单精度float类型占4个字节，精度为6~7位有效数字
    //双精度double类型占8个字节，精度为15~16位有效数字

    //科学计数法
    // float a=1.23e2f;//1.23*10^2


    //字符型
    //需要用单引号括起，且只能存储一个字符
    // char ch='b';
    // cout << ch << endl;
    // //字符型常见错误
    // char ch='ab';//错误：字符型只能存储一个字符 
    //字符型变量对应的ASCII码值
    // cout << (int)ch << endl;//强制类型转换为int类型


    //转义字符
    // \n 换行
    // \t 水平制表 加上前者总共占8个空格
    // \r 回车
    // \\ 反斜杠
    // \' 单引号
    // \" 双引号 
    // cout << "hello\nworld" << endl;
    // cout << "hello\tworld" << endl;
    // cout << "\'hello world\'"<<endl;


    //字符串型
    //需要用双引号括起，可以存储多个字符
    //C语言
    // string str="hello world";
    //char str[]="hello world";需要用中括号括起，且需要指定数组大小
    // cout << str << endl; 
    //C++
    //头文件#include<string>
    //string str="hello world";
    //cout << "hello world" << endl;

    //bool类型
    //bool类型只有两个取值：true和false
    

    //数据输入
    // int a, b;
    // cout << "请输入a,b的值 " <<"\t"<< " 和 "<<endl;
    // cin >> a >> b;
    // cout<< a  <<"\t"<< b << endl;
    
    
    //算术运算符（特殊）
    //%取余数
    //++前置递增++a//让a的值加1，先执行加1操作，再使用a的值
    //++后置递增a++//让a的值加1，先使用a的值，再执行加1操作
    //--前置递减--a//让a的值减1，先执行减1操作，再使用a的值
    //--后置递减a--//让a的值减1，先使用a的值，再执行减1操作
    

    //赋值运算符
    //=  +=  -=  *=  /=  %=
    // int a=10; 
    // a+=5;
    // cout  << "a=" << a << endl;
    

    //逻辑运算符
    // &&  与  a&&b//当a和b都为真时，结果为真，否则为假 
    // ||  或  a||b//当a和b中至少有一个为真时，结果为真，否则为假
    // !   非  !a//当a为真时，结果为假；当a为假时，结果为真
    
    //if语句
    // int a;
    // cout << "请输入你的分数" << endl;
    // cin >> a;
    // cout << "你的分数为" << a << endl;
    // if(a>=500)
    // {
    //     cout << "恭喜你考上一本大学" << endl;
    // }
    // else if(a>=400)
    // {
    //     cout << "考上二本大学" << endl;
    // }
    // else
    // {
    //     cout << "很抱歉，你没有考上理想的大学" << endl;
    // }


    // int a;
    // int b;
    // int c;
    // cout << "请输入三个整数" << endl;
    // cin >> a >> b >> c;
    // if a>b && a>c//或者法
    // {
    //     cout << "最大值为" << a << endl;
    // }
    // else if b>a && b>c
    // {
    //     cout << "最大值为" << b << endl;
    // }
    // else
    // {
    //     cout << "最大值为" << c << endl;
    // }
    
    // if (a>b)//嵌套法
    //     {    cout << "a重" << a << endl;
              
    //     if(a>c)
    //     {    cout << "a最重" << a << endl;
    //     }
    //     else {cout << "c最重" << c << endl;
    //     }  
    // }  //注意看颜色，不要使if的括号提前结束
    // else 
    // {    cout << "b重" << b << endl;
       
    //     if(b>c)
    //     {    cout << "b最重" << b << endl;
    //     }
    //     else {cout << "c最重" << c << endl;
    //     }
    // }

}    
