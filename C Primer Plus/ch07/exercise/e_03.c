#include <stdio.h>

int main(void) {
	int oddcnt = 0;
	int evencnt = 0;
	double oddsum = 0;
	double evensum = 0;

	int num;
	printf("Enter a integer: ");
	scanf("%d", &num);
	while(num != 0) {
		if (num%2 == 0) {
			evencnt++;
			evensum+=num;
		} else {
			oddcnt++;
			oddsum+=num;
		}
		printf("Enter next integer (0 to quit): ");
		scanf("%d", &num);
	}
	printf("偶数个数: %d, 偶数的平均数: %lf\n", evencnt, evensum/evencnt);
	printf("奇数个数: %d, 奇数的平均数: %lf\n", oddcnt, oddsum/oddcnt);

	return 0;
}
