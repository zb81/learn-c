#include <stdio.h>

int main(void) {
  const int M = 2;
  int type = 0;

  scanf("%d", &type);

  switch(type) {
  case 1:
  case M:
    printf("早上好\n");
  case 3:
    printf("晚上好\n");
    break;
  case 4:
    printf("再见\n");
    break;
  default:
    printf("啊，什么啊？\n");
  }

  return 0;
}
