#include <stdio.h>
#include <stdlib.h>
void swap(int *a)
{
	int temp;
	temp=a[0];
	a[0]=a[1];
	a[1]=temp;
}
int main(void)
{
	int b[2]={2,3};
	swap(b);
	printf("%d %d\n",b[0],b[1]);
	system("pause");
}