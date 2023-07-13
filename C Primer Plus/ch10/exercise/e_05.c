#include <stdio.h>

double max_min_diff(const double arr[], int len);

int main(void) {
	double arr[] = {1.2, 4.13, 3.14, 5.15, 6.16, 5.5};
	printf("%g\n", max_min_diff(arr, sizeof arr / sizeof arr[0]));
	return 0;
}

double max_min_diff(const double arr[], int len) {
	double curr = *arr;
	double min = curr;
	double max = curr;
	int i;
	for(i=1; i<len; i++) {
		curr = arr[i];
		max = curr > max ? curr : max;
		min = curr < min ? curr : min;
	}
	return max-min;
}
