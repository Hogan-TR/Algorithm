#include <stdio.h>
int a[5001], cnt[5001], color[5001];
int main()
{
	int n, k, t = 0;
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		cnt[a[i]]++;	//计数——一个数字出现次数
	}
	for (int i = 1; i <= 5000; i++) {
		if (cnt[i] > k) {
			printf("NO\n");
			return 0;
		}
		else {
			for (int j = 1; j <= n; j++) {
				if (a[j] == i)
				{
					color[j] = ++t;
					t %= k;		//超过了颜色数就再次从1开始
				}
			}
		}
	}
	printf("YES\n");
	for (int i = 1; i <= n; i++) {
		if (i != 1) printf(" ");
		printf("%d", color[i]);
	}
	return 0;
}