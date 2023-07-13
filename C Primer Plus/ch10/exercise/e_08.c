#include <stdio.h>

#define COUNT 3

void copy_arr(double target[], const double * start, int count);
void print_arr(const double * arr, int len);

int main(void) {
	double source[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
	double target[COUNT];

	copy_arr(target, source+2, COUNT);
	print_arr(target, COUNT);

	return 0;
}

void copy_arr(double target[], const double * start, int count) {
	int i;
	for(i=0; i<count; i++) target[i] = *start++;
}

void print_arr(const double * arr, int len) {
	int i;
	for(i=0; i<len; i++) printf("%g ", *arr++);
	putchar('\n');
}
