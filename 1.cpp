			/*找规律*/

// #include <cstdio>
// #include <cstring>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// char s1[200005];
// char s2[200005];
// unsigned a[5];
// int main()
// {
// 	int n;
// 	scanf("%d", &n);
// 	scanf("%s%s", s1, s2);
// 	for (int i = 0; i < n; i++) {
// 		if (s1[i] == '0') {
// 			if (s2[i] == '0') a[1]++;
// 			else a[2]++;
// 		}
// 		else {
// 			if (s2[i] == '1')  a[3]++;
// 			else  a[4]++;
// 		}
// 	}
// 	long long ans = 0;
// 	ans = a[2] * a[4] + 1ll * a[1] * a[3] + 1ll * a[1] * a[4];
// 	printf("%lld\n", ans);
// 	return 0;
// }


#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;
const int maxn = 100005;
int a[maxn], b[maxn];
char ch1[maxn], ch2[maxn];
int sum[5];
int main()
{
	int n;
	cin >> n;
	scanf("%s%s", &ch1, &ch2);
	for (int i = 0; i < n; i++) {
		a[i] = ch1[i] - '0';
		sum[a[i]]++;
	}
	for (int i = 0; i < n; i++) {
		b[i] = ch2[i] - '0';
	}
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		if (b[i] == 0) {
			if (a[i] = 1) {
				ans += sum[0];
				sum[1]--;
			}
			else {
				ans += sum[1];
				sum[0]--;
			}
		}
	}
	cout << ans << endl;
	return 0;
}