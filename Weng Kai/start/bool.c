#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool b = 6 > 5;
  bool t = true;

  t = 2;
  printf("%d\n", b);
  printf("%d\n", t);

  return 0;
}
