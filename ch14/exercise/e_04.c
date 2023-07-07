#include <stdio.h>
#include <string.h>

#define LEN 5

struct Name {
	char fname[21];
	char mname[21];
	char lname[21];
};

struct Customer {
	unsigned long id;
	struct Name name;
};


void print_customer(struct Customer * cu);
void print_customer_val(struct Customer cu);

int main(int argc, char *argv []) {
	struct Customer customers[LEN] = {
		{32032498001, {"Dribble", "Mic", "Flossie"}},
		{32032498001, {"Dribble", "Mic", "Flossie"}},
		{32032498001, {"Dribble", "Mic", "Flossie"}},
		{32032498001, {"Dribble", "Mic", "Flossie"}},
		{32032498001, {"Dribble", "Mic", "Flossie"}},
	};

	int i;
	for(i=0; i<LEN; i++)
		// print_customer(&customers[i]);
		print_customer_val(customers[i]);
	puts("Done.");

	return 0;
}

void print_customer(struct Customer * cu) {
	printf("           %s, %s %c. –– %ld\n",
		cu->name.fname, cu->name.lname, *(cu->name.mname), cu->id);
}

void print_customer_val(struct Customer cu) {
	printf("           %s, %s %c. –– %ld\n",
		cu.name.fname, cu.name.lname, *(cu.name.mname), cu.id);
}
