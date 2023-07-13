#include <stdio.h>

int max_idx(const double * arr, int len);

int main(void) {
	double arr[] = {1.2, 4.13, 3.14, 5.15, 6.16, 5.5};
	printf("%d\n", max_idx(arr, sizeof arr / sizeof arr[0]));
	return 0;
}

int max_idx(const double * arr, int len) {
	double curr = *arr;
	double max = curr;
	int max_idx = 0;
	int i;

	for(i=1; i<len; i++) {
		curr = *(arr+i);
		if (curr > max) {
			max = curr;
			max_idx = i;
		}
	}

	return max_idx;
}
