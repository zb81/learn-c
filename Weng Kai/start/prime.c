#include <stdio.h>

int main(void) {
  int x = 2;
  int count = 0;
  while(count < 50) {
    // x 是素数
    int isPrime = 1;
    for(int i = 2; i < x; i++) {
      // 不是素数
      if (x % i == 0) {
        isPrime = 0;
        break;
      }
    }

    if (isPrime == 1) {
      printf("%d ", x);
      count++;
    }

    x++;
  }
  printf("\n");

  return 0;
}
