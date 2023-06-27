#include <stdio.h>

const int LEN = 8;

int main(void) {
	double arr1[LEN];
	double arr2[LEN];

	int i=0;
	while(i<LEN) {
		printf("Enter a number: ");
		scanf("%lf", &arr1[i]);
		arr2[i] = i==0 ? arr1[i] : arr2[i-1]+arr1[i];
		i++;
	}

	for(i=0; i<LEN; i++) {
		printf("%lf\t", arr1[i]);
	}
	printf("\n");

	for(i=0; i<LEN; i++) {
		printf("%lf\t", arr2[i]);
	}
	printf("\n");

	return 0;
}
