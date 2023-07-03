#include <stdio.h>
#include <stdlib.h> // malloc() free()

void log_exit(const char * s);

int main(int argc, char *argv []) {
	double * ptd;
	int max;
	int number;
	int i = 0;

	puts("What is the maximum number of type double entries?");
	if (scanf("%d", &max) != 1) {
		log_exit("Number not correctly entered -- bye.");
	}

	ptd = (double *) malloc(max * sizeof(double));
	if (ptd == NULL) {
		log_exit("Memory allocation failed. Goodbye.");
	}

	// ptd 现在指向有 max 个元素的数组
	puts("Enter the values (q to quit): ");
	while(i<max && scanf("%lf", &ptd[i])==1) ++i;
	printf("Here are your %d entries:\n", number = i);
	for(i=0; i<number; i++) {
		printf("%7.2f ", ptd[i]);
		if (i%7 == 6) putchar('\n'); // 每行输出 7 个元素
	}
	if (i%7 != 0) putchar('\n');
	puts("Done.");
	free(ptd);

	return 0;
}

void log_exit(const char * s) {
	puts(s);
	exit(EXIT_FAILURE);
}
