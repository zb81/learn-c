#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int n;
	do {
		printf("输入一个正整数: ");
		scanf("%d", &n);

		int i;
		bool isPrime;
		printf("小于或等于 %d 的素数: \n", n);
		for(i=2; i<=n; i++) {
			isPrime = true;
			int j;
			for(j=2; j*j<=i; j++) {
				if (i%j==0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime) {
				printf("%d ", i);
			}
		}
		printf("\n");
	} while (n > 0);

	return 0;
}
