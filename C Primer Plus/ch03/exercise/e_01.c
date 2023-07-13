#include <stdio.h>

int main(void) {
	int a = 2147483647;
	printf("%d\n", a+1); // -2147483648
	return 0;
}
