#include <stdio.h>

void reverse(double arr[], int len);
void print_arr(const double * arr, int len);

int main(void) {
	double arr[] = {1.2, 4.13, 3.14, 5.15, 6.16, 5.5};
	int len = sizeof arr / sizeof arr[0];
	print_arr(arr, len);
	reverse(arr, len);
	print_arr(arr, len);
	return 0;
}

void reverse(double arr[], int len) {
	double t;
	int i;
	for(i=0; i<len/2; i++) {
		t = arr[i];
		arr[i] = arr[len-i-1];
		arr[len-i-1] = t;
	}
}

void print_arr(const double * arr, int len) {
	int i;
	for(i=0; i<len; i++) printf("%g ", *arr++);
	putchar('\n');
}
