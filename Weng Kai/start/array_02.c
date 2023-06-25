#include <stdio.h>

void f();

int main(void) {
	f();
	printf("here\n");
	return 0;
}

void f() {
	int a[10];
	a[10] = 0;
}
