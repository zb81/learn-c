#include <stdio.h>

double avg(double a, double b);

int main(void) {
	printf("%g\n", avg(1.0, 2.0));
	return 0;
}

double avg(double a, double b) {
	return 1 / ((1/a + 1/b) / 2);
}
