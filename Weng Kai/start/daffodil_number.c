#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  // 计算 first
  int first = 1;
  int i = 1;
  while(i < n) {
    first *= 10;
    i++;
  }


  int last = first * 10 - 1;
  while(first <= last) {
    int sum = 0; // 保存幂和
    int t = first; // 拷贝
    do {
      int d = t % 10;
      t /= 10;
      int m = d;
      int x = 1;
      while(x < n) {
        m = m * d;
        x++;
      }
      sum += m;
    } while(t > 0);

    if (sum == first) {
      printf("%d\n", first);
    }

    first++;
  }

  return 0;
}
