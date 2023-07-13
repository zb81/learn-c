#include <stdio.h>
#define ROW 3
#define COL 5

void double_arr_2d(int row, int col, int (*arr)[col]);
void print_arr_2d(int row, int col, const int (*arr)[col]);

int main(void) {
	int arr[ROW][COL] = {
		{1,2,3,4,5,},
		{6,7,8,9,10,},
		{11,12,13,14,15,},
	};
	double_arr_2d(ROW, COL, arr);
	print_arr_2d(ROW, COL, arr);

	return 0;
}

void double_arr_2d(int row, int col, int (*arr)[col]) {
	int i, j;
	for(i=0; i<row; i++) {
		for(j=0; j<col; j++) {
			arr[i][j] *= 2;
		}
	}
}

void print_arr_2d(int row, int col, const int (*arr)[col]) {
	int r, c;
	for(r=0; r<row; r++) {
		for(c=0; c<col; c++) {
			printf("%5d", arr[r][c]);
		}
		putchar('\n');
	}
}
