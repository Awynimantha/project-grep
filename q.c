#include<stdio.h>
#include<malloc.h>


typedef q struct {
	int *array;
	int size;
	int front;
	int rear;
	int count;


};

q * createq(int size){
	q *new=(int *)malloc(sizeof(q));
	new->array=(int *)malloc(sizeof(int)*size);
	new->front=0;
	new->rear=0;
	new->count=0;
	return q;


}


void enque(q** qu,int value){
	q *queue=(*qu);
	if(size==queue->count){
	
		printf("The queue is full");
	}	
	else{
		queue->array[queue->rear]=value;
		queue->rear=(queue->rear+1)%queue->size;
		queue->count++;
	}
}

int deque(q** qu,){
	q *queue=(*qu);
	if(count==0){
		return -1;
	}
	else{
		queue->count--;
		int value=queue->array[queue->front];
		queue->front=(queue->front+1)%queue->size;
		return value;
	}
}

int main(){


}
