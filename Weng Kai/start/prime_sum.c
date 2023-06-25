#include <stdio.h>

int main(void) {
  int m, n;
  scanf("%d %d", &m, &n);

  if (m == 1) m = 2;

  int count = 0;
  int sum = 0;

  while(m <= n) {
    int isPrime = 1;
    // 判断是否是素数
    for(int i = 2; i < m; i++) {
      if (m % i == 0) {
        isPrime = 0;
        break;
      }
    }

    if (isPrime == 1) {
      count++;
      sum += m;
    }

    m++;
  }

  printf("%d %d\n", count, sum);

  return 0;
}
