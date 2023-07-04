#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv []) {

	FILE *fs, *fd; // fs -> 源文件, fd -> 目标文件
	char ctn[1];

	if (argc != 3) {
		fprintf(stderr, "Usage: %s source dest.\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fs = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't open file %s.\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((fd = fopen(argv[2], "w")) == NULL) {
		fprintf(stderr, "Can't create file %s.\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while(!feof(fs) && fread(ctn, sizeof(char), 1, fs)) {
		fwrite(ctn, sizeof(char), 1, fd);
	}

	fclose(fs);
	fclose(fd);
	puts("Done.");

	return 0;
}
