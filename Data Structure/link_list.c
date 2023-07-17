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

Status getElem(const LinkList list, int i, ElemType * e);
Status insertElem(LinkList list, int i, ElemType e);
Status delElem(LinkList list, int i);

void init(LinkList list, int n);
void show(const LinkList list);

int main() {
	LinkList list = (Node *)malloc(sizeof(Node));
	init(list, 10);
	show(list);

	ElemType target;
	if(~getElem(list, 0, &target))
		printf("target is %d\n", target);

	insertElem(list, 11, 99);
	show(list);

	delElem(list, 1);
	delElem(list, 5);
	show(list);

	free(list);
	return 0;
}

// get the element at position `i`
Status getElem(const LinkList list, int i, ElemType * e) {
	if (i < 1) {
		fprintf(stderr, "ERROR: i cannot less than 1.\n");
		return ERROR;
	}
	int start;
	Node * p = list->next;
	for(start=1; start<i && p; start++) {
		p = p->next;
	}
	if (!p) {
		fprintf(stderr, "ERROR: Cannot find the %dth element.\n", i);
		return ERROR;
	}

	*e = p->data;
	return OK;
}

// insert an element at position `i`
Status insertElem(LinkList list, int i, ElemType e) {
	if (i < 1) {
		fprintf(stderr, "ERROR: i cannot less than 1.\n");
		return ERROR;
	}

	Node * p = list;
	int n = i;
	while(p && n>1) {
		p = p->next;
		n--;
	}
	if (!p) {
		fprintf(stderr, "ERROR: Cannot find the %dth element.\n", i);
		return ERROR;
	}

	// create node
	Node * node = (Node *)malloc(sizeof(Node));
	node->data = e;
	node->next = p->next;
	p->next = node;

	return OK;
}

// delete the element at position `i`
Status delElem(LinkList list, int i) {
	if (i < 1) {
		fprintf(stderr, "ERROR: i cannot less than 1.\n");
		return ERROR;
	}

	Node * p = list;
	Node * prev;
	int n = i;
	while(p && n>0) {
		prev = p;
		p = p->next;
		n--;
	}
	if (!p || !prev) {
		fprintf(stderr, "ERROR: Cannot find the %dth element.\n", i);
		return ERROR;
	}

	prev->next = p->next;
	free(p);

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
	Node * p = list->next;
	while(p) {
		printf("%d ", p->data);
		p = p->next;
	}
	putchar('\n');
}
