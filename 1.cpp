#include<stdio.h>
using namespace std;
int main()
{
	for (int i = 49; i <= 819; i++) {
		int res1 = 0, res2 = 0;
		int u, t;
		int a[3], b[3];
		u = t = i;
		for(int r = 0; r < 3; r++) {		//十进制转七进制
			int temp;
			temp = u % 7;
			u /= 7;
			a[r] = temp;
		}
		for (int r = 0; r < 3; r++) {		//十转九
			int temp;
			temp = t % 9;
			t /= 9;
			b[r] = temp;
		}
		if (a[0] == b[2] && a[2] == b[0])
		{
			printf("%d\n", i);
			for (int y = 0; y < 3; y++) {
				printf("%d", b[y]);
			}
			printf("\n");
			for (int y = 0; y < 3; y++) {
				printf("%d", a[y]);
			}
			printf("\n");
		}
	}
	return 0;
}


/*一个十进制自然数,它的七进制与九进制表示都是三位数，且七进制与九进制的三位数码表示顺序正好相反。编程求此自然数,并输出显示*/
/*十进制转其他进制：除以其他，取余数，倒置*/