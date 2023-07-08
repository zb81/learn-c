// 球员号 名 姓 上场次数 击中数 走垒数 打点

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRLEN 21
#define MAX 18
#define INPUT "e_06.input"

typedef struct {
	char fname[STRLEN];
	char lname[STRLEN];
	int c;
	int r;
	int b;
	int i;
	double rate;
} Player;

int main(int argc, char *argv []) {
	Player list[MAX];
	FILE * f;

	char fname[STRLEN];
	char lname[STRLEN];
	int index, c, r, b, i;
	Player * p;

	for(index=0; index<MAX; index++) {
		p = &list[index];
		*(p->fname) = '\0';
		*(p->lname) = '\0';
		p->c = 0;
		p->r = 0;
		p->b = 0;
		p->i = 0;
		p->rate = 0.0;
	}

	if ((f = fopen(INPUT, "r")) == NULL) {
		fprintf(stderr, "Can't open file %s\n", INPUT);
		exit(EXIT_FAILURE);
	}

	while((fscanf(f, "%d %s %s %d %d %d %d", &index, fname, lname, &c, &r, &b, &i)) == 7) {
		p = &list[index];
		strncpy(p->fname, fname, STRLEN);
		strncpy(p->lname, lname, STRLEN);
		p->c += c;
		p->r += r;
		p->b += b;
		p->i += i;
		p->rate = p->r * 1.0 / p->c;
	}

	printf("ID\tNAME\tC\tR\tB\tI\tRATE\n");
	for(index=0; index<MAX; index++) {
		p = &list[index];
		printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f\n", index,
			p->fname, p->c, p->r, p->b, p->i, p->rate);
	}

	fclose(f);
	return 0;
}
