#include <stdio.h>
#include <string.h>

char * s_gets(char * st, int n);

#define MAXTITLE 41
#define MAXAUTHOR 31
#define MAXBKS 100

struct book {
	char title[MAXTITLE];
	char author[MAXAUTHOR];
	float value;
};

void alpha_sort(struct book arr[], int n);
void value_sort(struct book arr[], int n);
void print_books(struct book arr[], int n);

int main(int argc, char *argv []) {
	struct book library[MAXBKS]; // 声明一个 book 类型结构的数组

	int count = 0;

	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while(
		count<MAXBKS
		&& s_gets(library[count].title, MAXTITLE) != NULL
		&& library[count].title[0] != '\0'
	) {
		printf("Now enter the author.\n");
		s_gets(library[count].author, MAXAUTHOR);
		printf("Now enter the value.\n");
		scanf("%f", &library[count++].value);
		while(getchar() != '\n') continue; // 清理输入行剩余字符
		if (count < MAXBKS)
			printf("Enter the next title.\n");
	}

	if (count > 0) {
		print_books(library, count);
		printf("====== Sorting by alpha ======\n");
		alpha_sort(library, count);
		print_books(library, count);
		printf("====== Sorting by value ======\n");
		value_sort(library, count);
		print_books(library, count);
	} else
		printf("No books? Too bad.\n");


	return 0;
}


char * s_gets(char * st, int n) {
	char * ret;
	char * find;

	ret = fgets(st, n, stdin);
	if (ret) {
		find = strchr(st, '\n'); // 查找换行符
		if (find)
			*find = '\0'; // 将换行符从字符串中移除
		else
			while(getchar() != '\n')
				continue; // 处理输入行中的剩余字符
	}
	return ret;
}

void print_books(struct book library[], int n) {
	int i;
	printf("Here is the list of your books:\n");
	for(i=0; i<n; i++) {
		printf("%s by %s: $%.2f\n",
			library[i].title, library[i].author, library[i].value);
	}
}

void alpha_sort(struct book arr[], int n) {
	int i, j;
	struct book t;

	for(i=0; i<n-1; i++) {
		for(j=0; j<n-1-i; j++) {
			if (strcmp(arr[j].title, arr[j+1].title) > 0) {
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
}

void value_sort(struct book arr[], int n) {
	int i, j;
	struct book t;

	for(i=0; i<n-1; i++) {
		for(j=0; j<n-1-i; j++) {
			if (arr[j].value > arr[j+1].value) {
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
}
