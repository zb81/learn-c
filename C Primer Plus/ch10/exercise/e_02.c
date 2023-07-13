#include <stdio.h>

#define LEN 5

void copy_arr(double target[], const double src[], int len);
void copy_ptr(double * target, const double * src, int len);
void copy_ptrs(double * target, const double * start, double * end);
void print_arr(const double * arr, int len);

int main(void) {
	double source[LEN] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[LEN];
	double target2[LEN];
	double target3[LEN];

	copy_arr(target1, source, LEN);
	copy_ptr(target2, source, LEN);
	copy_ptrs(target3, source, source + LEN);

	print_arr(source, LEN);
	print_arr(target1, LEN);
	print_arr(target2, LEN);
	print_arr(target3, LEN);

	return 0;
}

void copy_arr(double target[], const double src[], int len) {
	int i;
	for(i=0; i<len; i++) target[i] = src[i];
}

void copy_ptr(double * target, const double * src, int len) {
	int i;
	for(i=0; i<len; i++) *target++ = *src++;
}

void copy_ptrs(double * target, const double * start, double * end) {
	while(start<end) *target++ = *start++;
}

void print_arr(const double * arr, int len) {
	int i;
	for(i=0; i<len; i++) printf("%g ", *arr++);
	putchar('\n');
}
