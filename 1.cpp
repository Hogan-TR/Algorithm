#include <stdio.h>
#include <stdlib.h>
void print(char *p)
{
	while(*p!='\0')
	{
		putchar(*p++);
	}
}
int main(void)
{
	char ch[]="Hello";
	print(ch);
	system("pause");
}