#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int i, j;
  i = 1;
  while(i <= n) {
    j = 1;
    while (j <= i) {
      int m = i*j;
      printf("%d*%d=%d", j, i, m);
      if (m >= 10) {
        printf("  ");
      } else {
        printf("   ");
      }
      j++;
    }
    printf("\n");
    i++;
  }

  return 0;
}
