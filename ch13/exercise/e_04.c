#include <stdio.h>

int main(int argc, char *argv []) {
	FILE *f;
	char c;

	if (argc < 2) {
		fprintf(stderr, "Usage: %s file1 file2 file3 ...\n", argv[0]);
	}

	int i;
	for(i=1; i<argc; i++) {
		if ((f = fopen(argv[i], "r")) == NULL) {
			fprintf(stderr, "Can't open file %s.\n", argv[i]);
			continue;
		}

		while((c = fgetc(f)) != EOF)
			putchar(c);
		fclose(f);
	}

	return 0;
}
