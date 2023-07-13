#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static const int LEN = 20000;
static const int MIN = 1;
static const int MAX = 999999;

void gen_rand_arr(int * arr, int n, int min, int max);
void bubble_sort(int * arr, int n);

int main(int argc, char *argv []) {
	srand((unsigned int) time(0)); // 随机种子
	int arr[LEN];
	gen_rand_arr(arr, LEN, MIN, MAX);
	bubble_sort(arr, LEN);

	int i;
	for(i=0; i<LEN; i++) {
		printf("%-10d", arr[i]);
		if (i%10 == 9) {
			putchar('\n');
		}
	}
	puts("Done.");
	return 0;
}

void gen_rand_arr(int * arr, int n, int min, int max) {
	int i;
	for(i=0; i<n; i++) {
		*arr = rand() % (max-min) + min;
		arr++;
	}
}

void bubble_sort(int * arr, int n) {
	int i, j, t;
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-1-i; j++) {
			if(arr[j] < arr[j+1]) {
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
}
