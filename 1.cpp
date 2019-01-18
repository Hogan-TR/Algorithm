/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n,sh,a,b,c,d,re;
    scanf("%d",&n);
    for( ;n;n--)
    {
        scanf("%d",&sh);
        a=sh%10;
        b=(a*a)%10;
        c=(b*a)%10;
        d=(c*a)%10;
        re=sh%4;
        switch(re)
        {
            case 0: printf("%d\n",d); break;
            case 1: printf("%d\n",a); break;
            case 2: printf("%d\n",b); break;
            case 3: printf("%d\n",c); break;
        }
    }
    system("pause");
}*/

/*#include <stdio.h>
int main()
{
    long long a;
    scanf("%lld",&a);
    switch(a%4)
    {
        case 0: case 3: {printf("0"); break;}
        case 1: case 2: {printf("1"); break;}
    }
    return 0;
}*/

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int a,c=0;
//     scanf("%d",&a);
//     int b[100000];

//     while(a)
//     {
//         b[c]=a%10;
//         a/=10;
//         c++;
//     }
//     printf("%d",b[2]);
//     system("pause");
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     char ch[9][9] = {};
//     int num[9][9] = {};
//     int i, n;
//     for (i = 0; i < 9; i++)
//     {
//         for (n = 0; n < 9; n++)
//         {
//             scanf("%c", &ch[i][n]);
//             getchar();
//             if (ch[i][n] != '?')
//                 num[i][n] = ch[i][n] - '0';
//         }
//     }

//     system("pause");
// }

#include <Stdio.h>
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