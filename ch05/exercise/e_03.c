#include <stdio.h>
#define DAYS 7

int main(void) {
	int n;
	do {
		printf("Enter total days( <=0 to quit ): ");
		scanf("%d", &n);
		if (n>0)
			printf("%d days are %d weeks, %d days.\n", n, n/DAYS, n%DAYS);
	} while (n > 0);

	printf("Bye!\n");

	return 0;
}
