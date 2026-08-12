#include <iostream>
#include "test.h"
using namespace std;
int main()
{
//冒泡排序
// int arr[5]={5,3,4,1,2};
// int n=arr[0];
// for (int i=0;i<5;i++)
// {
//     for(int j=0;j<5-i-1;j++)
//     {
//         if(arr[j]>arr[j+1])
//         {
//             n=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=n;
//         }
//     }
// }
// for(int i=0;i<5;i++)
// {
//     cout<<arr[i]<<endl;
// }


//二维数组
//表示方式一：
//[行][列]={{num1,num2}{num3,num4}}
//数据 int arr[0][0] 表示第一行第一列
//表示方式二：******
// int arr1[2][3]=
// {
//   {1,2,3},
//   {4,5,6}
// };
// cout << arr1[0][0]<<endl;
//表示方式三：
// int arr2[2][3]={1,2,3,4,5,6};
//表示方式四：
// int arr3[][3]={1,2,3,4,5,6};
// for(int i=0;i<2;i++)
// {
//     for(int j=0;j<3;j++)
//     {
//         cout<<arr3[i][j]<<endl;
//     }
//     cout<<endl;
// }


//统计数据
//int arr4[2][3]=
//{
//    {1,2,3},
//    {4,5,6}
//};
//for(int i=0;i<2;i++)
//{
// int sum=0;
// for(int j=0;j<3;j++)
// {
//sum+=scores[i][j];
// }


//函数
//语法：
//返回值类型 函数名(参数类型 参数名)
//{
//函数体语句
//return 返回值;
//}
//例子：
// int add(int a,int b)
// {
//int sum=a+b;
// return sum;
//}

//调用函数
// int result=add(1,2);
// cout<<result<<endl;

//值传递
//如果函数不需要返回值，可以写void
// void swap(int a,int b)
// {
// cout<<"交换前："<<a<<","<<b<<endl;
// int temp=a;
// a=b;
// b=temp;
// cout<<"交换后："<<a<<","<<b<<endl;
// }
// int main()
// {
// int a=1;
// int b=2;
// swap(a,b);
// }//a,b的值不会发生改变，因为swap函数中只是交换了a和b的值，而没有改变main函数中a和b的值。


//函数的常见样式
//1.无参无返回值
// void print()
// {
//     cout << "Hello, World!" << endl;
// }
//2.有参无返回值
// void printMessage(string message)
// {
//     cout << message << endl;
// }
//3.无参有返回值
// int getRandomNumber()
// {
//     return rand() % 100;
// }
//4.有参有返回值
// int add(int a, int b)
// {
//     return a + b;
// }

//函数的声明
//int max(int a,int b);// 先声明
//int main()
//{
//    int a=1;
//    int b=2;
//    cout<<max(a,b)<<endl;
//}
//int max(int a,int b)//后定义
//{
//    return a>b?a:b;




}