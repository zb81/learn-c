#include <stdio.h>
#define MINUTES 60

int main(void) {
	int m;
	printf("Enter minutes(<=0 to quit): ");
	scanf("%d", &m);
	while(m > 0) {
		printf("%d minutes -> %d hours and %d minutes\n", m, m/MINUTES, m%MINUTES);
		printf("Enter next minutes(<=0 to quit): ");
		scanf("%d", &m);
	}
	printf("Done!\n");
	return 0;
}
