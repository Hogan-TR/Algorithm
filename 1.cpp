#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
  long long n, m, x, w;
  int i;
  long long a[200020], b[200020];
  scanf("%lld %lld", &n, &m);
  w = 1;
  memset(a, 0, sizeof(a));
  memset(b, 0, sizeof(b));
  for (i = 1; i <= n; i++)
  {
    scanf("%lld", &x);
    a[i] = a[i - 1] + x;
  }
  for (i = 0; i < m; i++)
  {
    scanf("%lld", &b[i]);
  }
  for (i = 0; i < m; i++)
  {
    if (b[i] <= a[w])
      printf("%lld %lld\n", w, b[i] - a[w - 1]);
    else
    {
      w++;
      i--;
    }
  }
  return 0;
}