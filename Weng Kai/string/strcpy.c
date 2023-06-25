#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* mycpy(char *dst, const char *src) {
	char *ret = dst;
	while((*dst++ = *src++));
	*dst = '\0';
	return ret;
}

int main(void) {
	char str[] = "Hello";

	char *dst = (char*)malloc(strlen(str)+1);

	char *r = mycpy(dst, str);

	printf("%s\n", dst);

	free(dst);

	return 0;
}
