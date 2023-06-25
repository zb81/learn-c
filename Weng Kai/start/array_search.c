#include <stdio.h>

int search(int n, int arr[], int len);

int main(void) {
	int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,32};

	int x;
	printf("输入一个数: ");
	scanf("%d", &x);

	int i = search(x, a, sizeof(a)/sizeof(a[0]));
	if (i != -1) {
		printf("%d 的索引为 %d\n", x, i);
	} else {
		printf("%d 不存在\n", x);
	}

	return 0;
}

int search(int n, int arr[], int len) {
	int ret = -1;
	int i;
	for(i = 0; i < len; i++) {
		if (arr[i] == n) {
			ret = i;
			break;
		}
	}
	return ret;
}
