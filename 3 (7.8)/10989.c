#include <stdio.h>

int main() 
{
  int n;
  int in;
  int a[10005] = {0};  
    
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) 
  {
    scanf("%d", &in);
    a[in]++;
  }

  for (int i = 1; i <= 10000; i++)
    while (a[i]--) printf("%d\n", i);
  
  return 0;
}
