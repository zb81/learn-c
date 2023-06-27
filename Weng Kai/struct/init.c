#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int main(void) {
	struct date today = {6, 26, 2023};
	struct date thisMonth = {.month=6, .year=2023};

	printf("Today's date is %i-%02i-%02i.\n",
		today.year, today.month, today.day);

	printf("This month's date is %i-%02i-%02i.\n",
		thisMonth.year, thisMonth.month, thisMonth.day);

	return 0;
}
