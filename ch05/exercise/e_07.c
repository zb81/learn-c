#include <stdio.h>

void printCube(double n);

int main(void) {
	double n;
	printf("Enter a number: ");
	scanf("%lf", &n);
	printCube(n);
	return 0;
}

void printCube(double n) {
	printf("Cube of %lf is %lf.\n", n, n*n*n);
}
