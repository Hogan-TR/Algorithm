#include <stdio.h>
#include <stdlib.h>
int *test()
{
	int i=5,*pi=&i;
	return pi;
}
int main(void)
{
	int *pj;
	pj=test();
	printf("%d\n",*pj);
	system("pause");
}