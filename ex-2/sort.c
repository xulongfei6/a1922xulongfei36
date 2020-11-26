#include "sort.h"

void print(Sort *sort, int n) {
	for (int i=0; i<n; i++) {
		sort->a[i] = rand() % 100;
	}

	printf("原始数据为: ");
	for (int i=0; i<n; i++) {
		printf("%d ", sort->a[i]);
	}
	printf("\n");
}


void bubbleSort(Sort *sort,int n) {
	int temp = 0;
	for(int i = n-1; i>0; i--){ //每次所需排序的长度
		for(int j = 0; j<i; j++){ //从第一个元素到第i个元素
			if(sort->a[j] > sort->a[j+1]) {
				temp = sort->a[j];
				sort->a[j] = sort->a[j+1];
				sort->a[j+1] = temp;
			}
		}//loop j
	}//loop i
	printf("冒泡排序后数据: ");
	printf("\n");
	for(int i=0; i<n; i++)
		printf("%d ",sort->a[i]);
	printf("\n");	
}

void selectSort(Sort *sort, int n) {
	int temp = 0;
	int min = 0;
	for(int i=0; i<n-1; i++) {
		min = i; //循环查找最小值
		for(int j = i + 1; j<n; j++) {
			if(sort->a[j] < sort->a[min]) {
				min = j;
			}
		}
		if (min != i) {
			temp = sort->a[i];
			sort->a[i] = sort->a[min];
			sort->a[min] = temp;
		}
	}
	printf("选择排序后数据: ");
	printf("\n");
	for(int i=0; i<n; i++)
		printf("%d ",sort->a[i]);
	printf("\n");
}

void insertSort(Sort *sort, int n) {
	for(int i=1; i<n; i++) {
		int temp = sort->a[i];
		int position = i;
		while(position>0 && sort->a[position-1]>temp){
			sort->a[position] = sort->a[position-1];
			position--;
		}
		sort->a[position] = temp;
	} //loop i
	printf("插入排序后数据: ");
	printf("\n");
	for(int i=0; i<n; i++)
		printf("%d ",sort->a[i]);
	printf("\n");
}

//快速排序
int partition(Sort *sort, int low, int high) {
	int pivot = sort->a[low];  //基准
	while(low < high) {
		while(low < high && sort->a[high] >= pivot)
			--high;
		sort->a[low] = sort->a[high];  //交换比基准大的记录到左端
		while(low < high && sort->a[low] <= pivot)
			++low;
		sort->a[high] = sort->a[low];  //交换比基准小的记录到右端
	}
	//扫描完成,基准到位
	sort->a[low] = pivot;
	//返回的是i基准的位置
	return low;
}

void QSort(Sort *sort, int low, int high) {
	if(low >= high)
		return;
	int pivot = partition(sort, low, high);  //将数组分为两部分
	QSort(sort, low, pivot-1);                 //递归排序左子数组
	QSort(sort, pivot+1, high);                //递归排序右子数组
}

void quickSort(Sort *sort, int n) {
	QSort(sort, 0, n-1);

	printf("快速排序后数据: ");
	printf("\n");
	for(int i=0; i<n; i++)
		printf("%d ",sort->a[i]);
	printf("\n");
}

