#include <stdio.h>

int put2(const char * string);

int main(void) {
	char * str = "Hello, world!";
	int count = put2(str);
	printf("str has %d char.\n", count);

	return 0;
}

int put2(const char * string) {
	int count = 0;
	while(*string) {
		putchar(*string++);
		count++;
	}
	putchar('\n');
	return count;
}
