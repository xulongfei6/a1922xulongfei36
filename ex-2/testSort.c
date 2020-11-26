#include "sort.h"

int main(int argc, char **argv)
{
	Sort *sort = (Sort *) malloc(sizeof(Sort));
	int N;
	printf("请输入数组的大小: ");
	scanf("%d",&N);
	printf("\n");
	
	print(sort, N);
	bubbleSort(sort, N);
	printf("\n");

	print(sort, N);
	selectSort(sort, N);
	printf("\n");

	print(sort, N);
	insertSort(sort, N);
	printf("\n");

	print(sort, N);
	quickSort(sort, N);
	printf("\n");

	
	return 0;
}
