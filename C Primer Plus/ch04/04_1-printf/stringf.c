#include <stdio.h>

#define BLURB "Authentic imitation!"

int main(void) {
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);

	printf("The %s family just may be $%.2f dollars richer!\n", "test", 150.0);

	return 0;
}
