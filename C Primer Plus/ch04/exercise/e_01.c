#include <stdio.h>

int main(void) {
	char first[20];
	char last[20];
	printf("Enter your firstname: ");
	scanf("%s", first);
	printf("Enter your lastname: ");
	scanf("%s", last);

	printf("%s,%s\n", first, last);
	return 0;
}
