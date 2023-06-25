#include <stdio.h>

void cheer(int i) {
	printf("cheer %d\n", i);
}

void swap(int* a, int* b);

int main(void) {
	// double f = 2.4;
	// cheer(f);

	int a = 5;
	int b = 6;

	swap(&a, &b);

	printf("a=%d, b=%d\n", a, b);

	return 0;
}


void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}
