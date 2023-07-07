#include <stdio.h>
#include <string.h>

typedef struct {
	char name[3];
	int days;
	int no;
} MONTH;

const MONTH monthes[12] = {
	{"Jan", 31, 1},
	{"Feb", 28, 2},
	{"Mar", 31, 3},
	{"Apr", 30, 4},
	{"May", 31, 5},
	{"Jun", 30, 6},
	{"Jul", 31, 7},
	{"Aug", 31, 8},
	{"Sep", 30, 9},
	{"Oct", 31, 10},
	{"Nov", 30, 11},
	{"Dec", 31, 12},
};

int total_days(int n);
char * s_gets(char * str, int len);

int main(int argc, char *argv []) {
	char name[4];
	int i;
	int n = 0;

	printf("Enter month (eg. Jan): ");
	s_gets(name, 4);

	for(i=0; i<12; i++) {
		n += monthes[i].days;
		if (strcmp(name, monthes[i].name) == 0) {
			printf("%d\n", n);
			break;
		}
	}

	printf("Bye.\n");

	return 0;
}

int total_days(int n) {
	int ret = 0;
	int i;
	for(i=0; i<n; i++) {
		ret += monthes[i].days;
	}
	return ret;
}

char * s_gets(char * str, int len) {
	char * ret;
	char * s;
	ret = fgets(str, len, stdin);
	if(ret) {
		s = strchr(str, '\n');
		if (s)
			*s = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret;
}
