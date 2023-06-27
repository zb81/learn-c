#include <stdio.h>

struct time {
	int h;
	int m;
	int s;
};

struct time timeUpdate(struct time now);

int main(void) {
	struct time testTimes[] = {
		{11,59,59},
		{12,0,0},
		{1,29,59},
		{23,59,59},
		{19,12,17},
	};
	int i;
	for(i=0; i<5; ++i) {
		printf("Time is %.2i:%.2i:%.2i",
			testTimes[i].h, testTimes[i].m, testTimes[i].s);

		testTimes[i] = timeUpdate(testTimes[i]);
		printf("...one second later it's %.2i:%.2i:%.2i\n",
			testTimes[i].h, testTimes[i].m, testTimes[i].s);
	}
	return 0;
}

struct time timeUpdate(struct time now) {
	++now.s;
	if (now.s == 60) {
		now.s = 0;
		++now.m;
		if (now.m == 60) {
			now.m = 0;
			++now.h;
			if (now.h == 24) {
				now.h = 0;
			}
		}
	}
	return now;
}
