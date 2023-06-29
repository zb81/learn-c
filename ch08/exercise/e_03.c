#include <stdio.h>
#include <ctype.h>

int main(void) {
	long uppercnt = 0, lowercnt = 0;
	int ch;
	while((ch = getchar()) != EOF) {
		if (islower(ch)) lowercnt++;
		if (isupper(ch)) uppercnt++;
	}
	printf("upper: %ld\n", uppercnt);
	printf("lower: %ld\n", lowercnt);
	return 0;
}
