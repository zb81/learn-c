#include <stdio.h>

int calc(int min, int max);

int main(void) {
	int min, max;
	printf("Enter lower and upper integer limits: ");
	int n = scanf("%d%d", &min, &max);
	while(n == 2 && min < max) {
		printf("The sums of the squares from %d to %d is %d\n", min*min, max*max, calc(min, max));
		printf("Enter next set of limits: ");
		scanf("%d%d", &min, &max);
	}
	printf("Done\n");

	return 0;
}

int calc(int min, int max) {
	int sum = 0;
	int i;
	for(i=min; i<=max; i++) {
		sum += i*i;
	}
	return sum;
}
