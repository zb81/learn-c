// Stack - Implement by sequential
#include <stdio.h>
#include <stdlib.h>
#define OK 0
#define ERROR -1

typedef int Status;
typedef int ElemType;
typedef struct StackNode {
	ElemType data;
	struct StackNode * next;
} StackNode, * LinkStackPtr;
typedef struct LinkStack {
	LinkStackPtr top;
	int count;
} LinkStack;

Status push(LinkStack * s, ElemType e);
Status pop(LinkStack * s, ElemType * e);
void show(const LinkStack * s);

int main(int argc, char *argv []) {
	LinkStack * s = (LinkStack *)malloc(sizeof(LinkStack));

	// push test
	push(s, 1),push(s, 2),push(s, 3),push(s, 4),push(s, 5),show(s);

	// pop test
	int e;
	pop(s, &e),pop(s, &e),pop(s, &e),show(s);

	return 0;
}

Status push(LinkStack * s, ElemType e) {
	LinkStackPtr node = (LinkStackPtr)malloc(sizeof(StackNode));
	node->data = e;
	node->next = s->top;
	s->top = node;
	s->count++;
	return OK;
}

Status pop(LinkStack * s, ElemType * e) {
	if (s->count == 0)
		return ERROR; // empty

	LinkStackPtr p = s->top;
	*e = p->data;
	s->top = p->next;
	s->count--;
	free(p);
	return OK;
}

void show(const LinkStack * s) {
	int i;
	LinkStackPtr p = s->top;
	fputs("LinkStack(top -> bottom): ", stdout);
	for(i=1; i<=s->count; i++) {
		fprintf(stdout, "%d ", p->data);
		p = p->next;
	}
	putchar('\n');
}
