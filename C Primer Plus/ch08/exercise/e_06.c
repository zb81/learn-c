#include <stdio.h>

char get_first();

int main(void) {
	char ch = get_first();
	printf("%c\n", ch);
	return 0;
}

// 返回读取的第一个非空白字符
char get_first() {
	char ch;
	while((ch = getchar()) == ' ') continue;
	while(getchar() != '\n') continue;
	return ch;
}
