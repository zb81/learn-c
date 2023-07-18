// Stack - Implement by sequential
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define OK 0
#define ERROR -1

typedef int Status;
typedef int ElemType;

typedef struct {
	ElemType data[MAXSIZE];
	int top; // point to stack top
} SqStack;

Status push(SqStack * s, ElemType e);
Status pop(SqStack * s, ElemType * e);
void show(const SqStack * s);

int main(int argc, char *argv []) {
	SqStack * s = (SqStack *)malloc(sizeof(SqStack));
	s->top = -1;

	// push test
	push(s, 1),push(s, 2),push(s, 3),push(s, 4),push(s, 5),show(s);

	// pop test
	int e;
	pop(s, &e);
	printf("%d popped.\n", e);
	pop(s, &e);
	printf("%d popped.\n", e);
	show(s);

	free(s);

	return 0;
}

Status push(SqStack * s, ElemType e) {
	if (s->top == MAXSIZE-1)
		return ERROR; // full
	s->top++;
	s->data[s->top] = e;
	return OK;
}

Status pop(SqStack * s, ElemType * e) {
	if (s->top == -1)
		return ERROR; // empty
	*e = s->data[s->top--];
	return OK;
}

void show(const SqStack * s) {
	int i;
	for(i=0; i<=s->top; i++)
		printf("%d ", s->data[i]);
	putchar('\n');
}
