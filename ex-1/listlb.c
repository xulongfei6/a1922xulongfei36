#include "listlb.h"


void initList(List *list){
	list->head = NULL;
	list->tail = NULL;
}

int Size(List *list){
	Node *node = (Node*)malloc(sizeof(Node));
	node =list->head;
	int i = 0;
	while(node != NULL) {  //或while (node)
		i++;
		node = node->next;
	}
	return i;
}  //相当于getlength

void insertList(List *list, int loc, DataType data){

	if (loc<=1){
		Node *node = (Node*)malloc(sizeof(Node));  //NULL更换了
//		node->next = NULL;  
		node->data = data;
		if(list->head == NULL) {
			list->tail = node;
		}else{
			node->next = list->head;
		}
		list->head = node;

	}else{
		Node *node = (Node*)malloc(sizeof(Node));
		Node *prev = (Node*)malloc(sizeof(Node));
		prev = list->head;
		node->data = data;
//		node->next = NULL;
		if(list->head == NULL) {
			list->tail = node;
		}
		for(int i=1; i < loc-1 ; i++) {
			prev = prev->next;
		}
		node->next = prev->next;
		prev->next = node;
	}
	Node *node = list->head;
	while(node->next != NULL) {
		node = node->next;
	}
	list->tail = node;
	return;
}

void deleteList(List *list, int loc){
	if(loc<1) {
		return;
	}
	if(list->head == NULL) {
		return;
	}
	Node *node = (Node*)malloc(sizeof(Node));	//把NULL更换了
	Node *prev = (Node*)malloc(sizeof(Node));
	prev = list->head;
	node = list->head->next;
	if(loc == 1) {
		list->head = node;
	}
	for(int i=1;i < loc-1 ;i++) {
		prev = prev->next;
	}
	Node *del = prev->next;  //设置一个结点指向被删除节点
	prev->next = prev->next->next;
	//free(del);  //手动释放该节点,防止内存泄漏
	return;
}

Node *getNode(List *list, DataType data) {
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;
	while(node != NULL) {
		if(node->data == data) {
			return node;
		}else {
			node = node->next;

			return NULL;
		}
	}
}  //查找结点的值和getData类似

int getData(List *list, int k) {
	if(k<1) {
		return -1;
	}
	Node *node = (Node*)malloc(sizeof(Node));
	node = list->head;
	for(int i=1; i<k; i++){
		node = node->next;
	}

	return node->data;
}  //找到第k个元素的值

Node* Find(List *list, DataType data) {
	Node *node = list->head;
	while(node && node->data != data)
		node = node->next;
	return node;
}

void dispList(List *list){
	Node *node = list->head;
	printf("此链表为:");
	while(node){  //或while(node != NULL)
		printf("%d\t", node->data);
		node = node->next;
	}
	printf("\n");
	printf("disp finished!\n");
	return;
}

void clearList(List *list) {
	Node *p, *q;
	p = list->head;
	while (p) {
		q = p;
		p = p->next;
		free(q);
	}
	list->head = NULL;
}

