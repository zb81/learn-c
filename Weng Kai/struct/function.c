/* 输入一个日期，打印明天的日期 */
#include <stdio.h>
#include <stdbool.h>

struct date {
	int month;
	int day;
	int year;
};

bool isLeap(struct date d);
int numberOfDays(struct date d);

int main(void) {
	struct date today, tomorrow;

	printf("Enter today's date (mm dd yyyy): ");
	scanf("%i %i %i", &today.month, &today.day, &today.year);

	// 如果今天不是这个月的最后一天，将 day + 1, 其他字段不变
	if(today.day < numberOfDays(today)) {
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	} else if (today.month == 12) {
		// 如果是 12 月的最后一天，将年份加一，月份和天设为 1
		tomorrow.year = today.year + 1;
		tomorrow.month = 1;
		tomorrow.day = 1;
	} else {
		// 将月份加一，天设为 1，年份不变
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}

	printf("Today is %d-%02d-%02d.\n", today.year, today.month, today.day);
	printf("Tomorrow is %d-%02d-%02d.\n", tomorrow.year, tomorrow.month, tomorrow.day);
	return 0;
}

int numberOfDays(struct date d) {
	int days;
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (d.month == 2 && isLeap(d))
		days = 29;
	else
		days = daysPerMonth[d.month-1];

	return days;
}

bool isLeap(struct date d) {
	bool leap = false;

	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
		leap = true;

	return leap;
}
