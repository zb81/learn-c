#include <stdio.h>

int main(void)
{
	int sum = 0;
	int days;
	printf("Enter how many days: ");
	scanf("%d", &days);

	int cnt = 0;
	while (cnt++ < days)
		sum = sum + cnt;
	printf("In %d days, you can make $%d.\n", days, sum);

	return 0;
}
