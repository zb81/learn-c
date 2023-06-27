#include <stdio.h>

int f(void);

int gAll;

int main(void) {
	printf("in %s gAll=%d\n", __func__, gAll); // 0
	f();
	printf("agn in %s gAll=%d\n", __func__, gAll); // 2
	return 0;
}

int f(void) {
	printf("in %s gAll=%d\n", __func__, gAll); // 0
	gAll += 2;
	printf("agn in %s gAll=%d\n", __func__, gAll); // 2
	return gAll;
}
