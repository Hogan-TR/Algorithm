#include <iostream>
using namespace std;
void pao(int a[], int n);
int main()
{
    int n, a[n];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    pao(a, n);
    return 0;
}
void pao(int a[], int n)
{
    int temp;
    // n 个数，则跑 n-1 次
    for (int i = 1; i <= n - 1; i++)
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
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }    
}