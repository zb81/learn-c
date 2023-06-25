#include <stdio.h>

/*
  1.根据输入，获取 mask 
    123 -> 100, 1234 -> 1000

  2.除以 mask
*/

int main(void) {
  int x;
  scanf("%d", &x);

  // 获取 mask
  int t = x;
  int mask = 1;
  while(t > 9) {
    mask *= 10;
    t /= 10;
  }

  // 循环除以 mask
  while(mask > 0) {
    printf("%d", x / mask);
    // 打印空格
    if (mask > 9) {
      printf(" ");
    }
    x = x % mask;
    mask /= 10;
  }

  return 0;
}
