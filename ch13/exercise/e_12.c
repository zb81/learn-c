#include <stdio.h>
#include <stdlib.h>

static char ch[] = { ' ', '.', ',', ':', '~', '<', '!', '+', '%', '#' };

int main(int argc, char *argv []) {
	int arr[20][30];
	char chArr[20][31];

	FILE * f;
	char c;
	int i=0, j=0;

	if ((f = fopen("numbers.txt", "r")) == NULL) {
		fprintf(stderr, "Can't open file\n");
		exit(EXIT_FAILURE);
	}

	while(fscanf(f, "%d", &arr[i][j++]) == 1) {
		if (j == 30) {
			i++;
			j = 0;
		}
	}
	fclose(f);

	for(i=0; i<20; i++) {
		for(j=0; j<31; j++) {
			if (j == 30)
				chArr[i][j] = '\0';
			else
				chArr[i][j] = ch[arr[i][j]];
		}
	}

	for(i=0; i<20; i++) {
		puts(chArr[i]);
	}

	return 0;
}
