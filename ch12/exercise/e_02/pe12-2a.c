#include <stdio.h>
#include <stdlib.h>
#include "pe12-2a.h"

static int mode; // 模式

static double distance; // 距离
static double fuel; // 油量

void set_mode(int m) {
	if (m > 1) {
		mode = 0;
		puts("Invalid mode specified. Mode 0(metric) used.");
	} else {
		mode = m;
	}
}

void get_info() {
	if (mode == 0) {
		printf("Enter distance traveled in kilometers: ");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in liters: ");
		scanf("%lf", &fuel);
	} else {
		printf("Enter distance traveled in miles: ");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in gallons: ");
		scanf("%lf", &fuel);
	}
}

void show_info() {
	if (mode == 0) {
		printf("Fuel consumption is %.2f liters per 100 km.\n", fuel/distance*100);
	} else {
		printf("Fuel consumption is %.1f miles per gallon.\n", distance/fuel);
	}
}

void log_exit(const char * s) {
	puts(s);
	exit(EXIT_FAILURE);
}
