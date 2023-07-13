#include <stdio.h>

int count_on(int n);

int main(int argc, char *argv []) {
	printf("%d: %d\n", 10, count_on(10));
	printf("%d: %d\n", 15, count_on(15));
	printf("%d: %d\n", 23, count_on(23));
	printf("%d: %d\n", 15643, count_on(15643));
	return 0;
}

int count_on(int n) {
	int ret = 0;
	while(n>0) {
		if ((n&1) == 1) ret++;
		n >>= 1;
	}

	return ret;
}
