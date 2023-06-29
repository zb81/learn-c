#include <stdio.h>

long fact(int n);
long rfact(int n);

int main(void) {
	int num;
	printf("This program calculates factorials.\n");
	printf("Enter a value in the range 0-12 (q to quit): ");
	while(scanf("%d", &num) == 1) {
		if (num < 0) printf("No negative numbers, please.\n");
		else if (num > 12) printf("Keep input under 13.\n");
		else {
			printf("     loop: %d! = %ld\n", num, fact(num));
			printf("recursion: %d! = %ld\n", num, rfact(num));
		}
		printf("Enter a value in the range 0-12 (q to quit): ");
	}
	printf("Bye\n");
	return 0;
}

long fact(int n) {
	long res = 1;
	for(res=1; n>1; n--) {
		res *= n;
	}
	return res;
}

long rfact(int n) {
	if (n < 2) return 1;
	return n * rfact(n - 1);
}
