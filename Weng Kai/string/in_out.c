#include <stdio.h>

int main(void) {
	char word[8];
	char word2[8];

	// 读入一个单词
	scanf("%7s", word);
	scanf("%7s", word2);
	printf("%s##%s##\n", word, word2);

	return 0;
}
