#include <stdio.h>
int main()
{
	int m, n;
	while (~scanf("%d%d", &m, &n))  //scanf("%d%d", &m, &n)!=EOF  亦可
	{
		printf("%d\n", m + n);
	}
	return 0;
}