#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'

int main(void) {
	int charcount = 0;
	int rowcount = 0;
	int wordcount = 0;
	char ch;
	bool inword = false;
	printf("Enter text to be analyzed (| to terminate):\n");

	while((ch = getchar()) != STOP) {
		// 输入第一个字符，开启新的一行
		// 输入换行符，也开启新的一行
		if (ch == '\n' || charcount == 0) {
			rowcount++;
		}
		charcount++;
		if (!isspace(ch) && !inword) {
			inword = true;
			wordcount++;
		}
		if (isspace(ch) && inword) {
			inword = false;
		}
	}
	printf("单词数: %d\n", wordcount);
	printf("字符数: %d\n", charcount);
	printf("行数: %d\n", rowcount);

	return 0;
}
