#include <stdio.h>

double min(double x, double y);

int main(void) {
	printf("%g\n", min(1.0, 2.0));
	printf("%g\n", min(2.0, 3.0));
	printf("%g\n", min(1.5e10, 2.1e9));
	return 0;
}

double min(double x, double y) {
	return x < y ? x : y;
}
