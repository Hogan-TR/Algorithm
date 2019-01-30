#include <stdio.h>
#include <stdlib.h>
void add(int x,int y,int *pr)
{
	*pr=x+y;
}
int main(void)
{
	int i=23,j=32,k=0;
	add(i,j,&k);
	printf("%d+%d=%d\n",i,j,k);
	system("pause");
}