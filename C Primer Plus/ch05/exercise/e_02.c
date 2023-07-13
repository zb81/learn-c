#include <stdio.h>

int main(void) {
	int n;
	printf("Enter a integer: ");
	scanf("%d", &n);
	int max = n + 10;
	while(n <= max)
		printf("%d ", n++);
	printf("\n");
	return 0;
}
