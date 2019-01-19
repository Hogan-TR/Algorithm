#include <stdio.h>
#include <stdlib.h>
int fact(int n);
int fib(int n);
int memo[1000000];
int main(void)
{
    int n;
    printf("请输入一个数:\n");
    scanf("%d",&n);
    printf("%d的阶乘为%d\n",n,fact(n));
    printf("%d的斐波那契数为%d\n",n,fib(n));
    system("pause");
}
int fact(int n)
{
    if(n==0) return 1;                  // n 值亦可为 1
    return n*fact(n-1);
} 
int fib(int n)
{
    if(n<=1) return n;
    if(memo[n]!=0) return memo[n];
    return memo[n]=fib(n-1)+fib(n-2);
}    