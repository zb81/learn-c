#include <stdio.h>

int main(void) {
	char *a[12];
	a[0] = "January";
	a[1] = "February";
	a[2] = "March";
	a[3] = "April";
	a[4] = "May";
	a[5] = "June";
	a[6] = "July";
	a[7] = "August";
	a[8] = "September";
	a[9] = "October";
	a[10] = "November";
	a[11] = "December";

	int n;
	printf("输入月份: ");
	scanf("%d", &n);
	printf("%s\n", a[n-1]);

	return 0;
}
