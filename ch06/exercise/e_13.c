#include <stdio.h>

#define LEN 8

int my_pow(int a, int b);

int main(void) {
	int arr[LEN];
	int i;
	for(i=0; i<LEN; i++) {
		arr[i] = my_pow(2, i+1);
	}

	i=0;
	do {
		printf("%d ", arr[i++]);
	} while(i<LEN);
	printf("\n");

	return 0;
}

int my_pow(int a, int b) {
	int ret = 1;

	int i;
	for(i=1; i<=b; i++) {
		ret *= a;
	}

	return ret;
}
