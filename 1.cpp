#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n,k,a;
    scanf("%d%d",&n,&k);
    for( ;k;k--)
    {
        a=n%10;
        if(a==0)
            n/=10;
        if(a!=0)
            n-=1;
    }
    printf("%d\n",n);
    system("pause");
}