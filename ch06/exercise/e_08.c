#include <stdio.h>

int main(void) {
	double a, b;
	printf("输入两个数 (如 1.0 2.0): ");
	while(scanf("%lf%lf", &a, &b) == 2) {
		printf("(%lf-%lf)/(%lf*%lf) = %lf\n", a, b, a, b, (a-b)/(a*b));
		printf("输入两个数 (如 1.0 2.0): ");
	}
	printf("bye\n");
	return 0;
}
