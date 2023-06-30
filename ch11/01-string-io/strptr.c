#include <stdio.h>

int main(void) {
	printf("%s, %p, %c\n", "We", "are", *"space farers");

	const char m[] = "zb";
	printf("%zd\n", sizeof m); // 3

	return 0;
}
