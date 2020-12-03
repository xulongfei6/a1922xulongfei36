#include "zStack.h"

int main(int argc, char **argv)
{
	Stack *stack = (Stack *)malloc(sizeof(Stack));
	initStack(stack);
	push(stack, 1);
	push(stack, 6);
	push(stack, 7);
	push(stack, 9);
	push(stack,10);
	printf("The length: %d\n", getLength(stack));
	printf("the top: %d\n",getTop(stack));
	dispStack(stack);

	pop(stack);
	printf("The length: %d\n", getLength(stack));
	printf("the top: %d\n",getTop(stack));
	dispStack(stack);

	pop(stack);
	printf("The length: %d\n", getLength(stack));
	printf("the top: %d\n",getTop(stack));
	dispStack(stack);

	push(stack, 11);
	printf("The length: %d\n", getLength(stack));
	printf("the top: %d\n",getTop(stack));
	dispStack(stack);

	return 0;
}
