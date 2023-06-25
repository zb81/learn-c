#include <stdio.h>

int main(void) {
  int a, n;
  scanf("%d %d", &a, &n);

  int i = 1;
  int sum = 0;
  int t = 0;
  while(i <= n) {
    t = t * 10 + a;
    sum += t;
    i++;
  }
  printf("%d\n", sum);

  return 0;
}
