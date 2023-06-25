#include <stdio.h>

int main(void) {
  int dividend, divisor;
  scanf("%d/%d", &dividend, &divisor);

  int x = dividend;
  int y = divisor;
  int t;
  while(y != 0) {
    t = x % y;
    x = y;
    y = t;
  }

  printf("%d/%d\n", dividend/x, divisor/x);

  return 0;
}
