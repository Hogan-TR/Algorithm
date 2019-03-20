#include <iostream>
using namespace std;
void dfs(int step);
int a[10], book[10], n, times = 0;
//C语言的全局变量，未赋值前默认为0
int main()
{
    scanf("%d", &n);
    dfs(1);
    return 0;
}
void dfs(int step)
{
    int i, t = 0;
    //到 n+1 盒子面前
    if (step == n + 1 && a[1] * 100 + a[2] * 10 + a[3] + a[4] * 100 + a[5] * 10 + a[6] == a[7] * 100 + a[8] * 10 + a[9])
    {
        times++;
        printf("Ex-%d: %d%d%d + %d%d%d = %d%d%d\n", times, a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
        //返回之前的一步 ->最近一次调用dfs函数的地方
        return;
    }
    //按照1、2、3...n的顺序尝试
    for (i = 1; i <= n; i++)
    {
        //判断扑克牌i是否还在手中
        if (book[i] == 0)
        {
            a[step] = i;
            book[i] = 1;
            //到下一个盒子面前
            dfs(step + 1);
            //将刚才尝试的扑克牌收回，才能进行下一次尝试
            book[i] = 0;
        }
    }
    return;
}