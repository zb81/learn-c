#include <stdio.h>
#include <string.h>

int main(void) {
	char first[20];
	char last[20];
	printf("Enter firstname: ");
	scanf("%s", first);
	printf("Enter lastname: ");
	scanf("%s", last);

	int first_len = strlen(first);
	int last_len = strlen(last);

	printf("%s %s\n", first, last);
	printf("%*d %*d\n", first_len, first_len, last_len, last_len);

	printf("%s %s\n", first, last);
	printf("%*d %*d\n", -first_len, first_len, -last_len, last_len);

	return 0;
}
