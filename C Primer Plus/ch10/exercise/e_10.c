#include <stdio.h>
#define LEN 4

void arr_plus(const int * arr1, const int * arr2, int * target, int len);
void print_arr(const int * arr, int len);

int main(void) {
	int arr1[LEN] = {2,4,5,8};
	int arr2[LEN] = {1,0,4,6};
	int target[LEN];
	arr_plus(arr1, arr2, target, LEN);
	print_arr(target, LEN);
	return 0;
}

void arr_plus(const int * arr1, const int * arr2, int * target, int len) {
	int i;
	for(i=0; i<len; i++)
		target[i] = *arr1++ + *arr2++;
}

void print_arr(const int * arr, int len) {
	int i;
	for(i=0; i<len; i++) {
		printf("%d", *arr++);
		if (i<len-1) putchar('-');
	}
	putchar('\n');
}
