#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int item_num, size;
	int* item;
	int tail, head;
}Queue;

Queue* initQueue(int SizeNum);
int QueueGet(Queue* Q);
int QueuePush(Queue* Q, int Data);
int QueueShow(Queue* Q);
int QueueResize(Queue* Q,int SizeNum);
void QueueDelete(Queue* Q);

int main(int argc,char **argv) {
	int QueueSize, Select,Data;
	if(argc > 3 || argc < 2){
		printf("usage : %s [Queue size]\n",argv[0]);
		return 1;
	}

	Queue* MyQueue = initQueue(atoi(argv[1]));
	while(1){
		printf("1.PUSH  2.GET  3.SHOW  4.Resize  5.EXIT\n");
		scanf("%d",&Select);
		switch(Select){
			case 1: printf("input pus data : ");
					scanf("%d",&Data); 
					QueuePush(MyQueue,Data); break;
			
			case 2: printf("get data : %d\n",QueueGet(MyQueue));break;
			
			case 3: QueueShow(MyQueue);break;
			
			case 4: printf("input resize data");
					scanf("%d",&Data); 
					QueueResize(MyQueue,Data); break;
			
			case 5: printf("queue data");
					QueueShow(MyQueue);
					QueueDelete(MyQueue); 
					exit(1); 
			default: printf("input again \n");
		}		
	}
	return 1;
}

Queue* initQueue(int SizeNum) {

	Queue* MKQ = (Queue*)malloc(sizeof(Queue));
	MKQ->item = (int*)malloc(sizeof(int)*SizeNum);
	memset(MKQ->item,0,sizeof(int) * SizeNum);
	MKQ->item_num = 0;
	MKQ->size = SizeNum;
	MKQ->head = 0;
	MKQ->tail = 0;
	return MKQ;

}

int QueueGet(Queue* Q) {

	int Data;
	if (Q->item_num < 1) {
		printf("It doesn't have any item.\n");
		return -1;
	}
	Data = *(Q->item + Q->tail);
	*(Q->item + Q->tail) = 0;
	
	if(Q->tail == Q->size ) {
		Q->tail = 0;
	}
	else Q->tail += 1;
	Q->item_num-=1;
	return Data;

}

int QueuePush(Queue* Q, int Data) {

	if (Q->item_num >= Q->size){
		printf("it's full\n");
		return -1;
	}
	Q->item_num += 1;
	if(Q->head == (Q->size)) Q->head = 0;
	*(Q->item + Q->head) = Data;
	
	Q->head += 1;
	return 1;
}

int QueueShow(Queue* Q){
	int i = 0;
	for(i = 0; i < Q->size;i++){
		printf("%d : %d\n",i,*(Q->item+i));
	}
	return 1;
}

int QueueResize(Queue* Q, int SizeNum){
	
	int *str;
	int i = 0;
	int cnt = SizeNum;
	int pos = 0;
	if(Q->size > SizeNum){
		printf("Error Resize");
		return 0; 
	}
	str = (int*)malloc(sizeof(int) * SizeNum);
	memset(str,0,sizeof(int) * SizeNum);
	
	for(i = 0;i < Q->tail;i++){
		*(str+SizeNum) = *(Q->item + i);
	}
	for(i = (Q->size - 1);i>Q->tail;i--){
		*(str+cnt)  = *(Q->item + i);
		cnt--;
	}
	
	free(Q->item);
	Q->item = str;
	Q->size = SizeNum;
	pos = (Q->size-1) - Q->tail;
	Q->tail = (SizeNum -1) - pos;
	return 1;
}

void QueueDelete(Queue* Q){
	return free(Q);
}
