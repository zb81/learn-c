#include <stdio.h>

int* f(void);
void g(void);

int main(void) {
	int *p = f();
	printf("*p=%d\n", *p);
	g();
	printf("*p=%d\n", *p);

	return 0;
}

int* f(void) {
	int i = 12;
	return &i;
}

void g(void) {
	int k = 24;
	printf("k=%d\n", k);
}
