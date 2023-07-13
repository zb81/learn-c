#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {
	bool inword = false;
	double wordcnt = 0, lettercnt = 0;

	int ch;
	while((ch = getchar()) != EOF) {
		/* 当读取到字母或数字时，单词开始；读取到标点符号或空格，单词结束； */
		if (!ispunct(ch) && ch != ' ') {
			lettercnt++;
			if (!inword) {
				wordcnt++;
				inword = true;
			}
		} else {
			inword = false;
		}
	}
	printf("\nAverage letter count: %.2f\n", lettercnt/wordcnt);

	return 0;
}
