#include <iostream>
using namespace std;
//#include <ctime>
int main() 
{
//三目运算符
//语法：条件表达式 ? 值1 : 值2
//当条件表达式为真时，返回值1，否则返回值2
// int a = 10;
// int b = 20;
// int max = (a > b) ? a : b;
// cout << "最大值为：" << max << endl;
// }


// //swich语句//不能表示区间，只能是整型或字符型
// int score=0;
// cin >> score;
// cout << "你的分数为" << score << endl;
// switch(score)
// {
//     case 10:
//         cout << "满分" << endl;
//         break;
//     case 9:
//         cout << "优秀" << endl;
//         break;
//     case 8:
//         cout << "良好" << endl;
//         break;
//     case 7:
//         cout << "中等" << endl;
//         break;
//     case 6:
//         cout << "及格" << endl;
//         break;
//     default:
//         cout << "不及格" << endl;
// }
  
//while循环语句 
// int i=1;//break跳出
// while(true)
// {
//     cout << i << endl;
//     i++;

//     if(i>10)
//     {
//         break;
//     }
// }

// int i=1;//直接加条件
// while(i<=10)
// {
//     cout << i << endl;
//     i++;
// }

//需要#include<ctime>头文件
// srand((unsigned int)time(NULL));//设置随机数种子
// int num=rand()%100+1;//生成1~100的随机数
// cout<<"请猜一个1~100的整数"<<endl;
// int guess;
// while(true)
// {
//     cin>>guess;
//     if(guess>num)
//     {
//         cout<<"猜大了"<<endl;
//     }
//     else if(guess<num)
//     {
//         cout<<"猜小了"<<endl;
//     }
//     else
//     {
//         cout<<"恭喜你猜对了"<<endl;
//         break;
//     }
// }
 
//do...while循环语句
//先执行一次循环体，再判断条件是否成立，若成立则继续执行循环体，若不成立则退出循环


//水仙花数
//三位数满足  个位^3 + 十位^3 + 百位^3 = 原数
// int num=100;
// int a,b,c;
// do
// {a=num/100;//百位
// b=num/10%10;//十位
// c=num%10;//个位
// if(a*a*a+b*b*b+c*c*c==num)
// {
//     cout<<num<<"是水仙花数"<<endl;
// }
// num++;
// }while(num<=999);


//for循环语句
// for(int i=1;i<=10;i++)   
// {
//     cout<<i<<endl;
// }

// for(int i=1;i<=100;i++)
// {
//  if(i%7==0||i%10==7||i/10==7)
//  {
//      cout<<"敲桌子"<<endl;
//  }
//  else {
//      cout<<i<<endl;}
// }
//乘法口诀表
// for(int i=1;i<10;i++)
// {   for(int j=1;j<=i;j++)
//        { cout<<j<<"*"<<i<<"="<<i*j<<"\t";
//          }
//     cout<<endl; 
// }


//continue语句
// for(int i=1;i<=100;i++)
// {
//     if(i%2==0)
//     {
//         continue;//跳过偶数
//     }
//     cout<<i<<endl;
// }


//数组
//数组中数据类型相同
//arr []读取数组信息，从零开始
// int arr[5]={1,2,3,4,5};
// for(int i=0;i<5;i++)
// {
//     cout<<arr[i]<<endl;
//}
//cout<<sizeof(arr)/sizeof(arr[0])<<endl;//计算数组长度


// int arr[5]={1,2,300,500,600};
// int max=0;
// for(int i=0;i<5;i++)
// {
//     if(arr[i]>max)
//     {
//         max=arr[i];
//     }
// }
// cout<<"最大值为：" << max << endl;

}