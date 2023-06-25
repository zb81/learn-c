#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  double sum = 0.0;
  double sign = 1.0;
  int i;
  for(i = 1; i <= n; i++) {
    sum += sign / i;
    sign = -sign;
  }
  printf("f(%d)=%f\n", n, sum);
  return 0;
}
