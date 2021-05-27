#include <stdio.h>
#include <stdlib.h>
#define max_size 10

typedef struct {
	int front;
	int rear;
	int data[max_size];
} queue;

queue q;
void enqueue(queue *q, int x);
void dequeue(queue *q);
void init(queue *q) {
	q -> front = -1;
	q -> rear = -1;
}
int isempty(queue *q);
int isfull(queue *q);

void print(queue *q) {
	int i;
	for(i = q -> front; i <= q -> rear; i++) {
		if(q -> rear == -1)
			break;
		printf(" %d", q -> data[i]);
	}
	printf("\n");
}

int main() {
	queue Q;
	init(&Q);
	enqueue(&Q, 1);
	enqueue(&Q, 2);
	print(&Q);
	dequeue(&Q);
	print(&Q);
	dequeue(&Q);
	print(&Q);
	dequeue(&Q);

	
	return 0;
}
int isempty(queue *q) {
	if((q -> rear = -1) && (q -> front = -1))
		return 1;
	else return 0;
}

int isfull(queue *q) {
	if(q -> rear == max_size - 1) 
		return 1;
	else return 0;
}

void enqueue(queue *q, int x){
	if((q -> front == -1) && (q -> rear == -1)) {
		q -> front = 0;
		q -> rear = 0;
		q -> data[q -> rear] = x;
	}
	else if((q -> rear == max_size - 1)) {
		printf("queue is overflowed");
	}

	else {
		(q -> rear)++;
		q -> data[q -> rear] = x;
	}

		
}

void dequeue(queue *q) {
	
	if((q -> front == -1) && (q -> rear == -1)) {
		printf("queue is underflowed");
		return;
	}
	else if(q -> front == q -> rear) {
		printf("dequeued number is %d\n", q -> data[q -> front]);
		q -> rear = -1;
		q -> front = -1;
	}
	else {
		printf(" dequeued number is %d\n",q -> data[q -> front]);
		(q -> front)++;
	}
}

