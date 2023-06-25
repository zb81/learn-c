#include <stdio.h>

int main(void) {
  int x;
  int one, two, five;
  scanf("%d", &x);
  // int exit = 0;
  for(one = 1; one < x*10; one++) {
    for(two = 1; two < x*10/2; two++) {
      for(five = 1; five < x*10/5; five++) {
        if (one + two*2 + five*5 == x*10) {
          printf("%d个1角, %d个2角, %d个5角, 得到%d元。\n", one, two, five, x);
          // exit = 1;
          // break;
          goto out;
        }
      }
      // if (exit) break; // 接力 break
    }
    // if (exit) break;
  }
out:
  return 0;
}
