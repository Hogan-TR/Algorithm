#include <stdio.h>
#include <stdlib.h>
int min(int a,int b);
int main(void)
{
    const int v[6]={1,5,10,50,100,500};
    int c[6];
    int i,A,ans=0,t;
    for(i=0;i<6;i++){
        scanf("%d",&c[i]);
    }
    scanf("%d",&A);
    for(i=5;i>=0;i--)                  //i为硬币种类
    { 
        t=min(A/v[i],c[i]);            //使用硬币i数量 (t不能超过硬币i总量)
        A-=t*v[i];
        ans+=t;
    }
    printf("%d\n",ans);
    system("pause");
}
int min(int a,int b)
{
    if(a<b)
    return a;
    else
    return b;
}