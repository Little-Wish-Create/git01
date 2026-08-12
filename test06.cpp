#include <iostream>
using namespace std;
void swap(int &x, int &y) //值传递
{
    int temp = x;
    x = y;
    y = temp;

}
void swap1(int *x, int *y) //指针做函数参数
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void swap2(int &x, int &y) //引用传递
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
//     int *p = new int(10); //在堆区开辟一个整型空间，并初始化为10
//     //第一个int是强制转化为整型指针，第二个int是初始化的值
//     cout << *p << endl;   //输出堆区数据
//     delete p;            //释放堆区空间
//     p = nullptr;         //将指针置为空，避免悬空指针
//     // return 0;

// //堆区开辟数组
//     int *arr = new int[5]; //在堆区开辟一个包含5个整型元素的数组
//     for (int i = 0; i < 5; i++)
//     {
//         arr[i] = i + 1; //初始化数组元素
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " "; //输出数组元素
//     }
//     cout << endl;
//     delete[] arr; //释放堆区数组空间
//     arr = nullptr; //将指针置为空，避免悬空指针
//     return 0;


//引用 
//给变量起别名
//语法
// int a = 10;
// int &b = a; //b是a的引用，b是a的别名   
// b = 20; //通过b修改a的值
// cout << a << endl; //输出a的值，结果为20
//注意事项
//引用必须初始化，不能为null
//引用一旦初始化后，就不能再指向其他变量
//引用做函数参数
//引用做函数参数可以避免值传递的开销，同时可以修改实参的值
//引用可以优化指针
// int a = 10;
// int b = 20;
// swap2(a, b); //调用swap函数，交换a和b的值
// cout << "a = " << a << ", b = " << b << endl;

//引用做函数返回值
//1.返回局部变量的引用是错误的，因为局部变量在函数结束后会被销毁，返回其引用会导致悬空引用
//2.函数的调用可以作为左值使用，前提是函数返回的是引用类型
// int&test()
// {
//     static int a = 10; //静态变量在函数结束后不会被销毁
//     return a;          //返回静态变量的引用
// }


//常量引用
//常量引用是引用的一种，它不能修改所引用的变量的值
//语法
// const int &b = a; //b是a的常量引用
// b = 20; //错误，不能通过常量引用修改变量的值


}

