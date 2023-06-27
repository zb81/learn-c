#include <stdio.h>

int main(void) {
	int i;
	int c;
	for(c = 0, i = 0; i < 6; i++) {
		int j;
		for(j = 0; j <= i; j++) {
			printf("%c", 'A' + c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
