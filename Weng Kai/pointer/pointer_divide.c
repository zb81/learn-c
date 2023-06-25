#include <stdio.h>

int divide(double a, double b, double *result);

int main(void) {
	double a = 5.0;
	double b = 3.0;
	double c;

	if (divide(a, b, &c)) {
		printf("%.2f ÷ %.2f = %.2f\n", a, b, c);
	} else {
		printf("出错!\n");
	}

	return 0;
}


int divide(double a, double b, double *result) {
	int ret = 1;
	if (b == 0) ret = 0;
	else *result = a / b;
	return ret;
}
