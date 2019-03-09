/*快速排序*/
#include <iostream>
using namespace std;
void quicksort(int left, int right);
int n, a[600];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    quicksort(1, n);
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
        cout << " ";
    }
    return 0;
}
void quicksort(int left, int right)
{
    int i, j, temp, t;

    //快排用递归的出口
    if (left > right)
        return;

    //temp为基准数
    temp = a[left];
    i = left;
    j = right;

    //整个while将基准数两端数归位
    while (i != j)
    {

        // 顺序很重要，先从右往左找
        while (a[j] >= temp && i < j)
            j--;
        while (a[i] <= temp && i < j)
            i++;

        //交换两个数在数组中的位置
        if (i < j) //当i，j未相遇
        {
            t = a[j];
            a[j] = a[i];
            a[i] = t;
        }
    }

    //将基准数归位
    a[left] = a[i];
    a[i] = temp;

    //递归
    quicksort(left, i - 1);
    quicksort(i + 1, right);
}