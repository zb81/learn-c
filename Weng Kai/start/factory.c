#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int fact = 1;

  // for(int i = 2; i <= n; i++) {
  //   fact *= i;
  // }

  // 从 n 开始
  int i = n;
  for(; n > 1; n--) {
    fact *= n;
  }

  // while(n > 1) {
  //   fact *= n;
  //   n--;
  // }

  printf("%d! = %d\n", i, fact);

  return 0;
}
