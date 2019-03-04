#include <stdio.h>
#define N 5
int fu1(int a[]);//尾巴减小(向前缩)
int fu2(int a[]);//头部减小(向后缩)
int output(int a[]);
int main()
{
    int i, a[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    fu1(a);
    putchar('\n');
    fu2(a);
    return 0;
}
int fu1(int a[]) 
{
    int i, j, maxindex, temp;   //maxindex为最大值位置标签
    for (i = 0; i < N - 1; i++) //执行找出最大值的次数
    {
        maxindex = 0; //首先初始为第一个(有点东西),不能忘
        for (j = 1; j < N - i; j++)
            if (a[maxindex] > a[j]) //如果改为'<'，即求最小值
                maxindex = j;
        temp = a[maxindex]; //交换，将最大值放最后面(相对最后)
        a[maxindex] = a[N - 1 - i];
        a[N - 1 - i] = temp;
    }
    output(a);
}
int fu2(int a[])
{
    int i, j, minindex, temp;
    for (i = 0; i < N - 1; i++)
    {
        minindex = i;
        for (j = i; j < N; j++)
            if (a[minindex] > a[j])
                minindex = j;
        temp = a[minindex];
        a[minindex] = a[i];
        a[i] = temp;
    }
    output(a);
}
int output(int a[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
}