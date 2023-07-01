#include <stdio.h>

char * find_chr(char *s, char c);

int main(int argc, char *argv []) {
	printf("%p\n", find_chr("abcdefg", 'z'));
	return 0;
}

char * find_chr(char *s, char c) {
	char * ret = NULL;
	while(*s) {
		if (*s == c) {
			ret = s;
			break;
		}
		s++;
	}
	return ret;
}
