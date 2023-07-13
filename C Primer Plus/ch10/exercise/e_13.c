#include <stdio.h>
#define ROW 3
#define COL 5

void get_input(double (*ctn)[COL]);
double avg_1d(const double ctn[]);
double avg_2d(const double (*ctn)[COL]);

int main(void) {
	double ctn[ROW][COL];

	get_input(ctn);

	int i;
	for(i=0; i<ROW; i++) {
		printf("arr%d's average: %g\n", i+1, avg_1d(ctn[i]));
	}

	printf("Average of 2d: %g\n", avg_2d(ctn));

	return 0;
}

void get_input(double (*ctn)[COL]) {
	int r;
	int c;
	for(r=0; r<ROW; r++) {
		printf("Enter %d numbers: ", COL);
		for(c=0; c<COL; c++) {
			scanf("%lf", &ctn[r][c]);
		}
	}
}

double avg_1d(const double ctn[]) {
	double sum = 0;
	int i;
	for(i=0; i<COL; i++) {
		sum += *ctn++;
	}
	return sum/COL;
}

double avg_2d(const double (*ctn)[COL]) {
	double sum = 0;
	const double *start = ctn[0];

	int i;
	int total = ROW*COL;
	for(i=0; i<total; i++) {
		sum += *start++;
	}
	return sum / total;
}
