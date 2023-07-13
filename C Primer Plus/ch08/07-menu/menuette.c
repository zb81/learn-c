#include <stdio.h>

char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(void) {
	int choice;

	while((choice = get_choice()) != 'q') {
		switch(choice) {
			case 'a': printf("Buy low, sell high.\n"); break;
			case 'b': putchar('\a'); break;
			case 'c': count(); break;
			default: printf("Program error!\n"); break;
		}
	}
	printf("Bye.\n");
	return 0;
}

void count(void) {
	int n, i;
	printf("Count how far? Enter an integer: ");
	n = get_int();
	for(i=1; i<=n; i++) printf("%d\n", i);
}

char get_choice(void) {
	int ch;
	printf(
		"Welcome!\n"
		"a. advice			b. bell\n"
		"c. count			q. quit\n"
		"Enter the letter of your choice: "
	);
	ch = get_first();
	while(ch != 'q' && (ch < 'a' || ch > 'c')) {
		printf("Please respond with a, b, c, or q: ");
		ch = get_first();
	}
	return ch;
}

char get_first(void) {
	int ch;
	ch = getchar(); // 读取下一个字符
	while(getchar() != '\n') continue; // 跳过该行剩下的内容
	return ch;
}

int get_int(void) {
	int input;
	char ch;
	while(scanf("%d", &input) != 1) {
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(
			" is not an integer.\n"
			"Please enter an integer value, such as 25, -178, or 3: "
		);
	}
	while(getchar() != '\n') continue;
	return input;
}
