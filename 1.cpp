#include<iostream>
#include<cstdio>
using namespace std;
int LCD[10][9] = {		//十个数字，每个数字由9部分组成
	{0,1,0,1,0,1,1,1,1},  //0
	{0,0,0,0,0,1,0,0,1},  //1
	{0,1,0,0,1,1,1,1,0},  //2
	{0,1,0,0,1,1,0,1,1},  //3
	{0,0,0,1,1,1,0,0,1},  //4
	{0,1,0,1,1,0,0,1,1},  //5
	{0,1,0,1,1,0,1,1,1},  //6
	{0,1,0,0,0,1,0,0,1},  //7
	{0,1,0,1,1,1,1,1,1},  //8
	{0,1,0,1,1,1,0,1,1}   //9
};
int clock[2][4][9];
bool check(int clock_id, int d) {  //检查是否能匹配哪个数字
	int a[] = { d / 1000, d / 100 % 10, d / 10 % 10, d % 10 };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 9; j++)
			if (clock[clock_id][i][j] == 1 && LCD[a[i]][j] != 1)  //不存在该数字
				return false;
	}
	return true;
}

bool isTime(int h, int m) {  //小时和分钟
	if (check(0, h * 100 + m) == false)
		return false;
	if (m >= 15) {
		m -= 15;
		if (check(1, h * 100 + m) == false)
			return false;
		return true;
	}
	if (h > 0) {
		m += 45;
		h--;
		if (check(1, h * 100 + m) == false)
			return false;
		return true;
	}
	m += 45;
	h = 23;
	if (check(1, h * 100 + m) == false)
		return false;
	return true;
}
int main()
{
	int t;
	char c;
	cin >> t;
	getchar();
	while (t--) {
		//读入数据,并转化成二进制
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 4; j++) {
				for (int k = 0; k < 3; k++) {
					c = getchar();
					if (c == ' ')
						clock[0][j][i * 3 + k] = 0;
					else
						clock[0][j][i * 3 + k] = 1;
				}
			}
			getchar();
			for (int j = 0; j < 4; j++) {
				for (int k = 0; k < 3; k++) {
					c = getchar();
					if (c == ' ')
						clock[1][j][i * 3 + k] = 0;
					else
						clock[1][j][i * 3 + k] = 1;
				}
			}
			getchar();
		}cout << "--" << endl;
		//读入完毕，开始处理
		int flag = 0; //标记
		int ac_h, ac_m;  //准确的时间
		for (int h = 0; h < 24; h++) {
			for (int m = 0; m < 60; m++)
				if (isTime(h, m) == true)
					ac_h = h, ac_m = m, flag++;
		}

		if (flag != 1)
			cout << "Not Sure" << endl;
		else
			printf("%02d%02d\n", ac_h, ac_m); //注意输出
	}
	return 0;
}