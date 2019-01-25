#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int n,i,fal;
  int a[110];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n/2;i++)
  {
    fal=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=fal;
  }
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  system("pause");
}