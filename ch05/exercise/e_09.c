#include <stdio.h>

void Temperatures(double t);

int main(void) {
	double t;
	printf("输入华氏温度 (q to quit): ");

	while(scanf("%lf", &t) == 1) {
		Temperatures(t);
		printf("输入华氏温度 (q to quit): ");
	}

	printf("bye\n");

	return 0;
}

void Temperatures(double t) {
	const double x = 5.0 / 9.0;
	const double y = 32.0;
	const double z = 273.16;

	double c = x * (t - y);
	double k = c + z;
	printf("华氏温度: %lf\n", t);
	printf("摄氏温度: %lf\n", c);
	printf("开氏温度: %lf\n", k);
}
