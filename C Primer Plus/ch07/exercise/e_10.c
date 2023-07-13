#include <stdio.h>

#define BASIC 0.15
#define OVER 0.28

void printMenu();

int main(void) {
	int opt;
	double threshold;
	double money;
	double tax;

	do {
		printMenu();
		scanf("%d", &opt);
		if (opt != 5){
			switch(opt) {
				case 1: threshold = 17850.0; break;
				case 2: threshold = 23900.0; break;
				case 3: threshold = 29750.0; break;
				case 4: threshold = 14875.0; break;
				default: continue;
			}
			printf("输入应纳税收入: ");
			scanf("%lf", &money);
			if (money <= threshold) {
				tax = money * BASIC;
			} else {
				tax = threshold*BASIC + (money-threshold)*OVER;
			}
			printf("应缴税额: ￥%.2f\n\n", tax);
		}
	} while(opt != 5);

	printf("再见\n");

	return 0;
}

void printMenu() {
	printf(
		"*****************************************************************\n"
		"1. 单身 (17850元按15%%计，超出部分按28%%计)\n"
		"2. 户主 (23900元按15%%计，超出部分按28%%计)\n"
		"3. 已婚，共有 (29750元按15%%计，超出部分按28%%计)\n"
		"4. 已婚，离异 (14875元按15%%计，超出部分按28%%计)\n"
		"5. 退出\n"
		"*****************************************************************\n"
		"选择纳税类别: "
	);
}
