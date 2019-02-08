#include <stdio.h>
using namespace std;
int n, m;
char field[105][105];	//园子
//现在位置(x,y)
void dfs(int x, int y)
{
	//将现在所在位置替换wei'*'
	field[x][y] = '*';
	//循环遍历移动的8个方向
	for (int dx = -1; dx <= 1; dx++) {
		for (int dy = -1; dy <= 1; dy++) {
			//向x方向移动dx，向y方向移动dy，移动的结果为(nx,ny)
			int nx = x + dx, ny = y + dy;
			//判断(nx,ny)是否在园子内，以及是否有积水
			if (0 <= nx && nx < n && 0 <= ny && ny < m && field[nx][ny] == '@')
				dfs(m = nx, ny);
		}
	}
	return;
}
int main(void)
{
	while (scanf("%d%d", &n, &m)) {
		if (n == 0 && m == 0)
			break;
		getchar();
		for (int z = 0; z < n; z++) {
			for (int q = 0; q < m; q++) {
				scanf("%c", &field[z][q]);
			}
			getchar();
		}
		int res = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (field[i][j] == '@') {
					//从有w的地方开始dfs
					dfs(i, j);
					res++;
				}
			}
		}
		printf("%d\n", res);
	}
	return 0;
}
