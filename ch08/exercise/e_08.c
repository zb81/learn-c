#include <stdio.h>
#include <stdbool.h>

char get_operation(void);
float get_number(bool not_zero);

int main(void) {
	char choice;
	char opt;
	float a, b;
	double res;
	while((choice = get_operation()) != 'q') {
		// get operator
		switch(choice) {
			case 'a': opt = '+'; break;
			case 's': opt = '-'; break;
			case 'm': opt = '*'; break;
			case 'd': opt = '/'; break;
			default: printf("Error!\n"); continue;
		}

		printf("Enter first number: ");
		a = get_number(false);
		printf("Enter second number: ");
		b = get_number(opt == '/');

		// calculate
		switch(choice) {
			case 'a': res = a+b; break;
			case 's': res = a-b; break;
			case 'm': res = a*b; break;
			case 'd': res = a/b; break;
			default: printf("Error!\n"); continue;
		}

		printf("%g %c %g = %g\n", a, opt, b, res);
	}
	printf("Bye\n");

	return 0;
}

char get_operation(void) {
	char ch;
	printf(
		"****************************************\n"
		"*   a. add           s. substract      *\n"
		"*   m. multiply      d. divide         *\n"
		"*   q. quit                            *\n"
		"****************************************\n"
		"Enter the operation of your choice: "
	);
	ch = getchar();
	while(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd') {
		if (ch == EOF) {
			return 'q';
		};
		putchar(ch);
		while((ch=getchar()) != '\n') putchar(ch);
		printf(
			" is not a operation.\n"
			"Please enter a/s/m/d/q: "
		);
		ch = getchar();
	}

	while(getchar() != '\n') continue;
	return ch;
}

float get_number(bool not_zero) {
	float num = -1;
	char ch;
	while(scanf("%f", &num) != 1 || (not_zero && num == 0)) {
		if (num == 0) {
			while(getchar() != '\n') continue;
			printf("Enter a number other than 0: ");
			continue;
		}

		while((ch = getchar()) != '\n') putchar(ch);
		printf(
			" is not a number.\n"
			"Please enter a number, such as 2.5, -1.78E8, or 3: "
		);
	}
	while(getchar() != '\n') continue;
	return num;
}
