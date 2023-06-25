#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  // 生成随机数
  srand(time(0));
  int number = rand() % 100;

  int a;
  int count = 0;
  do {
    printf("Enter a num: ");
    scanf("%d", &a);
    count++;
    if (a > number) {
      printf("Too big!\n");
    } else if(a < number) {
      printf("Too small!\n");
    }
  } while(a != number);

  printf("🎉 You took %d times!\n", count);

  return 0;
}
