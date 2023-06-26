#include <stdio.h>

int main(void) {
	float height;
	char name[20];
	printf("Enter your height(cm) and name:\n");
	scanf("%f %s", &height, name);
	printf("%s, you are %.3fm tall\n", name, height/100);

	return 0;
}
