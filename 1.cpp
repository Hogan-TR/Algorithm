#include <stdio.h>
#include <math.h>
typedef long long ll;
using namespace std;
		/*二分幂*/
ll fun1(int a, int n) {
	if (n == 0)
		return 1;
	if (n == 1)
		return a;
	ll ans = fun1(a, n / 2);	//递归
	ans *= ans;
	if (n % 2 == 1)
		ans *= a;
	return ans;
}
		/*快速幂*/
ll fun(int a, int b) {
	ll r = 1;
	int base = a;
	while (b != 0) {
		if (b & 1) {	//判断奇偶性__奇为真，偶为假
			r *= base;
		}
		base *= base;
		b /= 2;	//亦可写为__b=b>>1
	}
	return r;
}
		/*快速幂取模*/
ll func(ll a, ll b, ll mod)
{
	ll ans = 1;
	a = a % mod;
	while (b > 0) {
		if (b & 1) {	//if(b%2==1)
			ans = (ans * a) % mod;		//如果二进制最低位为1，则乘上x^(2^i)
		}
		a = a * a % mod;
		b >>= 1;		//b/=2;
	}
	return ans;
}
ll mod_pow(ll x, ll n, ll mod) {
	if (n == 0) return 1;
	ll res = mod_pow(x * x % mod, n / 2, mod);
	if (n & 1) res = res * x % mod;
	return res;
}
int main()
{
	printf("2^16=%d\n", fun1(2, 16));
	printf("2^16=%d\n", fun(2, 16));
	printf("2^16=%d\n", int(pow(2, 16)));	//pow-声明：double pow(double x, double y)
	return 0;
}