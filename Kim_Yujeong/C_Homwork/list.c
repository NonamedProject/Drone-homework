#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_node{
	struct list_node *next;
	int data;
}list;

int listGetdata(list* L, int nodeNum);
int list_delete(list *L);
int list_print(list *L);
int list_add(list *L,int data);
list* list_create(int input_data);

int main(void){
	list *L = list_create(1);
	int i = 0;

	for(i = 2; i <= 10;i++){
		list_add(L,i);
	}

	list_print(L);
}

struct list_node* list_create(int input_data){
	list *L = (list*)malloc(sizeof(list));
	memset(L,0,sizeof(list));
	L->data = input_data;
	return L;
}

int list_add(list *L,int data){
	list *A = L;
	while(A->next != 0){
		A = A->next;
	}
	A->next = list_create(data);
	return 0;
}

int list_print(list *L){
	list *A = L ;
	do{
		printf("%d ",A->data);
	}while(A = A->next);
	return 0;
}

int list_delete(list *L){
	
	list *A = L;
	list *temp = A;
	do{
		temp = A;
		A = A->next;
		free(temp);
	}while(A);
	
	return 1;
}

int listGetdata(list* L, int nodeNum){
	int i = 0;
	list *A = L;
	if(nodeNum < 0){
		printf("get node error\n");
		return -1;
	}
	do{
		if(i == nodeNum){
			return A->data;
		}
		i++;
		A = A->next;
	}while(A = A->next);
	
	printf("no %d node\n",nodeNum);
	return -1;
}


