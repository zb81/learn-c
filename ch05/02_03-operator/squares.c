#include <stdio.h>

int main(void) {
	int n = 1;
	while(n < 21) {
		printf("%4d %6d\n", n, n*n);
		n = n + 1;
	}
	return 0;
}
