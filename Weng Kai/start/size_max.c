#include <stdio.h>

int main(void) {
  int n = 1;
  while(n > 0) {
    n++;
  }
  n--;
  printf("int 类型可以表示的最大有符号整数: %d\n", n);

  unsigned int a = 1;
  while(a > 0) {
    a++;
  }
  a--;
  printf("int 类型可以表示的最大无符号整数: %u\n", a);
  return 0;
}
