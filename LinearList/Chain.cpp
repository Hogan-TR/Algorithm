#include <iostream>
using namespace std;
typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode, *LinkList;
// LNode == struct LNode
// LinkList == struct LNode*
bool InitList(LinkList &L)
{
    L = new LNode;
    if (!L)
        return false;
    L->next = NULL;
    return true;
}
bool GetElem(LinkList &L, int i, int &e)
{
    LNode *p = L->next;
    int j = 1;
    while (p && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if (!p || j > i)
        return false;
    e = p->data;
    return true;
}
bool LocateElem(LinkList &L, int e, LinkList &i)
{
    LNode *p = L->next;
    while (p && p->data != e)
    {
        p = p->next;
    }
    i = p;
    return true;
}
bool ListInsert(LinkList &L, int i, int e)
{
    LNode *p = L, *q;
    int j = 0;
    while (p && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if (!p || j > i)
        return false;
    q = new LNode;
    q->data = e;
    q->next = p->next;
    p->next = q;
    return true;
}
bool ListDelete(LinkList &L, int i)
{
    LNode *p = L, *q;
    int j = 0;
    while (p->next && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if (!p->next || j > i - 1)
        return false;
    q = p->next;
    p->next = q->next;
    delete q;
    return true;
}
int main()
{
    return 0;
}