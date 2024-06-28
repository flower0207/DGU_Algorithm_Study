#include <stdio.h>

int main() {
  int n, m = 1;
  scanf("%d", &n);
  for (int i = n; i > 0; i--) {
    m *= i;
  }
  printf("%d", m);
  return 0;
}
