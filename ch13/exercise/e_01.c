#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ch; // 读取文件时，存储每个字符的地方
	FILE *fp; // 文件指针
	unsigned long count = 0;

	char filename[40];
	fprintf(stdout, "Enter filename: ");
	scanf("%s", filename);

	if ((fp = fopen(filename, "r")) == NULL) {
		printf("Can't open %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while((ch = getc(fp)) != EOF) {
		putc(ch, stdout);
		count++;
	}

	if (fclose(fp) != 0) {
		printf("Error in closing file %s\n", filename);
	}

	printf("File %s has %lu characters.\n", filename, count);

	return 0;
}

