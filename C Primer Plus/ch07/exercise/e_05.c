#include <stdio.h>

int main(void) {
	int cnt = 0;
	char ch;
	while((ch = getchar()) != '#') {
		switch(ch) {
			case '.':
				cnt++;
				printf("%c", '!');
				break;
			case '!':
				cnt++;
				printf("%c%c", '!', '!');
				break;
			default: printf("%c", ch);
		}
	}
	printf("\n总共替换了 %d 次\n", cnt);
	return 0;
}
