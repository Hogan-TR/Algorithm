#include <stdio.h>
int main()
{
	int n,i;
	char key[55];
	scanf("%d %s",&n,key);
	for(i=0;key[i]!='\0';i++){
		key[i]=(key[i]-'a'+n)%26+'a';		//超过z，回到a
	}
	printf("%s\n",key);
	return 0;
}