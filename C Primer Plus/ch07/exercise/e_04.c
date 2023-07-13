#include <stdio.h>

int main(void) {
	int cnt = 0;
	char ch;
	while((ch = getchar()) != '#') {
		if (ch == '.') {
			cnt++;
			printf("%c", '!');
		} else if (ch == '!') {
			cnt++;
			printf("%c%c", '!', '!');
		} else {
			printf("%c", ch);
		}
	}
	printf("\n总共替换了 %d 次\n", cnt);
	return 0;
}
