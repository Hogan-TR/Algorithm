#include <stdio.h>
#include <stdlib.h>
void swap(int *px,int *py)
{
	int temp;
	temp=*px;
	*px=*py;
	*py=temp;
}
int main(void)
{
	int i=2,j=3;
	printf("%d %d\n",i,j);
	swap(&i,&j);               //swap(i,j)  不可这样调用
	printf("%d %d\n",i,j);
	system("pause");
}

// 函数调用为传值调用
// swap(2,3)
// 实参赋值给形参
// px=2,py=3
// 显然，整型给指针赋值是错误的
// 既然，形参为指针，则必须给他赋值为地址
// 所以，调用时为  swap(&i,&j)