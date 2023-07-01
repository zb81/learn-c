#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIMIT 81

void ToUpper(char * str);
int PunctCount(const char * str);

int main(void) {
	char line[LIMIT];
	char * find;

	puts("Please enter a line:");
	fgets(line, LIMIT, stdin);
	// fgets 会收集换行符，所以需要将换行符替换为 '\0' ，表示字符串结尾
	find = strchr(line, '\n');
	if (find) *find = '\0';

	ToUpper(line);
	puts(line);
	printf("That line has %d punctuation characters.\n", PunctCount(line));

	return 0;
}

void ToUpper(char * str) {
	while(*str) {
		*str = toupper(*str);
		str++;
	}
}

int PunctCount(const char * str) {
	int count = 0;
	while(*str) {
		if (ispunct(*str++)) count++;
	}
	return count;
}
