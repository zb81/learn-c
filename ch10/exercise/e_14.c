#include <stdio.h>

void get_size(int * row, int * col);
void get_input(int row, int col, double (*ctn)[col]);
double avg_1d(const double arr[], int len);
double avg_2d(int row, int col, const double (*ctn)[col]);

int main(void) {
	int row, col;
	get_size(&row, &col);

	double ctn[row][col];

	get_input(row, col, ctn);

	int i;
	for(i=0; i<row; i++) {
		printf("arr%d's average: %g\n", i+1, avg_1d(ctn[i], col));
	}

	printf("Average of 2d: %g\n", avg_2d(row, col, ctn));

	return 0;
}

void get_input(int row, int col, double (*ctn)[col]) {
	int r;
	int c;
	for(r=0; r<row; r++) {
		printf("Enter %d numbers: ", col);
		for(c=0; c<col; c++) {
			scanf("%lf", &ctn[r][c]);
		}
	}
}

double avg_1d(const double arr[], int len) {
	double sum = 0;
	int i;
	for(i=0; i<len; i++) {
		sum += *arr++;
	}
	return sum/len;
}

double avg_2d(int row, int col, const double (*ctn)[col]) {
	double sum = 0;
	const double *start = ctn[0];

	int i;
	int total = row*col;
	for(i=0; i<total; i++) {
		sum += *start++;
	}
	return sum / total;
}

void get_size(int * row, int * col) {
	printf("Enter rows: ");
	scanf("%d", row);
	printf("Enter cols: ");
	scanf("%d", col);
}
