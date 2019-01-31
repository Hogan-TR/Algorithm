#include <stdio.h>
#include <stdlib.h>
#define N 5
int a[N]={23,32,25,52,21};
int main(void)
{
	int i,j,min,temp,*pi;
	pi=a;
	for(i=0;i<N-1;i++)
	{
		min=i;
		for(j=i+1;j<N;j++)
		{
			if(*(pi+min)>*(pi+j))  //pi[min]  a[min]  *(a+min)  等价
			min=j;
		}
		temp=pi[i];
		pi[i]=pi[min];
		pi[min]=temp;
	}
	for(i=0;i<N;i++)
	{
		printf("%3d",*pi++);
	}
	system("pause");
}
//排序