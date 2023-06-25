#include <stdio.h>

// 函数声明
int sum(int a, int b);

int main(void) {
	printf("1+...+10 = %d\n", sum(1, 10));
	printf("20+...+30 = %d\n", sum(20, 30));
	printf("35+...+45 = %d\n", sum(35, 45));
	return 0;
}

// 函数定义
int sum(int a, int b) {
	return (a+b)*(b-a+1) / 2;
}
