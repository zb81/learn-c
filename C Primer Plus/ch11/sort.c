#include <stdio.h>
// #include <string.h>

void selection_sort(double * arr, int n);
void bubble_sort(double * arr, int n);

int main(void) {
	// int n = strcmp("B", "A");
	// printf("%d\n", n);

	double arr[] = {3.5, 1.23, 2.5, 6.5, 10.3, 4.52};
	// selection_sort(arr, 6);
	bubble_sort(arr, 6);

	int i;
	for(i=0; i<6; i++) {
		printf("%g ", arr[i]);
	}
	putchar('\n');

	return 0;
}

void selection_sort(double * arr, int n) {
	/*
		选择排序：
			外层循环 i，从索引 0 开始
			内存循环 j，从 i+1 开始，依次和索引 i 的元素进行比较，如果较小，则交换。
			如此，内存循环结束后，最小值一定位于索引 i

			然后，i++，不断找出剩余元素中最小的值，放在 i+1 i+2 i+3 ... 的位置
	*/

	int i, j;
	double t;

	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++) {
			if (arr[i] > arr[j]) {
				// swap
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
}

void bubble_sort(double * arr, int n) {
	/*
		冒泡排序：
			外层循环 i 从 0 开始，到数组倒数第二个位置结束，不断找出最大值
			(不需要跑满 n 次循环，只需 n-1，因为只要 n-1 个元素的位置确定了，最后一个元素的位置也就确定了)

			内层循环 j 从 0 开始，到数组倒数第(2+i)个位置结束
			(因为第 i 轮外层循环的时候，表明最后 i 个位置的元素已经是最大的了，只需循环 n-i-1 次)

			依次比较 j 和 j+1 的元素，如果 arr[j] > arr[j+1]，交换。
			如此，内层循环结束后，最大的元素一定位于索引 j+1，即数组最后。
	*/
	int i, j;
	double t;
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-1-i; j++) {
			if (arr[j] > arr[j+1]) {
				// swap
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
}
