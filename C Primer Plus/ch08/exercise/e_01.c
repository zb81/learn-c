#include <stdio.h>

int main(void) {
	long cnt = 0;
	while(getchar() != EOF) cnt++;
	printf("Total: %ld\n", cnt);
	return 0;
}
