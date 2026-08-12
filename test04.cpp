#include <iostream>
using namespace std;

  void swap(int *p1, int *p2)
    {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
  void bubbleSort(int arr[], int len)
  {
      for (int i = 0; i < len - 1; i++)
      {
          for (int j = 0; j < len - 1 - i; j++)
          {
              if (*(arr + j) > *(arr + j + 1))
              {
                  swap(arr + j, arr + j + 1);
              }
          }
      }
  }
int main()
{
//指针
//定义指针
    //int a = 10;
    //int *p = &a; //定义指针
    //cout << "a的值为: " << a << endl;
    //cout << "a的地址为: " << &a << endl;
    //cout << "指针p的值为: " << p << endl;
    //cout << "指针p指向的值为: " << *p << endl;

// 通过解引用找到或修改指针指向的内存
//*p
    //*p = 20; //修改指针指向的值
    //cout << "修改后a的值为: " << a << endl;
//空指针
    //int *p1 = NULL; //定义空指针,空指针无法被访问
//野指针
    //int *p2=(int*)0x1100; //定义野指针,野指针无法被访问
//const 修饰指针
    //const int *p3 = &a; //指针指向的值不能被修改，指针的指向可以修改
    // *p3 = 30; //错误，不能修改指针指向的值
    //*p3=&b; //正确，指针的指向可以修改
//指针常量//const 修饰指针常量
//指针的值能被修改，指针的指向不能被修改
//指针常量的值不能被修改，指针常量的指向也不能被修改
    //int*const p4 = &a; 
    //*p4 = 40; //正确，指针的值能被修改
    //p4 = &b; //错误，指针的指向不能被修改
    //const int*const p5 = &a; // 错误，指针常量的值不能被修改，指针常量的指向也不能被修改

    // int arr[5] = {1, 2, 3, 4, 5};
    // int *p = arr; //指针指向数组首元素
    // *p++; //指针指向下一个元素
    // cout << "指针p指向的值为: " << *p << endl;
    // int *p1 = arr + 2; //指针指向数组第三个元素
    // cout << "指针p1指向的值为: " << *p1 << endl;
    // int *p2=arr;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *p2 << endl;
    //     *p2++; 
    // }    

    //地址传递
    //函数在上面
  
    // int a = 10;
    // int b = 20;
    // swap(&a, &b);
    // cout << "a的值为: " << a << endl;
    // cout << "b的值为: " << b << endl;

   



    return 0;
}