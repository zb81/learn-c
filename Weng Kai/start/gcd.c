#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  int t;

  while(b != 0) {
    t = a % b;
    a = b;
    b = t;
  }

  printf("gcd = %d\n", a);

  return 0;
}
