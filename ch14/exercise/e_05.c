#include <stdio.h>

#define CSIZE 4

typedef struct {
	char fname[21];
	char lname[21];
} name;

typedef struct {
	name s_name;
	double grade[3];
	double avg;
} student;

int main(int argc, char *argv []) {
	student list[CSIZE] = {

	};
	return 0;
}
