#ifndef zStack_h
#define zStack_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int dataType;

typedef struct node_ {
	dataType data;
	struct node_ *next;
} Node;

typedef struct stack_ {
	Node *head;
	Node *tail;
} Stack;

void initStack(Stack *);
int Empty(Stack);
void push(Stack *,dataType);
void pop(Stack *);
int getLength(Stack *);
dataType getTop(Stack *);
void dispStack(Stack *);

#endif
