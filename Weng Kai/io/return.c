#include <stdio.h>

int main(void) {
	int num;
	int s = scanf("%d", &num);
	int p = printf("%d\n", num);
	printf("%d:%d\n", s, p);
	return 0;
}
