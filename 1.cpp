#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,k,i;
    int a[500000];
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1);
    if(k==0)
    {
        if(a[1]<=1) 
        printf("-1\n");
        else
        printf("1\n");
    }
    else
    {
        if(a[k]!=a[k+1])
            printf("%d\n",a[k]);
        else
            printf("-1\n");
    }
    return 0;
}