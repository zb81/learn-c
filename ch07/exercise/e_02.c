#include <stdio.h>

int main(void) {
	char ch;
	int cnt = 0;
	while((ch = getchar()) != '#') {
		if (ch != '\n') {
			cnt++;
			printf("%c-%d", ch, ch);
			if (cnt % 8 == 0) printf("\n");
			else printf("\t");
		} else {
			cnt = 0;
			printf("\n");
		}
	}
	return 0;
}
