#include <stdio.h>
using namespace std;
int main(void)
{
	int n,check=0;
	char s[20005];
	scanf("%d", &n); getchar();
	for (int i = 0; i < n; i++) {
		scanf("%c", &s[i]);
		getchar();
	}
	int a = 0, b = n - 1;  //用a，b很巧妙
	while (a <= b) {
		//将从左起和从右起的字符串比较
		bool left = false;
		for (int i = 0; a + i <= b; i++) {
			if (s[a + i] < s[b - i]) {
				left = true;
				break;
			}
			else if (s[a + i] > s[b - i]) {
				left = false;
				break;
			}
		}  //此中用循环__目的__处理前后相同的情况
		if (check == 80) { printf("\n"); check = 0; }
		if (left) putchar(s[a++]);	//妙
		else putchar(s[b--]);
		check++;
	}
	return 0;
}