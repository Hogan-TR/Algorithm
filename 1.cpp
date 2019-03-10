#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[101], s[101]; // a->输入存储数组  s->前半储存数组
    int len, mid;
    gets(a);
    len = strlen(a);
    mid = len / 2 - 1;             //中点 要 -1
    int top = 0;                   //初始化 top=0
    for (int i = 0; i <= mid; i++) //恰好到 mid 止
        s[++top] = a[i];           //++top
    if (len % 2 == 0)              //奇偶数情况区分
        mid += 1;
    else
        mid += 2;
    //开始匹配
    for (int i = mid; i < len; i++)
    {
        if (a[i] != s[top])
            break;
        top--;
    }
    //如果top的值为0，则说明栈内所有的字符都被一一匹配了
    if (top == 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}