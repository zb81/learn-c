// Queue - Implement by sequential
#include <stdio.h>
#include <stdlib.h>

#define OK 0
#define ERROR -1

typedef int Status;
typedef int ElemType;

typedef struct _QNode {
	ElemType data;
	struct _QNode * next;
} QNode, * QueuePtr;

typedef struct {
	QueuePtr front, rear;
} LinkQueue;

void show(const LinkQueue * Q);
Status enqueue(LinkQueue * Q, ElemType e);
Status dequeue(LinkQueue * Q, ElemType * e);

int main(int argc, char *argv []) {
	LinkQueue * Q = (LinkQueue *)malloc(sizeof(LinkQueue));
	Q->front = Q->rear = (QueuePtr)malloc(sizeof(QNode)); // create head

	// enqueue test
	enqueue(Q, 1),enqueue(Q, 2),enqueue(Q, 3),enqueue(Q, 4),enqueue(Q, 5);
	show(Q);

	// dequeue test
	int e;
	dequeue(Q, &e),printf("dequeued: %d\n", e);
	dequeue(Q, &e),printf("dequeued: %d\n", e);
	dequeue(Q, &e),printf("dequeued: %d\n", e);
	show(Q);

	free(Q);
	return 0;
}

void show(const LinkQueue * Q) {
	if (Q->front == Q->rear) {
		printf("Queue is empty.\n");
	} else {
		QueuePtr p = Q->front->next;
		printf("Here is the queue: ");
		while(p) {
			printf("%d ", p->data);
			p = p->next;
		}
		putchar('\n');
	}

}

Status enqueue(LinkQueue * Q, ElemType e) {
	QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
	if (!p) {
		fprintf(stderr, "ERROR: Failed to enqueue %d.\n", e);
		return ERROR;
	}
	p->data = e;
	p->next = NULL;
	Q->rear->next = p;
	Q->rear = p;

	return OK;
}
Status dequeue(LinkQueue * Q, ElemType * e) {
	QueuePtr p;
	if (Q->front == Q->rear) {
		fprintf(stderr, "ERROR: Empty queue!.\n");
		return ERROR;
	}
	p = Q->front->next;
	*e = p->data;
	Q->front->next = p->next;

	if (Q->rear == p)
		Q->rear = Q->front;

	free(p);
	return OK;
}
