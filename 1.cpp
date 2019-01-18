#include <stdio.h>
#include <stdlib.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
int L, n;
int x[1000000];
int main(void)
{
    int m;
    int minT=0,maxT=0;
    scanf("%d\n%d", &L, &n);
    for (m = 0; m < n; m++)
    {
        scanf("%d", &x[m]);
    }
    for (m = 0; m < n; m++)
    {
        minT = max(minT, min(x[m], L - x[m]));
    }
    for (m = 0; m < n; m++)
    {
        maxT = max(maxT, max(x[m], L - x[m]));
    }
    printf("minT=%d,maxT=%d", minT, maxT);
    system("pause");
}