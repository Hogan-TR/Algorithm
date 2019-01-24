#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
    int n,i,min;
    int a[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    if(a[n-2]-a[0]>=a[n-1]-a[1])
    min=a[n-1]-a[1];
    else
    min=a[n-2]-a[0];
    printf("%d\n",min);
    system("pause");
}