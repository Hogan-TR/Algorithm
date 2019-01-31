#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a[5],i,*pi;
	pi=a;   //pi赋值为a,即pi指向了首元素a[0]
	for(i=0;i<=4;i++)
	{
		scanf("%d",pi+i);
	}
	for(i=0;i<=4;i++)
	{
		printf("%d\t",*(a+i));
	}
	system("pause");
}