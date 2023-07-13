#include <stdio.h>

void larger_of(double *a, double *b);

int main(void) {
	double a = 2.57;
	double b = 1.23;
	larger_of(&a, &b);
	printf("a=%g, b=%g\n", a, b);
	return 0;
}

void larger_of(double *a, double *b) {
	double max = *a > *b ? *a : *b;
	*a = *b = max;
}
