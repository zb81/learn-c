#include <stdio.h>

void minmax(int a[], int len, int *min, int *max);

int main(void) {
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int min, max;
	printf("main sizeof(a) = %lu\n", sizeof(a));
	printf("main a = %p\n", a);
	minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
	printf("a[0] = %d\n", a[0]);
	printf("min=%d, max=%d\n", min, max);

	int *p = &min;
	printf("*p = %d\n", *p);
	printf("p[0] = %d\n", p[0]);

	printf("*a = %d\n", *a); // 数组的第一个元素

	return 0;
}

// 函数参数表中的数组，传递过来的是指针
void minmax(int *a, int len, int *min, int *max) {
	int i;
	printf("minmax sizeof(a) = %lu\n", sizeof(a));
	printf("minmax a = %p\n", a);
	a[0] = 1000;

	*min = *max = a[0];
	for(i = 1; i < len; i++) {
		if (a[i] > *max) {
			*max = a[i];
		}
		if (a[i] < *min) {
			*min = a[i];
		}
	}
}
