#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXTITLE	40
#define MAXAUTHOR	40
#define MAXBOOKS	10

char * s_gets(char * st, int n);

struct book {
	char title[MAXTITLE];
	char author[MAXAUTHOR];
	float value;
};

int main(void) {
	struct book library[MAXBOOKS]; // 结构数据
	int count = 0;
	int index, filecount;
	FILE * pbooks;
	int size = sizeof(struct book);

	if ((pbooks = fopen("book.dat", "a+b")) == NULL) {
		fputs("Can't open book.dat file\n", stderr);
		exit(1);
	}

	// 定位到文件开始
	rewind(pbooks);

	while(count<MAXBOOKS && fread(&library[count], size, 1, pbooks) == 1) {
		if (count == 0)
			puts("Current contents of book.dat:");
		printf("%s by %s: $%.2f\n", library[count].title,
			library[count].author, library[count].value);
		count++;
	}
	filecount = count; // 文件中已存在的 book 数量，为了最后的写入数据
	if (count == MAXBOOKS) {
		fputs("The book.dat file is full.", stderr);
		exit(2);
	}

	puts("Please add new book titles.");
	puts("Press [enter] at the start of a line to stop.");
	while(
		count<MAXBOOKS
		&& s_gets(library[count].title, MAXTITLE) != NULL
		&& library[count].title[0] != '\0'
	) {
		puts("Now enter the author:");
		s_gets(library[count].author, MAXAUTHOR);
		puts("Now enter the value:");
		scanf("%f", &library[count].value);
		count++;
		while(getchar() != '\n')
			continue;
		if (count < MAXBOOKS)
			puts("Enter the next title:");
	}

	if (count > 0) {
		puts("Here is the list of your books:");
		for(index=0; index<count; index++)
			printf("%s by %s: $%.2f\n", library[index].title,
				library[index].author, library[index].value);
		fwrite(&library[filecount], size, count-filecount, pbooks);
	} else
		puts("No books? Too bad.");

	puts("Bye.");
	fclose(pbooks);

	return 0;
}

char * s_gets(char * st, int n) {
	char * ret;
	char * bl;

	ret = fgets(st, n, stdin);
	if (ret) {
		bl = strchr(st, '\n');
		if (bl)
			*bl = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret;
}
