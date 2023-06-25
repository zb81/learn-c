#include <stdio.h>

int main(void) {
	int i = 0;
	int p;
	p = (int)&i;
	// 取地址符右边，必须有一个明确的变量

	printf("%#x\n", p);
	printf("%p\n", &i);
	printf("%lu\n", sizeof(&i));
	return 0;
}
