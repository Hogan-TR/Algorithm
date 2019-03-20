#include <iostream>
#include <cstdlib>
using namespace std;
//这里创建一个结构体用来表示链表的结点类型
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *p, *q, *t;
    int i, n, a;
    cin >> n;
    head = NULL; //头指针初始为空
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        //动态申请一个空间，并用临时指针p指向此节点
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a;
        //将当前节点的后继指针指向空 -> 当前节点的下一个节点为空
        p->next = NULL;
        if (head == NULL)
            head = p;
        else
            //若不是第一个创建的节点，则将上一个节点的后继指针指向当前节点
            q->next = p;
        q = p;
    }

    cin >> a; //读入待插入的数
    t = head;
    while (t != NULL) //当没有到达链表尾部时循环
    {
        if (t->next->data > a)
        {
            p = (struct node *)malloc(sizeof(struct node));
            p->data = a;
            p->next = t->next;
            t->next = p;
            break; //插入完毕，推出循环
        }
        t = t->next; //继续下一个节点
    }
    t = head;
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
    return 0;
}