#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  
  int end = a + 3;

  int h = 0;
  int t = 0;
  int d = 0;
  int count = 0;
  for(h = a; h <= end; h++) {
    for(t = a; t <= end; t++) {
      if (h == t) continue;
      for(d = a; d <= end; d++) {
        if (t == d) continue;
        if (h == d) continue;
        count++;
        printf("%d", h*100 + t*10 + d);
        if (count % 6 == 0) {
          printf("\n");
        } else {
          printf(" ");
        }
      }
    }
  }

  return 0;
}
