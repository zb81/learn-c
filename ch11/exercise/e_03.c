#include <stdio.h>
#include <stdbool.h>

void get_word(char w[]);

int main(int argc, char *argv []) {
	char w[81];
	get_word(w);
	printf("%s\n", w);
	return 0;
}

void get_word(char w[]) {
	bool is_word = false;
	char ch;
	int i = 0;

	do {
		ch = getchar();
		if (ch != ' ' && ch != '\t' && ch != '\n') {
			is_word = true;
			w[i++] = ch;
		}
	} while(!is_word || (ch != ' ' && ch != '\t' && ch != '\n'));
}
