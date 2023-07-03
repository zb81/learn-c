#include <stdio.h>

int main(int argc, char *argv []) {
	int x = 30; // 原始的 x
	printf("x in outer block: %d at %p\n", x, &x);

	{
		int x = 77; // 新的 x，隐藏了原始的 x
		printf("x in inner block: %d at %p\n", x, &x);
	}

	printf("x in outer block: %d at %p\n", x, &x);

	while(x++ < 33) { // 原始的 x
		int x = 100; // 新的 x，隐藏了原始的 x
		x++;
		printf("x in while loop: %d at %p\n", x, &x);
	}

	printf("x in outer block: %d at %p\n", x, &x);

	return 0;
}
