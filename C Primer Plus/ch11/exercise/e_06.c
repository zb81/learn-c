#include <stdio.h>
#include <stdbool.h>

bool is_within(char c, char * s);

int main(int argc, char *argv []) {
	printf("%d\n", is_within('g', "abcdefg"));
	return 0;
}

bool is_within(char c, char * s) {
	bool ret = false;

	while(*s) {
		if (*s++ == c) {
			ret = true;
			break;
		}
	}

	return ret;
}
