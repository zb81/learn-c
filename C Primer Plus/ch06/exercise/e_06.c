#include <stdio.h>

int main(void) {
	int min, max;
	printf("Enter min and max (eg. 10,20): ");
	scanf("%d,%d", &min, &max);

	printf("   n    n*n     n*n*n\n");
	int n;
	for(n = min; n <= max; n++) {
		printf("%4d%7d%9d\n", n, n*n, n*n*n);
	}

	return 0;
}
