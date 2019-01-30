#include <stdio.h>
#include <stdlib.h>
int *test()
{
	int i=5,*pi=&i;
	return pi;
}
void test2()
{
	int j=3;
}
int main(void)
{
	int *pr;
	pr=test();
	test2();
	printf("%d\n",*pr);
	system("pause");
}