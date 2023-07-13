#include <stdio.h>

int main(void) {
	const int MAX = 150;
	int n = 5;
	int w = 1;

	while(n <= MAX) {
		n = (n-w)*2;
		printf("第%d周, 有%d个朋友\n", w, n);
		w++;
	}

	return 0;
}
