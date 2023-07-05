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

int main(int argc, char *argv []) {
	struct book library[MAXBKS]; // 声明一个 book 类型结构的数组

	int count = 0;
	int index;

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

	if (count>0) {
		printf("Here is the list of your books:\n");
		for(index=0; index<count; index++) {
			printf("%s by %s: $%.2f\n",
				library[index].title, library[index].author, library[index].value);
		}
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
