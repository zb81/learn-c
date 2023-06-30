/* zippo1.c --  zippo的相关信息 */
#include <stdio.h>

int main(void) {
	int zippo[4][2] = { { 2, 4 }, { 6, 8 }, { 1, 3 }, { 5, 7 } };

	/*
	   zippo = 0x16fd2ecc0,    zippo + 1 = 0x16fd2ecc8	// 因为 zippo 是二维数组，其首元素是一个指向两个 int 类型元素数组的指针，所以 +1 的结果是增加 8 个字节
	zippo[0] = 0x16fd2ecc0, zippo[0] + 1 = 0x16fd2ecc4	// 因为 zippo[0] 是一维数组，其首元素是一个 int 类型的指针，所以 +1 的结果是增加 4 个字节
	*zippo = 0x16fd2ecc0,   *zippo + 1 = 0x16fd2ecc4	// 因为 zippo 是二维，首元素是两个 int 类型数组的指针，通过解引用拿到首元素的值(zippo[0])，和第二条一样的结果
	zippo[0][0] = 2 	// 无需解释，正常访问第一个数组中的第一个值
	*zippo[0] = 2		// 第三条解释了，*zippo 相当于 zippo[0]，所以本质上和上面的结果一样，都是第一个数组中的第一个值
		**zippo = 2		// *zippo 是 zippo[0] (第一个数组中的第一元素的地址)，再进行解引用，拿到的结果和上面一样
		zippo[2][1] = 3	// 无需解释，正常访问第三个数组中的第二个值


	这里稍微复杂一点，按步骤分析：
		1. zippo 的指针类型是两个 int 的长度，+2 的结果是增加 8 个字节，其实就是二维数组中的第三个数组 {1, 3} 的地址
		2. 对其解引用，拿到的是 {1, 3} 的第一个元素的地址 (注意：zippo+2 == *(zippo+2)) 首地址的字节内容都是 1
		3. 再加一，就变成了 {1, 3} 的第二个元素的地址
		4. 最后，解引用，取到的值为 3
	*(*(zippo+2) + 1) = 3
	*/

	printf("   zippo = %p,    zippo + 1 = %p\n",zippo, zippo + 1);
	printf("zippo[0] = %p, zippo[0] + 1 = %p\n",zippo[0], zippo[0] + 1);
	printf("  *zippo = %p,   *zippo + 1 = %p\n",*zippo, *zippo + 1);
	printf("zippo[0][0] = %d\n", zippo[0][0]);
	printf("  *zippo[0] = %d\n", *zippo[0]);
	printf("    **zippo = %d\n", **zippo);
	printf("      zippo[2][1] = %d\n", zippo[2][1]);
	printf("*(*(zippo+2) + 1) = %d\n", *(*(zippo + 2) + 1));

	return 0;
}
