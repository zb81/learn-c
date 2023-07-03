#include <stdio.h>
#include <stdlib.h>
#include "diceroll.h"

int roll_count = 0; // 静态外部链接变量

// 该函数属于文件私有
static int rollem(int sides) {
	int roll;
	roll = rand() % sides + 1;
	++roll_count; // 计算函数调用次数
	return roll;
}

// 公共
int roll_n_dice(int dice, int sides) {
	int d;
	int total = 0;

	if (sides < 2) {
		printf("Need at lease 2 sides.\n");
		return -2;
	}
	if (dice < 1) {
		printf("Need at lease 1 die.\n");
		return -1;
	}

	for(d=0; d<dice; d++)
		total += rollem(sides);

	return total;
}
