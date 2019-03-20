#include <iostream>
using namespace std;
int fun(int x);
int main()
{
    int a, b, c, m, i, sum = 0, t = 0;
    scanf("%d", &m);
    for (a = 0; a <= 1111; a++)
    {
        for (b = 0; b <= 1111; b++)
        {
            c = a + b;
            if (fun(a) + fun(b) + fun(c) == m - 4)
            {
                t++;
                printf("ex%d: %d+%d=%d\n", t, a, b, c);
                sum++;
            }
        }
    }
    printf("Total: %d", sum);
    return 0;
}
int fun(int x)
{
    int num = 0;
    int f[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    while (x / 10 != 0)
    {
        num += f[x % 10];
        x /= 10;
    }
    num += f[x];
    return num;
}