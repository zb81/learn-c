#include <stdio.h>
#include <string.h>

int main(void) {
	char ch[255];
	scanf("%s", ch);

	int len = strlen(ch);
	while(len > 0) {
		printf("%c ", ch[len-1]);
		len--;
	}
	printf("\n");

	return 0;
}
