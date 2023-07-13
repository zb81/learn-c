#include <stdio.h>
#define N 3
#define M 5

void copy_arr_2d(int n, int m, double (*target)[m], const double (*source)[m]);
void print_arr_2d(int n, int m, const double (*arr)[m]);

int main(void) {
	double source[N][M] = {
		{1.1, 2.2, 3.3, 4.4, 5.5,},
		{1.1, 2.2, 3.3, 4.4, 5.5,},
		{1.1, 2.2, 3.3, 4.4, 5.5,},
	};

	double target[N][M];
	copy_arr_2d(N, M, target, source);

	print_arr_2d(N, M, target);

	return 0;
}

void copy_arr_2d(int n, int m, double (*target)[m], const double (*source)[m]) {
	int r, c;
	for(r=0; r<n; r++) {
		for(c=0; c<m; c++) {
			target[r][c] = source[r][c];
		}
	}
}

void print_arr_2d(int n, int m, const double (*arr)[m]) {
	int r, c;
	for(r=0; r<n; r++) {
		for(c=0; c<m; c++) {
			printf("%.2f", arr[r][c]);
			if (c < m-1) putchar('-');
		}
		putchar('\n');
	}
}


