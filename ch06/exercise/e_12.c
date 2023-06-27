#include <stdio.h>

double calc1(int count);
double calc2(int count);

int main(void) {
	int count;
	printf("Enter count: ");
	scanf("%d", &count);
	while(count > 0) {
		printf("Result 1: %lf\n", calc1(count));
		printf("Result 2: %lf\n", calc2(count));
		printf("Enter next count (<=0 to quit): ");
		scanf("%d", &count);
	}
	printf("Done\n");

	return 0;
}

double calc1(int count) {
	double sum = 0;

	int i;
	for(i=1; i<=count; i++) {
		sum += 1.0/i;
	}

	return sum;
}

double calc2(int count) {
	double sum = 0;

	int i;
	for(i=1; i<=count; i++) {
		sum += 1.0/i*(i%2==0?-1:1);
	}

	return sum;
}
