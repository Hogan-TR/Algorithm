#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int n;
	bool m = false;
	scanf("%d", &n);
	if (n % 3 == 0) {
		printf("3 ");
		m = true;
	}
	if (n % 5 == 0) {
		printf("5 ");
		m = true;
	}
	if (n % 7 == 0) {
		printf("7 ");
		m = true;
	}
	if (!m)
		printf("n");
	return 0;
}