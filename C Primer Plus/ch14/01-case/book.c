#include <stdio.h>
#include <string.h>

char * s_gets(char * st, int n);

#define MAXTITLE 41
#define MAXAUTHOR 31

struct book {
	char title[MAXTITLE];
	char author[MAXAUTHOR];
	float value;
};

int main(int argc, char *argv []) {
	struct book library; // 声明一个 book 类型的变量

	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITLE);
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTHOR);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);

	printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
	printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
	printf("Done.\n");

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
