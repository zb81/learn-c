#include <stdio.h>

int main(void) {
	float cup;
	printf("输入杯数: ");
	scanf("%f", &cup);
	printf("品脱: %f\n", cup / 2);
	printf("盎司: %f\n", cup * 8);
	printf("汤勺: %f\n", cup * 8 * 2);
	printf("茶勺: %f\n", cup * 8 * 2 * 3);
	return 0;
}
