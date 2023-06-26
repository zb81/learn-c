#include <stdio.h>

int main(void) {
	float dis;
	float oil;
	printf("请输入里程(公里): ");
	scanf("%f", &dis);
	printf("请输入耗油量(升): ");
	scanf("%f", &oil);
	printf("每升汽油可以行驶 %.1f 公里\n", dis/oil);
	printf("百公里油耗: %.1f升\n", 100*oil/dis);

	return 0;
}
