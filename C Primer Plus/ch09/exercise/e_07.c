#include <stdio.h>

int alpha_pos(char ch);

int main(void) {
	char ch;
	int pos;
	while((ch = getchar()) != EOF) {
		pos = alpha_pos(ch);
		if (pos != -1) {
			printf("%c is a alpha, pos is %d\n", ch, pos);
		} else {
			printf("%c is not a alpha\n", ch);
		}
	}
	return 0;
}

int alpha_pos(char ch) {
	int ret = -1;
	const char l_min = 'a';
	const char l_max = 'z';
	const char u_min = 'A';
	const char u_max = 'Z';

	if (ch >= l_min && ch <= l_max) {
		ret = ch - l_min + 1;
	}
	if (ch >= u_min && ch <= u_max) {
		ret = ch - u_min + 1;
	}

	return ret;
}
