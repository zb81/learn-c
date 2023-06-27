#include <stdio.h>

int main(void) {
	const char start = 'A';
	char letter;
	printf("Enter a upper letter (A-Z): ");
	scanf("%c", &letter);

	const int rows = letter - start + 1;
	int i;
	for(i = 0; i < rows; i++) {
		// 空格
		int j;
		for(j = rows - 1; j > i; j--) {
			printf(" ");
		}

		// 升序
		for(j = 0; j <= i; j++) {
			printf("%c", start + j);
		}
		// 降序
		for(j-=2; j >= 0; j--) {
			printf("%c", start + j);
		}
		printf("\n");
	}

	return 0;
}
