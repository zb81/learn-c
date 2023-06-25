/*
  输入两个不小于 2 的正整数 a, b (a < b), 求出之间的所有素数的和(包含它们自身)
*/
#include <stdio.h>

int isPrime(int);

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  int sum = 0;
  while(a <= b) {
    if (isPrime(a)) {
      sum += a;
    }
    a++;
  }
  printf("%d\n", sum);
  return 0;
}

int isPrime(int x) {
  if (x == 1) return 0;
  for(int i = 2; i < x; i++) {
    if (x % i == 0) return 0;
  }
  return 1;
}
