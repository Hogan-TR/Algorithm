/*实战---续*/
/*法一：先排序，后去重
  法二：先去重，后排序*/
#include <iostream>
#include <cstdio>
#define N 1010
using namespace std;
int n, a[N];
void quick(int left, int right);
int main()
{
    cin >> n;
    int t = n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    quick(1, n);
    for (int i = 1; i <= n; i++)
        if (a[i] == a[i + 1])
            t--;
    cout << t << endl;
    printf("%d", a[1]);
    for (int i = 2; i <= n; i++)
    {
        if (a[i - 1] != a[i])
            printf(" %d", a[i]);
    }
    return 0;
}
void quick(int left, int right)
{
    int temp = a[left], t;
    int i = left;
    int j = right;
    if (i > j)
        return;
    while (i != j)
    {
        while (a[j] >= temp && i < j) //注意：是 <= !!!!!!
            j--;
        while (a[i] <= temp && i < j)
            i++;

        if (i < j)
        {
            t = a[j];
            a[j] = a[i];
            a[i] = t;
        }
    }

    a[left] = a[i];
    a[i] = temp;

    quick(left, i - 1);
    quick(i + 1, right);
}