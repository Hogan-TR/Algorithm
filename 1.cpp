#include <iostream>
#define N 2000
using namespace std;
int main()
{
    int n, t, a[N];
    cin >> n;
    //全部数组元素初始化为0
    for (int i = 1; i <= N - 1; i++)
    {
        a[i] = 0;
    }
    //输入
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        a[t]++;
    }
    //输出
    //---注意：i < N 且输入比较的最大数要小于N
    for (int i = 1; i < N; i++)
        for (int j = 1; j <= a[i]; j++)
            printf("%d ", i);
    return 0;
}