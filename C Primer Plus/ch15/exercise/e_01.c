#include <stdio.h>
#include <string.h>

int pbin(char * str);

int main(int argc, char *argv []) {
	char * str = "0000000000101010100101011";
	printf("%s -> %d\n", str, pbin(str));
	return 0;
}

int pbin(char * str) {
	int len = strlen(str);
	int i;
	int ret = 0;
	for(i=0; i<len; i++) {
		ret += (*str++ - '0') << (len-i-1);
	}
	return ret;
}
