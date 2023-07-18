// Sequential Storage Structure - Linear List
#include <stdio.h>

#define MAXSIZE 10
#define OK 0
#define ERROR -1
#define TRUE 1
#define FALSE 0

typedef int Status;
typedef int ElemType;

typedef struct {
	ElemType data[MAXSIZE];
	int length;
} SqList;

Status GetElem(const SqList L, int i, ElemType *e);
Status InsertElem(SqList *L, int i, ElemType e);
Status DeleteElem(SqList *L, int i);
void Show(const SqList *L);

int main(int argc, char *argv []) {
	SqList list = {{}, 0};
	Show(&list);
	InsertElem(&list, 0, 1);
	Show(&list);
	InsertElem(&list, 0, 2);
	Show(&list);
	InsertElem(&list, 0, 3);
	Show(&list);
	InsertElem(&list, 1, 6);
	Show(&list);
	InsertElem(&list, 0, 7);
	Show(&list);

	DeleteElem(&list, 2);
	Show(&list);
	DeleteElem(&list, 3);
	Show(&list);
	DeleteElem(&list, 0);
	Show(&list);

    return 0;
}

// Get the `i`th element in the linear list
Status GetElem(const SqList L, int i, ElemType *e) {
	if (L.length==0 || i<0 || i>=L.length)
		return ERROR;
	*e = L.data[i];
	return OK;
}

// Insert `e` into `L->data[i]`
Status InsertElem(SqList *L, int i, ElemType e) {
	int k;

	// edge case
	if (L->length>=MAXSIZE || i<0 || i>L->length)
		return ERROR;

	// if `e` is not the last el, move the elements from `i+1`
	if (i<L->length)
		for(k=L->length; k>i; k--)
			L->data[k] = L->data[k-1];
	L->data[i] = e;
	L->length++;
	return OK;
}

// Delete the element at index `i`
Status DeleteElem(SqList *L, int i) {
	// edge case
	if (L->length<=0 || i<0 || i>=L->length)
		return ERROR;

	// If `i<length-1`, move the rest elements
	while(i<=L->length-2) {
		L->data[i] = L->data[i+1];
		i++;
	}

	L->data[L->length-1] = 0;
	L->length--;
	return OK;
}

void Show(const SqList *L) {
	printf("length: %d, els: ", L->length);
	int i;
	for(i=0; i<L->length; i++) {
		printf("%d ", L->data[i]);
	}
	putchar('\n');
}
