#include <stdio.h>

void put1(const char * string);

int main(void) {
	put1("Hello, \n\nworld!");
	return 0;
}

void put1(const char * string) {
	while(*string) putchar(*string++);
}
