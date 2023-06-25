#include <stdio.h>

int main(void) {
	double x;
	printf("输入身高英寸: ");
	scanf("%lf", &x);
	printf("您的身高: %f cm\n", 2.54 * x);

	return 0;
}
