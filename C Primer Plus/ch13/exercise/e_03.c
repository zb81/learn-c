#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define NAMELEN 40

void str_upper(char * dest, char * src);

int main(void) {
	char filename[NAMELEN];
	char destname[NAMELEN];
	FILE *fs, *fd; // fs -> 源文件, fd -> 目标文件
	char c;

	printf("Enter filename: ");
	scanf("%s", filename);
	strcpy(destname, filename);
	strcat(destname, "_copy");

	printf("%s %s\n", filename, destname);

	if ((fs = fopen(filename, "r")) == NULL) {
		fprintf(stderr, "Can't open file %s.\n", filename);
		exit(EXIT_FAILURE);
	}
	if ((fd = fopen(destname, "w")) == NULL) {
		fprintf(stderr, "Can't create file %s.\n", destname);
		exit(EXIT_FAILURE);
	}

	while((c = fgetc(fs)) != EOF) {
		fputc(toupper(c), fd);
	}

	fclose(fs);
	fclose(fd);

	puts("Done.");

	return 0;
}

void str_upper(char * dest, char * src) {
	while(*src)
		*dest++ = toupper(*src++);
}
