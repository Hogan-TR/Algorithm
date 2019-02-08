#include <stdio.h>
#include <math.h>
using namespace std;
int gcd(int x, int y) {//辗转相除法求最大公约数，x>=y;
	if (x < y) {
		int tmp = x;
		x = y;
		y = tmp;
	}
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
int main(void)
{
	int a, b, c, d, _gcd, _lcm, numerator, _a, _c, _gcd1;
	char o;
	while (scanf("%d/%d%c%d/%d", &a, &b, &o, &c, &d) != EOF) {
		_gcd = gcd(b, d);		//最大公约数
		_lcm = b / _gcd * d;	//两个分母的最小公倍数
		_a = a * d / _gcd;		//通分后一分子
		_c = c * b / _gcd;		//通分后一分子
		if (o == '+')
			numerator = _a + _c;
		else
			numerator = _a - _c;
		if (numerator == 0)		//若分子值为0.则直接输出
			printf("%d\n", numerator);
		else {
			_gcd1 = gcd(abs(numerator), _lcm);	//最大公约数和分母相同，说明分子和分母相同,最后值为整数
			if (_gcd1 == _lcm)
				printf("%d\n", numerator / _gcd1);
			else
				printf("%d/%d\n", numerator / _gcd1, _lcm / _gcd1);
		}
	}
	return 0;
}