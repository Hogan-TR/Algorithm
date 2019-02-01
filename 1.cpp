#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *a[3]={"C","C++","Java"};
	char *p,**pp;
	puts(a[1]);					//C++
	printf("%c\n",*(a[2]+2));   //v
	pp=a;
	puts(*(pp+1));				//C++
	printf("%c\n",*(*(pp+1)+1));//+
	puts(*(pp+1)+1);			//++
	p=a[1];
	puts(p+1);					//++
	pp=&p;
	puts(*pp);					//C++
	// puts(*(pp-1));			野指针
	pp=&a[1];
	puts(*(pp-1));
	system("pause");
}