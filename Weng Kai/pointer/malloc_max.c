#include <stdio.h>
#include <stdlib.h>

int main(void) {
	void *p;
	int cnt = 0;
	// 如果分配失败，返回 0，或者叫 NULL
	while((p=malloc(100*1024*1024))) {
		cnt++;
	}
	printf("分配了%d00MB的空间\n", cnt);

	return 0;
}
