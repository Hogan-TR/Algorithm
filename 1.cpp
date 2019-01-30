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

//非法内存访问错误：仅指访问了无权访问的内存(不能访问的内存)
//当储存单元不再属于程序所拥有时，即使在程序中可以通过指针访问储存单元，也不应该再使用该储存单元了，以免出现不可预知的错误