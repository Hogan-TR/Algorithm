#include <iostream>
#include <iomanip>
using namespace std;
const int MAXSIZE = 1000;
struct SqList
{
    int *elem;
    int length;
};
bool InitList(SqList &L)
{
    L.elem = new int[L.length];
    if (!L.elem)
        return false;
    L.length = 0;
    return true;
}
bool DestroyList(SqList &L)
{
    if (!L.elem)
        return false;
    delete[] L.elem;
    return true;
}
bool ClearList(SqList &L)
{
    if (!L.elem)
        return false;
    for (int i = 0; i < L.length; i++)
        L.elem[i] = NULL;
    L.length = 0;
    return true;
}
bool ListEmpty(SqList &L)
{
    if (!L.elem || L.length != 0)
        return false;
    return true;
}
bool ListLength(SqList &L, int &e)
{
    if (!L.elem)
        return false;
    e = L.length;
    return true;
}
bool GetElem(SqList &L, int i, int &e)
{
    if (i < 1 || i > L.length)
        return false;
    e = L.elem[i - 1];
    return true;
}
bool LocateList(SqList &L, int e, int &index)
{
    for (int i = 0; i < L.length; i++)
    {
        if (L.elem[i] == e)
        {
            index = i + 1;
            return true;
        }
    }
    return false;
}
bool PriorElem(SqList &L, int cur_e, int &pre_e)
{
    int res;
    if (LocateList(L, cur_e, res) && res != 1)
    {
        pre_e = L.elem[res - 1];
        return true;
    }
    return false;
}
bool NextElem(SqList &L, int cur_e, int &next_e)
{
    int res;
    if (LocateList(L, cur_e, res) && res != L.length)
    {
        next_e = L.elem[res - 1];
        return true;
    }
    return false;
}
bool ListInsert(SqList &L, int i, int e)
{
    if (!L.elem || i < 1 || i > L.length + 1)
        return false;
    if (L.length == MAXSIZE)
        return false;
    for (int j = L.length - 1; j >= i - 1; j--)
        L.elem[j + 1] = L.elem[j];
    L.elem[i - 1] = e;
    ++L.length;
    return true;
}
bool ListDelete(SqList &L, int i)
{
    if (!L.elem || i < 1 || i > L.length)
        return false;
    for (int j = i; j < L.length; j++)
        L.elem[j - 1] = L.elem[j];
    --L.length;
    return true;
}
bool TraverseList(SqList &L)
{
    if (!L.elem)
        return false;
    for (int i = 0; i < L.length; i++)
        cout << setw(3) << L.elem[i];
    return true;
}
int main()
{
    SqList L;
    bool res;
    int Gete, Locatee;
    res = InitList(L);
    for (int i = 1; i < 100; i++)
        res = ListInsert(L, i, i);
    res = ListInsert(L, 50, 61);

    res = GetElem(L, 50, Gete);
    res = LocateList(L, 61, Locatee);
    res = ListDelete(L, 28);
    res = TraverseList(L);

    cout << "\nGete = " << Gete << endl;
    cout << "Locatee = " << Locatee << endl;

    res = ClearList(L);
    cout << "L.length = " << L.length << endl;
    return 0;
}