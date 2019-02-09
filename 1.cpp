#include<iostream>
#include<stdio.h>
using namespace std;
/**
  快速幂算法
*/
long long Calculation(long long a, long long b, long long c) {
	int ans = 1;
	a = a % c;
	while (b > 0) {
		if (b % 2 == 1)
			ans = (ans * a) % c;
		b = b / 2;
		a = (a * a) % c;
	}
	return ans;
}
int main() {
	int n, N;
	cin >> n;
	while (n--) {
		cin >> N;
		printf("%d\n", Calculation(N, N, 10));
	}
	return 0;
}