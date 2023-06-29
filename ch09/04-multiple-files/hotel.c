#include <stdio.h>
#include "hotel.h"

int menu(void) {
	int code, status;

	printf(
		"\n%s%s\n"
		"1) Fairfield Arms           2) Hotel Olympic\n"
		"3) Chertworthy Plaza        4) The Stockton\n"
		"5) quit\n"
		"Enter the number of the desired hotel: ",
		STARS, STARS
	);

	while((status = scanf("%d", &code)) != 1 || (code<1 || code>5)) {
		while(getchar() != '\n') continue;
		// if (status != 1) {
		// 	scanf("%*s");
		// }
		printf("Enter an integer from 1 to 5, please: ");
	}

	return code;
}

int getnights(void) {
	int nights;
	printf("How many nights are needed? ");
	while(scanf("%d", &nights) != 1) {
		while(getchar() != '\n') continue;
		// scanf("%*s");
		printf("Please enter an integer, such as 2: ");
	}
	return nights;
}

void showprice(double rate, int nights) {
	int n;
	double total = 0.0;
	double factor = 1.0;
	for(n=1; n<=nights; n++,factor*=DISCOUNT) total += rate * factor;
	printf("The total cost will be $%.2f.\n", total);
}
