#include <stdio.h>

int main(void) {

	int i = 0;
	char *s = "Hello, world!";
	// s[0] = 'B';
	char *s2 = "Hello, world!";
	char s3[] = "Hello, world!";

	printf("&i=%p\n", &i);

	printf("s =%p\n", s);
	printf("s2=%p\n", s2);
	printf("s3=%p\n", s3);
	s3[0] = 'B';
	printf("Here! s3[0] = %c\n", s3[0]);

	return 0;
}
