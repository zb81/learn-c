// Sequential Storage Structure - Link List
#include <stdio.h>
#include <stdlib.h>

#define OK 0
#define ERROR -1

typedef int Status;
typedef int ElemType;

typedef struct Node {
	ElemType data;
	struct Node * next;
} Node;

typedef struct Node * LinkList; // pointer, point to the head node

Status getElem(const LinkList list, int n, ElemType * e);
void init(LinkList list, int n);
void show(const LinkList list);

int main() {
	LinkList list = (Node *)malloc(sizeof(Node));
	init(list, 10);
	show(list->next);

	ElemType target;
	if(~getElem(list, 13, &target))
		printf("target is %d\n", target);

	return 0;
}

Status getElem(const LinkList list, int n, ElemType * e) {
	int i;
	Node * p = list->next;
	for(i=1; i<n && p; i++) {
		p = p->next;
	}
	if (!p) {
		printf("ERROR: Cannot found the %dth element.\n", n);
		return ERROR;
	}

	*e = p->data;
	return OK;
}

void init(LinkList list, int n) {
	int i;
	Node * p = list;

	for(i=1; i<=n; i++) {
		p->next = (Node *)malloc(sizeof(Node));
		p->next->data = i;
		p = p->next;
	}
}

void show(const LinkList list) {
	Node * p = list;
	while(p) {
		printf("%d ", p->data);
		p = p->next;
	}
	putchar('\n');
}
