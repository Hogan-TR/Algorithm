#include <stdio.h>
#define square(x) ((x)*(x))
#define square_1(x) (x*x)
        //参数括号很重要
int main(void)     
{
	printf("square 5+4 is %d\n",square(5+4));
	printf("square_1 5+4 is %d\n",square_1(5+4));
	return 0;
}