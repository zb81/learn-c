#include <stdio.h>
#define LEN 4

void copy_arr(double target[], const double src[], int len);
void print_arr(const double * arr, int len);

int main(void) {
	double source[][4] = {
		{1.6, 2.9, 3.1, 5.2},
		{2.1, 3.5, 4.2, 6.1},
	};

	double target[2][4];

	int i;
	for(i=0; i<2; i++) {
		copy_arr(target[i], source[i], 4);
		print_arr(target[i], 4);
	}

	return 0;
}

void copy_arr(double target[], const double src[], int len) {
	int i;
	for(i=0; i<len; i++) target[i] = src[i];
}

void print_arr(const double * arr, int len) {
	int i;
	for(i=0; i<len; i++) printf("%g ", *arr++);
	putchar('\n');
}
