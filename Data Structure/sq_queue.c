// Queue - Implement by sequential
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
#define OK 0
#define ERROR -1

typedef int Status;
typedef int ElemType;
typedef struct {
	ElemType data[MAXSIZE];

	// when empty, front == rear
	// when full, (rear+1)%MAXSIZE == front
	int front; // point to the first el
	int rear; // point to the next pos of the last el
} SqQueue;

Status init(SqQueue * Q);
int size(const SqQueue * Q);
void show(const SqQueue * Q);
Status enqueue(SqQueue * Q, ElemType e);
Status dequeue(SqQueue * Q, ElemType * e);

int main(int argc, char *argv []) {
	SqQueue * Q = (SqQueue *)malloc(sizeof(SqQueue));
	init(Q);

	// enqueue test
	enqueue(Q, 1),enqueue(Q, 2),enqueue(Q, 3),enqueue(Q, 4),enqueue(Q, 5),
	enqueue(Q, 6),enqueue(Q, 7),enqueue(Q, 8),enqueue(Q, 9),enqueue(Q, 10);
	show(Q);

	// dequeue test
	int e;
	dequeue(Q, &e),printf("Dequeued Element: %d\n", e);
	dequeue(Q, &e),printf("Dequeued Element: %d\n", e);
	dequeue(Q, &e),printf("Dequeued Element: %d\n", e);
	dequeue(Q, &e),printf("Dequeued Element: %d\n", e);
	dequeue(Q, &e),printf("Dequeued Element: %d\n", e);
	dequeue(Q, &e),printf("Dequeued Element: %d\n", e);
	dequeue(Q, &e),printf("Dequeued Element: %d\n", e);
	dequeue(Q, &e),printf("Dequeued Element: %d\n", e);
	dequeue(Q, &e),printf("Dequeued Element: %d\n", e);
	dequeue(Q, &e),printf("Dequeued Element: %d\n", e);
	show(Q);

	return 0;
}

Status init(SqQueue * Q) {
	Q->front = Q->rear = 0;
	return OK;
}

int size(const SqQueue * Q) {
	return (Q->rear - Q->front + MAXSIZE) % MAXSIZE;
}

void show(const SqQueue * Q) {
	int i, n;
	printf("Here is the queue: ");
	for(i=Q->front,n=1; n<=size(Q);) {
		printf("%d ", Q->data[i]);
		n++;
		i = (i+1) % MAXSIZE;
	}
	putchar('\n');
}

Status enqueue(SqQueue * Q, ElemType e) {
	if ((Q->rear+1)%MAXSIZE == Q->front) {
		fprintf(stderr, "ERROR: Queue is full! Can not enqueue %d.\n", e);
		return ERROR; // full
	}
	Q->data[Q->rear] = e;
	Q->rear = (Q->rear + 1) % MAXSIZE;

	return OK;
}

Status dequeue(SqQueue * Q, ElemType * e) {
	if (Q->front == Q->rear) {
		fprintf(stderr, "ERROR: Queue is empty!");
		return ERROR; // empty
	}

	*e = Q->data[Q->front];
	Q->front = (Q->front + 1) % MAXSIZE;

	return OK;
}
