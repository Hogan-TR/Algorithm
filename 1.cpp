#include <iostream>
using namespace std;
void pao(int n);
struct student
{
    char name[21];
    int score;
};
struct student a[100], t; //t为临时变量
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        scanf("%s %d", a[i].name, &a[i].score);
    }
    pao(n);
    return 0;
}
void pao(int n)
{
    // n 个数，则跑 n-1 次
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if (a[j].score < a[j + 1].score)
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i].name << endl;
    }
}