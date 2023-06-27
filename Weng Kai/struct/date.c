#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int main(void) {
	struct date today;

	today.month = 6;
	today.day = 26;
	today.year = 2023;

	printf("Today's date is %i-%02i-%02i.\n",
		today.year, today.month, today.day);

	return 0;
}
