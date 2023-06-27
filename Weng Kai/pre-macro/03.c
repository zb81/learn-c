#include <stdio.h>

#define cube(x) ((x)*(x)*(x))

int main(void) {
	int i;
	scanf("%d", &i);
	printf("%d\n", cube(i));
	return 0;
}
