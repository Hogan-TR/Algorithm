#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *ptr = 0;
	int a;
	ptr = &a;
	scanf("%d",ptr);
	printf("%d\n",*ptr);
	system("pause");
}