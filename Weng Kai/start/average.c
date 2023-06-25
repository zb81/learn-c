#include <stdio.h>

int main(void) {
  int sum = 0, count = 0;
  int a;

  scanf("%d", &a);
  while(a != -1) {
    sum += a;
    count++;
    scanf("%d", &a);
  }

  printf("Average: %f\n", 1.0 * sum / count);

  return 0;
}
