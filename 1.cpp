#include <stdio.h>
#include <stdlib.h>
#define toke(n) printf("token"#n"=%d\n",token_##n)  //标记粘贴运算符（##）
int main(void)
{
	int token_61=40;
	toke(61);
	system("pause");
}