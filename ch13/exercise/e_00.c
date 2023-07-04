#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 256

int main(int argc, char *argv []) {
	FILE * f;
	char * line;

	// 判断参数数量
	if (argc != 3) {
		fprintf(stderr, "Usage: %s char filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((f = fopen(argv[2], "r")) == NULL) {
		fprintf(stderr, "Can't open %s.\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while(fgets(line, LEN, f)) {
		if (strchr(line, *argv[1]))
			fputs(line, stdout);
	}

	return 0;
}
