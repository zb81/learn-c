#include <stdio.h>

int main(void) {
	int ch;
	long cnt = 0;
	while((ch = getchar()) != EOF) {
		if (ch == '\n') {
			printf("\\n:%d", ch);
		} else if (ch == '\t') {
			printf("\\t:%d", ch);
		} else if (ch < ' ') {
			printf("^%c", ch+64);
		} else {
			printf("%c:%d", ch, ch);
		}

		if (++cnt == 10) {
			printf("\n");
			cnt = 0;
		} else {
			printf(" ");
		}
	}

	return 0;
}
