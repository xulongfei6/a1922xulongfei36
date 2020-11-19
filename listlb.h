#ifndef listlb_h
#define listlb_h

#include <stdio.h>
#include <stdlib.h>

typedef int DataType;
typedef struct node_{
	DataType data;
	struct node_ *next;
} Node;

typedef struct list_{
	Node *head;
	Node *tail;
	Node *current;
} List;

void initList(List *);
int Size(List *);
void insertList(List *, int, DataType);
void deleteList(List *, int);
Node *getNode(List *, DataType);
Node *Find(List *, DataType);
int getData(List *, int);
void dispList(List *);
void clearList(List *);

#endif

