#include<iostream>
#include<algorithm>	//包含了sort()函数
#include<stdio.h>
using namespace std;
int a[20005],b[20005];
int main(){int n,m;
	while(cin>>n>>m){
		if(n==0 && m==0) break;
		for(int i=0;i<n;i++)
			cin>>a[i];	//C++的输入方式
		for(int j=0;j<m;j++)
			cin>>b[j];
		sort(a,a+n);//sort()函数，第一个参数：起始地址 第二个参数：结束地址 第三个参数：排序方式
		sort(b,b+m);
		int cur=0,cost=0;
		for(int i=0;i<m;i++){
			if(b[i]>=a[cur]){
				cost+=b[i];
				cur++;
				if(cur==n)	//cur自增后等于n(讲道理cur<n)
				break;
			}
		}
		if(cur<n) //***n<m不对 未考虑面包数大于..但不是所有..
			printf("Loowater is doomed!\n");
		else
			printf("%d\n",cost);
	}
	return 0;
}