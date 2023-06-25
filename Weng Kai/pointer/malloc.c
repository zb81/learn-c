#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int* a;
	int i;

	printf("输入数组的长度: ");
	scanf("%d", &n);

	// int a[n]; // C99

	// 动态分配内存空间
	a = (int*)malloc(n*sizeof(int));

	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for(i = n-1; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	printf("\n");

	free(a); // 释放内存

	return 0;
}
