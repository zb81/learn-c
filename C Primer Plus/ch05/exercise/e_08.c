#include <stdio.h>

int main(void) {
	int divisor; // 除数
	int dividend; // 被除数

	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &dividend);
	printf("Now enter the first operand: ");
	scanf("%d", &divisor);
	while(divisor > 0) {
		printf("%d %% %d is %d\n", divisor, dividend, divisor % dividend);
		printf("Enter next number for first operand (<=0 to quit): ");
		scanf("%d", &divisor);
	}
	printf("Done\n");

	return 0;
}
