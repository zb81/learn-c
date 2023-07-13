#include <stdio.h>

#define MIN 1
#define MAX 100

char get_choice_in_two(char c1, char c2);

int main(void) {
	int min = MIN;
	int max = MAX;

	printf(
		"在你心里想好一个 %d~%d 的整数，我会尝试把它猜出来。\n"
		"输入 y 表示我猜对了，n 表示我猜错了。\n"
		"Let's go!\n",
		min, max
	);

	int number = 50;
	char y_n;
	char g_l;

	printf("这个数是不是 %d (y/n): ", number);
	y_n = get_choice_in_two('y', 'n');
	while(y_n != 'y') {
		printf("猜大了还是猜小了(1 表示猜大了, 2 表示猜小了): ");
		g_l = get_choice_in_two('1', '2');
		if (g_l == '1') {
			max = number;
		} else {
			min = number;
		}

		number = (min+max)/2 == number ? number+1 : (min+max)/2;
		printf("这个数是不是 %d (y/n): ", number);
		y_n = get_choice_in_two('y', 'n');
	}
	printf("哈哈，猜对了，我牛不牛逼？\n");

	return 0;
}

char get_choice_in_two(char c1, char c2) {
	/*
		读取用户输入的第一个非空字符，如果是 y 或者 n，清空剩余字符，返回该字符
		如果不是，提示用户刚刚输入的字符无效，再次输入
	*/
	char ch = getchar();
	while(ch != c1 && ch != c2) {
		putchar(ch);
		while((ch = getchar()) != '\n') putchar(ch);
		printf(" 不是有效的输入，请输入 %c 或 %c: ", c1, c2);
		ch = getchar();
	}

	while(getchar() != '\n') continue;
	return ch;
}

