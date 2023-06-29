#include <stdio.h>

unsigned long fibonacci(unsigned long n);
unsigned long r_fibonacci(unsigned long n);

int main(void) {
	unsigned long n;
	printf(
		"This program calculates fibonacci.\n"
		"Enter a positive integer (q to quit): "
	);
	while(scanf("%lu", &n) == 1) {
		printf("loop: %lu\n", fibonacci(n));
		printf("recursion: %lu\n", r_fibonacci(n));
		printf("Enter a positive integer (q to quit): ");
	}
	printf("Done\n");
	return 0;
}

unsigned long fibonacci(unsigned long n) {
	unsigned long a = 1, b = 1;
	unsigned long t;
	while(n > 2) {
		t = a;
		a = b;
		b = a+t;
		n--;
	}
	return b;
}

unsigned long r_fibonacci(unsigned long n) {
	if (n > 2) {
		return r_fibonacci(n-1) + r_fibonacci(n-2);
	}
	return 1;
}
