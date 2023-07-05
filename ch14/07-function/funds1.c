#include <stdio.h>

double sum(double x, double y);

#define FUNDLEN	50

struct funds {
	char	bank[FUNDLEN];
	double	bankfund;
	char	save[FUNDLEN];
	double	savefund;
};

int main(int argc, char *argv []) {
	struct funds stan = {
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.84,
	};

	printf("Stan has a total of $%.2f.\n",
		sum(stan.bankfund, stan.savefund));

	return 0;
}

/* 两个 double 相加 */
double sum(double x, double y) {
	return (x+y);
}
