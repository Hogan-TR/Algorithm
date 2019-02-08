#include <stdio.h>
using namespace std;
int main()
{
	for (int i = 1; i <= 100; i++) {
		int res = 1;
		for (int j = 1; j <= i; j++) {
			res *= i;
			res %= 10;
		}
		printf("%d:%d\n", i, res);
	}
	return 0;
}