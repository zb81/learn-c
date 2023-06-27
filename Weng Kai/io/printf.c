#include <stdio.h>

int main(void) {
	printf("%+09d\n", 123);
	printf("%-9d\n", -123); // - -> 左对齐

	printf("%9.2f\n", 123.0); // 9 -> 整个输出占九个位置

	printf("%*d\n", 6, 123);

	printf("%hhd\n", (char)12345);

	int num;
	printf("%d%n\n", 12345, &num);
	printf("%d\n", num);

	return 0;
}
