#include <stdio.h>

const int month_days[] = {
	31,28,31,30,31,30,31,31,30,31,30,31
};

int main(int argc, char *argv []) {
	int y,m,d;
	printf("Enter date (eg. 2023-02-28): ");
	scanf("%d-%d-%d", &y, &m, &d);

	int days = 0;
	int i;
	for(i=0;i<m;i++) {
		if (i == m-1) {
			days += d;
			break;
		}
		days += month_days[i];
	}
	printf("Days: %d\n", days);

	return 0;
}
