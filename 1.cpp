#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch[]="Hello!";
	char *str;
	char *str1="Hello!";	 //字符型字面量，通常以字符数组的形式存储于内存中一个“只读”的特殊内存区域，而且整个字符常量表现为与首字符相关的存储单元的首地址
	str=ch;		        //str 指向 ch[0]
	puts(str);          //puts(ch)
	*(str+1)='i';       //*(ch+1)  ch[1]
	str[2]='!';			//*(str+2)  *(ch+2)  ch[2]
	*(str+3)='\0';
	puts(ch);      
	puts(str1);
	// *str1='A';       //只读的访问区域，内存访问错误
	system("pause");
}