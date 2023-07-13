#include <stdio.h>

int max(const int * arr, int len);

int main(void) {
	int arr[] = {5,1,4,56,2,4,6,9,60, 4};
	printf("%d\n", max(arr, sizeof arr / sizeof arr[0]));
	return 0;
}

int max(const int * arr, int len) {
	int max = *arr;
	int i;
	for(i=1; i<len; i++) {
		max = *(arr+i) > max ? *(arr+i) : max;
	}
	return max;
}
