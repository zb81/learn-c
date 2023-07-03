#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void read_words(char * * words);

static int word_cnt;

int main(int argc, char *argv []) {
	printf("How many words do you wish to enter: ");
	scanf("%d", &word_cnt);

	char **words = (char **) malloc(word_cnt * sizeof(char *));
	printf("Enter %d words now:\n", word_cnt);

	read_words(words);

	printf("Here are your words:\n");
	int i;
	for(i=0; i<word_cnt; i++) {
		printf("%s\n", words[i]);
	}

	return 0;
}

void read_words(char * * words) {
	int i = 0;
	bool isWord = false;
	char ch;
	int letters = 0;
	char * ctn;

	while(true) {
		ch = getchar();
		if (ch == ' ' || ch == '\t' || ch == '\n') {
			if (isWord) {
				strncpy((words[i] = (char *) malloc(letters * sizeof(char))), ctn, letters);
				free(ctn);
				if (++i == word_cnt) {
					break;
				};
			}
			letters = 0;
			isWord = false;
		} else {
			if (!isWord) {
				ctn = (char *) malloc(100 * sizeof(char));
				isWord = true;
			}
			ctn[letters++] = ch;
		}
	}
}
