#include <stdio.h>

#define MONTHS 12
#define YEARS   5

float year_tot(const float *year);
void print_total(const float (*rain)[MONTHS]);
void print_month_avg(const float (*rain)[MONTHS]);

int main(void) {
	const float rain[YEARS][MONTHS] = {
		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
	};

	print_total(rain);

	print_month_avg(rain);

	return 0;
}

float year_tot(const float *year) {
	float tot = 0;
	int m;
	for(m=0; m<MONTHS; m++) {
		tot += *year++;
	}
	return tot;
}

void print_total(const float (*rain)[MONTHS]) {
	printf(" YEAR    RAINFALL  (inches)\n");
	float total = 0;
	float subtot = 0;
	int i;
	for(i=0; i<YEARS; i++) {
		subtot = year_tot(*rain++);
		printf("%5d %15.1f\n", 2010 + i, subtot);
		total += subtot;
	}
	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
}

void print_month_avg(const float (*rain)[MONTHS]) {
	printf("MONTHLY AVERAGES:\n\n");
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
	printf(" Nov  Dec\n");

	int month, year;
	float total = 0;

	for (month = 0; month < MONTHS; month++) {
		for (year = 0; year < YEARS; year++)
			total += rain[year][month];
		printf("%4.1f ", total / YEARS);
	}
	printf("\n");
}
