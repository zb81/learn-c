#include <stdio.h>

#define HOURS 40
#define OVER 1.5
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define LEVEL1 300
#define LEVEL2 450

void printMenu();

int main(void) {
	double hours;
	double salary;
	double tax;
	char opt;
	double basic;
	double over;

	printMenu();
	scanf("%c", &opt);
	while(opt != '5') {
		switch(opt) {
			case '1':
				basic = 8.75;
				break;
			case '2':
				basic = 9.33;
				break;
			case '3':
				basic = 10.00;
				break;
			case '4':
				basic = 11.20;
				break;
			default:
				scanf("%c", &opt);
				continue;
		}
		printf("您选择的基本工资是: %.2f\n", basic);
		over = basic * OVER;

		printf("输入工作小时数: ");
		scanf("%lf", &hours);
		if (hours <= HOURS) {
			salary = basic*hours;
		} else {
			salary = HOURS*basic + (hours-HOURS)*over;
		}

		if (salary <= LEVEL1) {
			tax = salary * RATE1;
		} else if (salary <= LEVEL2) {
			tax = LEVEL1*RATE1 + (salary-LEVEL1)*RATE2;
		} else {
			tax = LEVEL1*RATE1 + (LEVEL2-LEVEL1)*RATE2 + (salary-LEVEL2)*RATE3;
		}

		printf("工资总额: $%.2f\n", salary);
		printf("税金: $%.2f\n", tax);
		printf("净收入: $%.2f\n", salary-tax);
		printMenu();
		scanf("%c", &opt);
	}
	printf("Bye\n");

	return 0;
}

void printMenu() {
	printf(
		"*****************************************************************\n"
		"Enter the number corresponding to the desired pay rate or action:\n"
		"1) $8.75/hr                        2) $9.33/hr\n"
		"3) $10.00/hr                       4) $11.20/hr\n"
		"5) quit\n"
		"*****************************************************************\n"
	);
}
