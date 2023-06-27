#include <stdio.h>

int main(void) {
	int num;
	// scanf("%*d %d", &num); // *type -> 跳过指定 type 的一个输入
	scanf("%i", &num);
	printf("%d\n", num);
	return 0;
}
