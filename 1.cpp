#include<iostream>
using namespace std;
int main()
{
	int n, i, ii;
	char s[100];
	char pair[99][2];
	char result[2];
	int times;
	int resulttimes = 0;
	cin >> n >> s;
	for (i = 0; i < n - 1; i++)
	{
		pair[i][0] = s[i];
		pair[i][1] = s[i + 1];
	}
	for (i = 0; i < n - 1; i++)
	{
		times = 0;
		for (ii = 0; ii < n - 1; ii++)
		{
			if (pair[i][0] == pair[ii][0])
				if (pair[i][1] == pair[ii][1])
					times++;
		}
		if (times > resulttimes)
		{
			resulttimes = times;
			result[0] = pair[i][0];
			result[1] = pair[i][1];
		}
	}
	cout << result[0] << result[1] << "\n";
	return 0;
}