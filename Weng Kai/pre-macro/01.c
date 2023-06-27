#include <stdio.h>

// const double PI = 3.14159;

// 定义一个宏，编译器开始编译之前，编译预处理程序会把程序中的名字换成值
#define PI 3.14159
#define FORMAT "%f\n"
#define PI2 2*PI // pi * 2
#define PRT printf("%f ", PI); \
			printf("%f\n", PI2)

int main(void) {
	// printf(FORMAT, PI2*3.0);
	PRT;

	return 0;
}
