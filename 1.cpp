// #include <iostream>
// int main()
// {
//     int a[101] = {0, 6, 3, 1, 7, 5, 8, 9, 2, 4};
//     int head = 1, tail = 10;
//     while (head < tail)
//     {
//         printf("%d", a[head]);
//         head++;
//         a[tail] = a[head];
//         tail++;
//         head++;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
//放 int main 函数外
struct queue
{
    int data[101];
    int head; //队首
    int tail; //队尾
};
int main()
{
    struct queue am; //定义
    am.head = 1;     //初始化
    am.tail = 1;
    for (int i = 1; i <= 9; i++)
    {
        scanf("%d", &am.data[am.tail]);
        am.tail++;
    }
    while (am.head < am.tail) //当队列不为空的时候执行循环
    {
        //打印队首并将队首出队
        cout << am.data[am.head];
        am.head++;
        //先将新队首的数添加到队尾
        am.data[am.tail] = am.data[am.head];
        am.tail++;
        //再将队首出队
        am.head++;
    }
    return 0;
}

/*队列*/