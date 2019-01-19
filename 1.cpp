#include <stdio.h>
#include <stdlib.h>
int fact(int n);
int main(void)
{
    int n;
    printf("请输入你想阶乘的数:\n");
    scanf("%d",&n);
    printf("%d的阶乘为%d\n",n,fact(n));
    system("pause");
}
int fact(int n)
{
    if(n==0) return 1;                  // n 值亦可为 1
    return n*fact(n-1);
}