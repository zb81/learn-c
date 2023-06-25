#include <stdio.h>

int main(void) {
  int a = 4, b = 5, c = 6;

  int max = 0;

  if (a > b) {
    if (a > c) {
      max = a;
    } else {
      max = c;
    }
  } else {
    if (b > c) {
      max = b;
    } else {
      max = c;
    }
  }

  printf("The max is %d\n", max);


  return 0;
}
