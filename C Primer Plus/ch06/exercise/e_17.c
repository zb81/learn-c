#include <stdio.h>

int main(void) {
	double money = 1000000.0;
	const double rate = 0.08;
	int year=0;
	while(money > 0) {
		year++;
		money *= 1+rate;
		money -= 100000.0;
		printf("%d years later, $%lf\n", year, money);
	}
	printf("After %d years.\n", year);
	return 0;
}
