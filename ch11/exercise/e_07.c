#include <stdio.h>

char * my_strncpy(char * s1, const char * s2, int n);

int main(int argc, char *argv []) {
	char s[10];
	printf("%s\n", my_strncpy(s, "hello", 10));
	return 0;
}

char * my_strncpy(char * s1, const char * s2, int n) {
	int i;
	for(i=0; i<n; i++) {
		if (*s2) *s1++ = *s2++;
		else break;
	}
	s1[i] = '\0';
	return s1;
}
