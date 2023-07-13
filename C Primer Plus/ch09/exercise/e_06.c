#include <stdio.h>

void sort(double *a, double *b, double *c);

int main(void) {
	double a = 1.3;
	double b = 1.5;
	double c = 0.7;
	sort(&a, &b, &c);
	printf("%g, %g, %g\n", a, b, c);
	return 0;
}

void sort(double *a, double *b, double *c) {
	double t;
	if (*a > *c) {
		t = *a;
		*a = *c;
		*c = t;
	}
	if (*b > *c) {
		t = *b;
		*b = *c;
		*c = t;
	}

	// 到这里，最大值确认，下面只需比较前两个值即可
	if (*a > *b) {
		t = *a;
		*a = *b;
		*b = t;
	}
}
