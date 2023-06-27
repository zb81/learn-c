#include <stdio.h>

struct point {
	int x;
	int y;
};
struct reactangle {
	struct point p1;
	struct point p2;
};

void printRect(const struct reactangle *rp) {
	printf("<%d, %d> to <%d, %d>\n", rp->p1.x, rp->p1.y, rp->p2.x, rp->p2.y);
}

int main(void) {
	struct reactangle rects[] = {
		{{1, 2}, {3, 4}},
		{{5, 6}, {7, 8}},
	};
	int i;
	for(i=0; i<2; i++) {
		printRect(&rects[i]);
	}
	return 0;
}
