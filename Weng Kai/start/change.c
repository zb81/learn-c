#include <stdio.h>

int main(void) {
  int price = 0;
  int bill = 0;

  // 读入金额和票面
  printf("请输入金额: ");
  scanf("%d", &price);
  printf("请输入票面: ");
  scanf("%d", &bill);

  if (bill >= price) {
    printf("找零 %d 元\n", bill - price);
  } else {
    printf("你的钱不够\n");
  }

  return 0;
}
