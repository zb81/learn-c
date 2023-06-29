#include <stdio.h>
#include <string.h>

#define NAME "Zhu Bei"
#define ADDRESS "Nanjing, Jiangsu, China"
#define PLACE "Shishi Road, Qixia, 210049"
#define WIDTH 40
#define SPACE ' '

// 打印一行 *
void show_n_char(char ch, int n);

int main(void) {
	int spaces;
	show_n_char('*', WIDTH);
	putchar('\n');

	show_n_char(SPACE, (spaces = (WIDTH-strlen(NAME))/2));
	printf("%s\n", NAME);

	show_n_char(SPACE, (spaces = (WIDTH-strlen(ADDRESS))/2));
	printf("%s\n", ADDRESS);

	show_n_char(SPACE, (spaces = (WIDTH-strlen(PLACE))/2));
	printf("%s\n", PLACE);

	show_n_char('*', WIDTH);
	putchar('\n');

	return 0;
}

void show_n_char(char ch, int n) {
	int count;
	for(count=1; count<=n; count++) putchar(ch);
}
