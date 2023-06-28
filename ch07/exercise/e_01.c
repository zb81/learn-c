#include <stdio.h>
#define SPACE ' '
#define BREAK '\n'

int main(void) {
	char ch;
	int charcnt = 0;
	int spacecnt = 0;
	int breakcnt = 0;

	while((ch = getchar()) != '#') {
		if (ch == SPACE) spacecnt++;
		else if (ch == BREAK) breakcnt++;
		else charcnt++;
	}
	printf("空格数量: %d\n", spacecnt);
	printf("换行数量: %d\n", breakcnt);
	printf("字符数量: %d\n", charcnt);

	return 0;
}
