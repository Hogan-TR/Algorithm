#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i=0;
	const char *s="Hello World";		//建议加上 const
	// s[0]='B';
	const char *s2="Hello World";
	char s3[]="Hello World";

	printf("&i=%p\n",&i);
	printf(" s=%p\n",s);
	printf("s2=%p\n",s2);
	printf("s3=%p\n",s3);
	s3[0]='B';

	printf("Here!s3[0]=%s\n",s3);
	system("pause");
}