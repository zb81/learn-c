#include <stdio.h>

int main(void) {
	double k;
	printf("输入夸脱数: ");
	scanf("%lf", &k);
	printf("水分子数量: %e\n", 950 * k / 3.0e-23);

	return 0;
}
