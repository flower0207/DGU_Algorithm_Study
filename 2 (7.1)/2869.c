#include <stdio.h>

int main() {
  int a, b, c;
  int d;

  scanf("%d %d %d", &a, &b, &c);

  d = (c - b - 1) / (a - b) + 1;

  printf("%d", d);

  return 0;
}
