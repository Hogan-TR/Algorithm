#include<stdio.h>
#include<iostream>
#include<memory.h>
#include<string.h>
#include<stack>
using namespace std;
int main()
{
	int n;
	char ch;
	cin >> n;
	getchar();
	while (n--) {
		string s;
		stack<char> stack_s;		//栈 先进后出
		while (true) {
			ch = getchar();
			if (ch == ' ' || ch == '\n' || ch == EOF) {
				while (!stack_s.empty()) {
					printf("%c", stack_s.top());
					stack_s.pop();
				}
				if (ch == '\n' || ch == EOF)
					break;
				printf(" ");
			}
			else
				stack_s.push(ch);
		}
		printf("\n");
	}
	return 0;
}

//My solution
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n,i,m,temp;
//     char ch[1000];
//     scanf("%d",&n);
//     getchar();
//     for( ;n;n--)
//     {   
//         i=0;
//         while(1)
//         {
//             ch[i]=getchar();
//             if(ch[i]=='\n')
//             {
//                 for(m=0;m<i/2;m++)
//                 {
//                     temp=ch[m];
//                     ch[m]=ch[i-1-m];
//                     ch[i-1-m]=temp;
//                 }
//                 for(m=0;m<i+1;m++)
//                 {
//                     printf("%c",ch[m]);
//                 }
//                 break;
//             }
//             if(ch[i]==' ')
//             {
//                 for(m=0;m<i/2;m++)
//                 {
//                     temp=ch[m];
//                     ch[m]=ch[i-1-m];
//                     ch[i-1-m]=temp;
//                 }
//                 for(m=0;m<i+1;m++)
//                 {
//                     printf("%c",ch[m]);
//                 }
//                 i=0;
//             }
//             else
//             i++;
//         }
//     }
//     return 0;
// }