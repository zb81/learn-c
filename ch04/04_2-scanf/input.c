/*
	scanf() 把输入的字符串转换成整数、浮点数、字符或字符串
	printf() 与它相反
*/
#include <stdio.h>

int main(void) {
	int age;		// 变量
	float assets; 	// 变量
	char pet[30]; 	// 字符数组

	printf("Enter your age, assets, and favorite pet.\n");

	// scanf() 使用空白(换行符、制表符、空格)把输入分成多个字段
	scanf("%d %f", &age, &assets); // 使用 & 获取变量的地址
	scanf("%s", pet); // 不用 &, 因为 pet 就是一个地址

	printf("%d $%.2f %s\n", age, assets, pet);

	return 0;
}
