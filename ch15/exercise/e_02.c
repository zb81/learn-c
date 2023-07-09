#include <stdio.h>
#include <string.h>
#include <limits.h>

#define INT (sizeof(int) * CHAR_BIT)

char * tobin(int n, char * ps);
int pbin(char * str);

int main(int argc, char *argv []) {
	char bin_str[CHAR_BIT * sizeof(int) + 1];

	printf("~%s = %s, ~%s = %s\n",
			argv[1], tobin(~pbin(argv[1]), bin_str),
			argv[2], tobin(~pbin(argv[2]), bin_str));
	printf("%s & %s = %s\n",
			argv[1], argv[2], tobin(pbin(argv[1])&pbin(argv[2]), bin_str));
	printf("%s | %s = %s\n",
			argv[1], argv[2], tobin(pbin(argv[1])|pbin(argv[2]), bin_str));
	printf("%s ^ %s = %s\n",
			argv[1], argv[2], tobin(pbin(argv[1])^pbin(argv[2]), bin_str));
	return 0;
}

// int 转成二进制
char * tobin(int n, char * ps) {
	int i;
	const static int size = CHAR_BIT * sizeof(int);

	for (i = size - 1; i >= 0; i--, n >>= 1)
		ps[i] = (01 & n) + '0';
	ps[size] = '\0';

	return ps;
}

// 二进制字符串转成 int
int pbin(char * str) {
	int len = strlen(str);
	int i;
	int ret = 0;
	for(i=0; i<len; i++) {
		ret += (*str++ - '0') << (len-i-1);
	}
	return ret;
}
