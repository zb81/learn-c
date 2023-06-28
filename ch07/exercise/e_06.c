#include <stdio.h>

int main(void) {
	char last, curr;
	int cnt = 0;
	while((curr = getchar()) != '#') {
		if (last == 'e' && curr == 'i') {
			cnt++;
		}
		last = curr;
	}

	printf("ei 出现的次数: %d\n", cnt);
	return 0;
}
