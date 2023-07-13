/* while1.c -- 注意花括号的使用 */
/* 糟糕的代码创建了一个无限循环 */
#include <stdio.h>
int main(void)
{
	int n = 0;

	// 无限循环
	while (n < 3)
		printf("n is %d\n", n);
		n++; // 缩进是为了给人看的，不是计算机编译器的要求
	printf("That's all this program does\n");

	return 0;
}
