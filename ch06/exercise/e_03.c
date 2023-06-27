#include <stdio.h>

int main(void) {
	int i;
	for(i = 0; i < 6; i++) {
		int j;
		for(j = 0; j <= i; j++) {
			printf("%c", 'F'-j);
		}
		printf("\n");
	}
	return 0;
}
