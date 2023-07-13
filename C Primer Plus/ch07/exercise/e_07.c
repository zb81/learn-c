#include <stdio.h>

#define HOURS 40
#define BASIC 10.00
#define OVER (BASIC * 1.5)
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define LIMIT1 300
#define LIMIT2 450

int main(void) {
	double hours;
	double salary;
	double tax;

	printf("输入一周工作的小时数: ");
	scanf("%lf", &hours);
	if (hours <= HOURS) {
		salary = BASIC*hours;
	} else {
		salary = HOURS*BASIC + (hours-HOURS)*OVER;
	}

	if (salary <= LIMIT1) {
		tax = salary * RATE1;
	} else if (salary <= LIMIT2) {
		tax = LIMIT1*RATE1 + (salary-LIMIT1)*RATE2;
	} else {
		tax = LIMIT1*RATE1 + (LIMIT2-LIMIT1)*RATE2 + (salary-LIMIT2)*RATE3;
	}

	printf("工资总额: $%.2f\n", salary);
	printf("税金: $%.2f\n", tax);
	printf("净收入: $%.2f\n", salary-tax);


	return 0;
}
