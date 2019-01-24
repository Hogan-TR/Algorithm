#include <string>  
#include <iostream>
using namespace std;
int main(void)
{
  string a; 
  int res = 0,zan,n1=0,n0=0,i,p;
  cin >> a;
  p=a.length();
  for(i = 0; i<p; i++){
    if(res == 0 && a[i] == '2'){
      res = 1;
      zan = i;
      }
    if(a[i] == '1') n1++;
    if(res == 0 && a[i] == '0') n0++;
  }
  for(i = 0; i<n0; i++){
      printf("0");
  }
  for(i = 0; i<n1; i++){
      printf("1");
  }
  for(i = zan; i<p; i++){
      if(a[i] == '1') continue;
      printf("%c",a[i]);
  }
  system("pause");
}