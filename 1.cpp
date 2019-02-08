#include <stdio.h>
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
}