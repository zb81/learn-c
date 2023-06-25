#include <stdio.h>

int main(void) {
	int a[10];

	printf("%p\n", &a);
	printf("%p\n", a);
	printf("%p\n", &a[0]);
	printf("%p\n", &a[1]); // 相邻元素的地址差距 -> 4
	printf("%p\n", &a[2]);
	printf("%p\n", &a[3]);

	return 0;
}
