#include <stdio.h>

int main(void) {
	float speed;
	float size;
	printf("输入下载速度(Mb/s): ");
	scanf("%f", &speed);
	printf("输入文件大小(MB): ");
	scanf("%f", &size);
	printf("以 %.2fMb/s 的速度，%.2fMB 的文件需要 %.2f 秒才能下载完成。\n", speed, size, size*8/speed);
	return 0;
}
