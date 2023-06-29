#include <stdio.h>

void to_binary(unsigned long n, unsigned int x);

int main(void) {
	to_binary(1024, 2);
	putchar('\n');
	to_binary(129, 8);
	putchar('\n');
	to_binary(20, 6);
	putchar('\n');
	return 0;
}

void to_binary(unsigned long n, unsigned int x) {
	int r;
	r = n%x;
	if (n >= x) to_binary(n/x, x);
	putchar('0'+r);
}
