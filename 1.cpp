#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double dec = b * b - 4 * a * c;
	if (dec == 0) {
		printf("x1=x2=%.5f", (-b + sqrt(b * b - 4 * a * c)) / (2 * a));
	}
	else if (dec > 0) {
		double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a), x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		double temp;
		if (x1 < x2) {
			temp = x1;
			x1 = x2;
			x2 = temp;
		}
		printf("x1=%.5f;x2=%.5f", x1, x2);
	}
	else {									        //这正下方有点坑
		printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi", 0-b / (2 * a), sqrt(4 * a * c - b * b) / (2 * a), 0-b / (2 * a), sqrt(4 * a * c - b * b) / (2 * a));
	}
	return 0;
}