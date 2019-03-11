#include <iostream>
#include <cstdlib>
using namespace std;
void point_1();
void point_2();
int main()
{
    point_1();
    cout << "" << endl;
    point_2();
    cout << "" << endl;
    return 0;
}
void point_1()
{
    int a = 61;
    int *p;
    p = &a;
    printf("%d", *p); //*号->间接运算符，作用->取得p所指向的内存中的值
}
void point_2()
{
    int *p;
    //malloc函数的返回类型是 void * 类型 ->未确定类型的指针
    //void * 类型可以强制转换为任何其他类型的指针
    p = (int *)malloc(sizeof(int));
    *p = 61;
    printf("%d", *p);
}