#include <stdio.h>
#define SIZE 26

int main(void) {
	int i;
	char letters[SIZE];

	for(i = 0; i < SIZE; i++) {
		letters[i] = 'a' + i;
		printf("%c ", letters[i]);
	}
	printf("\n");
	return 0;
}
