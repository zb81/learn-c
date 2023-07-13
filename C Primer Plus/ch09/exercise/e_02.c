#include <stdio.h>

void chline(char ch, unsigned int i, unsigned int j);

int main(void) {
	chline('*', 3, 40);
	return 0;
}

void chline(char ch, unsigned int i, unsigned int j) {
	int r, c;
	for(r=0; r<i; r++) {
		for(c=0; c<j; c++) {
			putchar(ch);
		}
		putchar('\n');
	}
}
