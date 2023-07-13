#include <stdio.h>

int call_count(void);

int main(int argc, char *argv []) {
	int i;
	for(i=0; i<10; i++) {
		printf("function been called %d times.\n", call_count());
	}
	return 0;
}

int call_count(void) {
	static int count;

	return ++count;
}
