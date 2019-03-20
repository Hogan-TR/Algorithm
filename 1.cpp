#include <iostream>
using namespace std;
int main()
{
    int data[101], right[101];
    int i, n, t, len;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> data[i];
    len = n;
    //初始化数组right
    for (i = 1; i <= n; i++)
    {
        if (i != n)
            right[i] = i + 1;
        else
            right[i] = 0;
    }
    //直接在数组data的末尾增加一个数
    len++;
    cin >> data[len];
    t = 1;
    while (t != 0)
    {
        if (data[right[t]] > data[len])
        {
            right[len] = right[t];
            right[t] = len;
            break; //插入完成跳出循环
        }
        t = right[t];
    }
    //输出
    t = 1;
    while (t != 0)
    {
        printf("%d ", data[t]);
        t = right[t];
    }
    return 0;
}