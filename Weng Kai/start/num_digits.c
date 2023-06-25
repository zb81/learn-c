#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a integer: ");
  scanf("%d", &n);

  if (n < 0) n = -n;

  int num = 0;
  do {
    num++;
    n /= 10;
  } while(n > 0);

  printf("number of digits: %d\n", num);

  return 0;
}
