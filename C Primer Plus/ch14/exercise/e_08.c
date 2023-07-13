#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NAMELEN 21
#define SEATS 12

typedef struct {
	int id;
	bool empty;
	char fname[NAMELEN];
	char lname[NAMELEN];
} Seat;

void eat_line();
char get_opt();
void init_seats(Seat seats[], int n);
void print_number_of_empty(const Seat seats[], int n);

int main(int argc, char *argv []) {
	Seat seats[SEATS];
	char opt;

	init_seats(seats, SEATS);

	while((opt = get_opt()) != 'f') {
		switch(opt) {
			case 'a': print_number_of_empty(seats, SEATS); break;
			case 'b': print_list_of_empty(seats, SEATS); break;
			default: break;
		}
	}

	puts("Bye.");
	return 0;
}

char get_opt() {
	char ret;

	puts("To choose a function, enter its letter label:");
	puts("a) Show number of empty seats");
	puts("b) Show list of empty seats");
	puts("c) Show alphabetical list of seats");
	puts("d) Assign a customer to a seat assignment");
	puts("e) Delete a seat assignment");
	puts("f) Quit");

	ret = getchar();
	while(!strchr("abcdef", ret)) {
		if (!(ret == ' ' || ret == '\0' || ret == '\t')) {
			eat_line();
			printf("Please enter a-f: ");
		}
		ret = getchar();
	}
	eat_line();

	return ret;
}

void init_seats(Seat seats[], int n) {
	int i;
	for(i=0; i<n; i++) {
		seats[i].id = i+1;
		seats[i].empty = true;
		*(seats[i].fname) = '\0';
		*(seats[i].lname) = '\0';
	}
}

void print_number_of_empty(const Seat seats[], int n) {
	int i;
	printf("Here is number of empty seats:\n");
	for(i=0; i<n; i++) {
		if (seats[i].empty)
			printf("%-6d", seats[i].id);
	}
	putchar('\n');
}

void eat_line() {
	while(getchar() != '\n')
		continue;
}
