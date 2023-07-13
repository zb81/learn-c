#include <stdio.h>
#define NAME "Zhu Bei"
#define ADDRESS "Nanjing, Jiangsu, China"
#define PLACE "Shishi Road, Qixia, 210049"
#define WIDTH 40

// 打印一行 *
void starbar(void);

int main(void) {
	starbar();
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	starbar();

	return 0;
}

void starbar(void) {
	int count;
	for(count=1; count<=WIDTH; count++) putchar('*');
	putchar('\n');
}
