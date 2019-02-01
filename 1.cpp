#include <stdio.h>
#include <stdlib.h>
void printA(int n,char **pp) //char *pp[]
{
	int i;
	for(i=0;i<n;i++)
	{
		puts(*pp++);
	}
}
int main(void)
{
	char *a[]={"C","C++","Java","C#"};
	printA(sizeof(a)/sizeof(*a),a);
	system("pause");
}