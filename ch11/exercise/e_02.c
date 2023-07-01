#include <stdio.h>

#define SIZE 5

void my_gets(char s[], int n);

int main(int argc, char *argv []) {
	char s[SIZE];
	my_gets(s, SIZE);

	int i;
	for(i=0; i<SIZE; i++) {
		putchar(s[i]);
	}

	return 0;
}

void my_gets(char s[], int n) {
	int i;
	char ch;
	for(i=0; i<n; i++) {
		ch = getchar();
		if (ch == ' ' || ch == '\n' || ch == '\t') {
			break;
		}
		s[i] = ch;
	}
}
