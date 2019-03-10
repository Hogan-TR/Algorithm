#include <stdio.h>
struct queue
{
    int data[1000];
    int head;
    int tail;
};
struct stack
{
    int data[1000];
    int top;
};
int main()
{
    //定义 队列，栈
    struct queue qh, qm;
    struct stack s;
    int i, temp;
    //存储是否出现
    int book[10];
    //初始化
    qh.head = 1, qh.tail = 1;
    qm.head = 1, qm.tail = 1;
    s.top = 0;
    for (i = 1; i < 10; i++)
        book[i] = 0;
    //输入->发牌
    for (i = 1; i <= 6; i++)
    {
        scanf("%d", &qh.data[qh.tail]);
        qh.tail++;
    }
    for (i = 1; i <= 6; i++)
    {
        scanf("%d", &qm.data[qm.tail]);
        qm.tail++;
    }
    //模拟过程
    //当队列不为空的时候执行循环
    while (qh.head < qh.tail && qm.head < qm.tail)
    {
        temp = qh.data[qh.head];
        if (book[temp] == 0) //小哼此轮未赢牌
        {
            qh.head++;
            s.top++;
            s.data[s.top] = temp;
            book[temp] = 1; //标记桌面上已有牌面为temp的牌
        }
        else
        {
            //小哼此轮赢牌
            qh.head++;
            qh.data[qh.tail] = temp;
            qh.tail++;
            while (temp != s.data[s.top])
            {
                book[s.data[s.top]] = 0; //取消标记
                qh.data[qh.tail] = s.data[s.top];
                qh.tail++;
                s.top--; //栈中少了一张牌，栈顶减1
            }
        }

        temp = qm.data[qm.head];
        if (book[temp] == 0)
        {
            qm.head++;
            s.top++;
            s.data[s.top] = temp;
            book[temp] = 1;
        }
        else
        {
            qm.head++;
            qm.data[qm.tail] = temp;
            qm.tail++;
            while (temp != s.data[s.top])
            {
                book[s.data[s.top]] = 0;
                qm.data[qm.tail] = s.data[s.top];
                qm.tail++;
                s.top--;
            }
        }
    }
    if (qh.head == qh.tail)
    {
        printf("xiaoming win\nthe cards in his hand:\n");
        for (i = qm.head; i <= qm.tail - 1; i++) //到 -> tail-1 为止
            printf("%d ", qm.data[i]);
        printf("\n");
        if (s.top > 0)
        {
            printf("the cards on the table:\n");
            for (i = 1; i <= s.top; i++)
                printf("%d ", s.data[i]);
        }
        else
            printf("no cards left");
    }
    else
    {
        printf("xiaoheng win\nthe cards in his hand:\n");
        for (i = qh.head; i <= qh.tail - 1; i++)
            printf("%d ", qh.data[i]);
        printf("\n");
        if (s.top > 0)
        {
            printf("the cards on the table:\n");
            for (i = 1; i <= s.top; i++)
                printf("%d ", s.data[i]);
        }
        else
            printf("no cards left");
    }
    return 0;
}