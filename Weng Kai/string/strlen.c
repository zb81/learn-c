#include <stdio.h>
#include <string.h>

unsigned long mylen(const char *s) {
	int idx = 0;
	while(s[idx] != '\0') {
		idx++;
	}
	return idx;
}

int main(void) {
	char line[] = "Hello";
	printf("strlen=%lu\n", strlen(line));
	printf("mylen =%lu\n", mylen(line));
	printf("sizeof=%lu\n", sizeof(line));

	return 0;
}
