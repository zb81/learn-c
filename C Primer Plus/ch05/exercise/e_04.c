#include <stdio.h>
#define CM_IN_INCH 2.54
#define CM_IN_FOOT 30.48

int main(void) {
	float height;
	printf("Enter a height in centimeters: ");
	scanf("%f", &height);

	while(height > 0) {
		int feet = height / CM_IN_FOOT;
		double inches = (height - feet*CM_IN_FOOT) / CM_IN_INCH;

		printf("%.1f cm = %d feet, %.1lf inches\n", height, feet, inches);
		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%f", &height);
	}
	printf("bye\n");
	return 0;
}
