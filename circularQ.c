#include <stdio.h>
#include <stdlib.h>
#define max_size 10

typedef struct {
	int front;
	int rear;
	int data[max_size];
} circularQ;

circularQ cq;

void init(circularQ *cq) {
	cq -> front = -1;
	cq -> rear = -1;
}

void isempty(circularQ *cq); 

void isfull(circularQ *cq);

void enqueue(circularQ *cq, int x);

void dequeue(circularQ *cq);

void front(circularQ *cq);

void print(circularQ *cq);
	
int main() {
	circularQ CQ;
	init(&CQ);
	enqueue(&CQ, 1);
	enqueue(&CQ, 2);
	enqueue(&CQ, 3);
	print(&CQ);
	dequeue(&CQ);
	dequeue(&CQ);
	dequeue(&CQ);
	dequeue(&CQ);
	print(&CQ);

	
	return 0;
}


void isempty(circularQ *cq) {
	if((cq -> front == -1) && (cq -> rear == -1))
		printf("circular queue is empty\n");
	else printf("circular queue is not empty\n");
}

void isfull(circularQ *cq) {
	if((cq -> rear + 1) % max_size == cq -> front)
		printf("circular queue is full\n");
	else printf("ciircular queue is not full\n");
}

void enqueue(circularQ *cq, int x) {
	if((cq -> rear + 1) % max_size == cq -> front)
		printf("circular queue is full\n");
	else if((cq -> front == -1) && (cq -> rear == -1)) {
		cq -> front = 0;
		cq -> rear = 0;
		cq -> data[cq -> rear] = x;
	}
	else {
		(cq -> rear)++;
		cq -> data[cq -> rear] = x;
	}
}
void dequeue(circularQ *cq) {
	if((cq -> rear == -1) && (cq -> front == -1))
		printf("circular queue will underflow");
	else if(cq -> rear == cq -> front) {
		printf("dequeued number is %d\n", cq -> data[cq ->front]);
		cq -> rear = -1;
		cq -> front = -1;
	}
	else {
		printf("dequeued number is %d\n", cq -> data[cq -> front]);
		cq -> front = (cq -> front + 1) % max_size;
	}
}
void print(circularQ *cq) {
	int i;
	
	for(i = cq -> front; i <= cq -> rear; i++) {
		if(i == -1) {
			break;
		}
		printf("%d ", cq -> data[i]);
	}
	printf("\n");

}

