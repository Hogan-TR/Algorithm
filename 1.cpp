/*实战*/
/*法一：先排序，后去重
  法二：先去重，后排序*/
#include <iostream>
#include <cstdio>
#define N 1010
using namespace std;
void tong();
void biu();
int main()
{
    // tong();
    biu();
    return 0;
}
// //桶排序
// void tong()
// {
//     int n, t, sum = 0, a[N];
//     cin >> n;
//     for (int i = 0; i <= N; i++)
//     {
//         a[i] = 0;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &t);
//         a[t] = 1; //优化
//     }
//     cout << sum << endl;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 1; j <= a[i]; j++)
//         {
//             cout << i;
//             cout << " ";
//         }
//     }
// }
void biu()
{
    int n, t, a[110], temp;
    cin >> n;
    t = n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 1; i < n; i++)
        if (a[i] == a[i + 1])
            t--;
    cout << t << endl;
    printf("%d", a[1]);
    for (int i = 2; i <= n; i++)
    {
        if (a[i - 1] != a[i])
            printf(" %d", a[i]);
    }
}