#include <stdio.h>

int main(void) {
	double age;
	printf("Enter your age: ");
	scanf("%lf", &age);
	printf("Total seconds: %.0lf s\n", age * 3.156e7);
	return 0;
}
