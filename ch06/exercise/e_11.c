#include <stdio.h>

#define LEN 8

int main(void) {
	int arr[LEN];
	int i;
	for(i=0; i<LEN; i++) {
		scanf("%d", &arr[i]);
	}
	i--;
	while(i >= 0) {
		printf("%d ", arr[i--]);
	}
	printf("\n");
	return 0;
}
