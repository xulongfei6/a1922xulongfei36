#ifndef sort_h
#define sort_h

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef int dataType;

typedef struct sort_ {
	dataType a[MAX];
} Sort;

void print(Sort *, int);
void bubbleSort(Sort *, int);
void selectSort(Sort *, int);
void insertSort(Sort *, int);
void quickSort(Sort *, int);

#endif
