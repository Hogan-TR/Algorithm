#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char test[]="abcde";
	char comp[]="Abcde ";

	printf("strlen=%lu\n",strlen(test));
	printf("sizeof=%lu\n",sizeof(test));

	printf("strcompare=%d\n",strcmp(test,comp));

	printf("strcp=%s#\n",strcpy(test,comp));
	system("pause");
}