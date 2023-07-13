#include <stdio.h>

typedef struct {
	char name[3];
	int days;
	int no;
} MONTH;

const MONTH monthes[12] = {
	{"Jan", 31, 1},
	{"Feb", 28, 2},
	{"Mar", 31, 3},
	{"Apr", 30, 4},
	{"May", 31, 5},
	{"Jun", 30, 6},
	{"Jul", 31, 7},
	{"Aug", 31, 8},
	{"Sep", 30, 9},
	{"Oct", 31, 10},
	{"Nov", 30, 11},
	{"Dec", 31, 12},
};

int total_days(int n);

int main(int argc, char *argv []) {
	int n;

	printf("Enter month (1-12): ");
	scanf("%d", &n);
	if (n>=1 && n<=12)
		printf("Total days: %d\n", total_days(n));
	printf("Bye.\n");

	return 0;
}

int total_days(int n) {
	int ret = 0;
	int i;
	for(i=0; i<n; i++) {
		ret += monthes[i].days;
	}
	return ret;
}
