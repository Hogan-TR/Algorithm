#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i=3,*p,*q;
	p=&i;
 	// *q=i;                           //此赋值方式错误
	printf("%d %p\n",*p,p);
	// printf("%d %p\n",*q,q);
	system("pause");
}