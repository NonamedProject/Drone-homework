#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FRONT  0
#define MIDDLE 1
#define BACK   2

typedef struct tree_node{
	struct tree_node *right;
	struct tree_node *left;
	int data;
}node;

node* node_create(int input_data);
int node_add(node* N,int data);
int node_delete(node* N);
void node_print(node* N,int sign);

int main(){
	int i = 0;
	int count = 0;
	node *N = node_create(1);
	printf("count input ");
	scanf("%d",&count);
	for(i = 2; i <= count ; i++){
		node_add(N,i);	
	}
	
	node_print(N,FRONT);
	puts(" ");
	node_print(N,MIDDLE);
	puts(" ");
	node_print(N,BACK);
	puts(" ");

	node_delete(N);
	return 0;
}
node* node_create(int input_data){
	node* a = (node*)malloc(sizeof(node));
	memset(a,0,sizeof(node));
	a -> data = input_data;
	return a;
}
int node_add(node* N,int data){
	if(N->left == NULL){
		N->left = node_create(data);
		return 1;
	}else if(N->right == NULL){
		N->right = node_create(data);
		return 1;
	}else if(N->left->data){
		return node_add(N->left,data);
	}else if(N->right->data){
		return node_add(N->right,data);
	}else{
		printf("node_add fail\n");
		return 0;
	}

}
void node_print(node* N,int sign){
	if(sign == FRONT)
		printf("%d ",N->data);
	
	if(N->left) node_print(N->left,sign);
	
	if(sign == MIDDLE)
		printf("%d ", N->data);
	
	if(N->right) node_print(N->right,sign);
	
	if(sign == BACK)
		printf("%d ",N->data);	
	return;
}

int node_delete(node *N){
	if(N->left) node_delete(N->left);
    if(N->right) node_delete(N->right);
	free(N);
	return 0;
}


