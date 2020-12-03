#include "zStack.h"

void initStack(Stack *stack) {
	stack->head = NULL;
	stack->tail = NULL;

	return;
}

bool isEmpty(Stack stack) {
	return (stack.head->data == -1);
}

void push(Stack *stack, dataType data) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;

	if(stack->head == NULL){
		stack->tail = node;
	}else{
		node->next = stack->head;
	}
	stack->head = node;

	return;

}

void pop(Stack *stack) {
	if(stack->head->next == NULL){
		stack->head = NULL;
	}else{
		stack->head = stack->head->next;
	}

	return;
}

int getLength(Stack *stack){
	Node *node = stack->head;
	int i = 0;
	while(node != NULL){
		node = node->next;
		i++;
	}

	return i;
}

dataType getTop(Stack *stack) {
	return stack->head->data;
}

void dispStack(Stack *stack) {
	Node *node = stack->head;
	printf("此栈为:\n");
	while(node){  //或while(node != NULL)
		printf("%d\t", node->data);
		node = node->next;
	}
	printf("\n");
	printf("disp finished!\n");
	printf("\n");

	return;

}
