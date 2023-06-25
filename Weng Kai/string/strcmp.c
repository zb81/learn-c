#include <stdio.h>
#include <string.h>

int mycmp(const char *s1, const char *s2) {
	while (*s1 == *s2 && *s1 != '\0') {
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

int main(void) {
	char s1[] = "abc";
	char s2[] = "abc";
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", mycmp(s1, s2));

	// printf("%d\n", 'a'-'A');
	// printf("%d\n", ' ');

	// 相等
	// if (strcmp(s1, s2) == 0) {}

	return 0;
}
