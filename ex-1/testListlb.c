#include "listlb.h"

int main(int argc, char **argv)
{
	List *list = (List *)malloc(sizeof(List));
	initList(list );

	insertList(list, 1, 1);
	insertList(list, 1, 3);
	insertList(list, 2, 2);
	dispList(list);

	printf("第%d个元素的值: %d\n",2,getData(list,2));
	printf("链表的长度: %d\n",Size(list));

	deleteList(list, 2);
	dispList(list);

	deleteList(list ,1);
	dispList(list);

	clearList(list);
	dispList(list);

	printf("\n");

	return 0;
}
