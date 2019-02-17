#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
// {
// 	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
// 	int *p = &a[5];
// 	printf("%d",p[-2]);
// 	system("pause");
// }

// {
// 	int a[] = {0};
// 	int *p = a;
// 	// if(p == a[0])
// 	// printf("1");
// 	if(p == &a[0])
// 	printf("2");
// 	if(*p == a[0])
// 	printf("3");
// 	if(p[0] == a[0])
// 	printf("4");
// 	system("pause");
// }
{
	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
	int *p = &a[1];
	printf("%d",p[2]);
	system("pause");
}
