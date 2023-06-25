#include <stdio.h>

int main(void) {
	int sum = 0, count = 0;
	int a;

	// 定义数组
	int number[100];

	scanf("%d", &a);
	while(a != -1) {
		// 对数组中的元素赋值
		number[count] = a;

		{
			printf("%d\t", count);
			int i;
			for(i=0; i<=count; i++) {
				printf("%d\t", number[i]);
			}
			printf("\n");
		}

		sum += a;
		count++;
		scanf("%d", &a);
	}

	if (count > 0) {
		printf("Average: %f\n", 1.0 * sum / count);
		int i;
		for(i=0; i<count; i++) {
			// 使用数组元素、遍历数组
			if (number[i] > sum / count) {
				printf("%d\n", number[i]);
			}
		}
	}

  return 0;
}
