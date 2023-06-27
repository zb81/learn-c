#include <stdio.h>

double calcSingle(double begin, double now, double rate);
double calcCompose(double begin, double rate);

const double BEGIN = 100.0;
const double DAP = 0.1;
const double DEI = 0.05;

int main(void) {
	int year = 1;
	double dap = BEGIN, dei = BEGIN;

	do {
		dap = calcSingle(BEGIN, dap, DAP);
		dei = calcCompose(dei, DEI);
		if (dap >= dei) {
			year++;
		}
	} while(dap >= dei);
	printf("After %d years,\nDeirdre's money: $%lf\nDaphne's money: $%lf\n", year, dei, dap);

	return 0;
}

double calcSingle(double begin, double now, double rate) {
	return now + begin*rate;
}

double calcCompose(double begin, double rate) {
	return begin*(1+rate);
}
