#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 256

typedef struct {
	int data[MAX_SIZE];
	int top;

} stack;


void push(stack *s,int x); 
int pop(stack *s); 
int top(stack *s);

void isempty(stack *s);
void makempty(stack *s);
void init(stack *s) {
	s -> top = -1;
}
stack s;
void print();

int main() {
	stack S;
	init(&S);
	push(&S,2);
	printf("\n");
	push(&S,3);
	printf("\n");
	push(&S,4);
	printf("\n");
	print(&S);
	printf("\n");
	
	int status = pop(&S);
	printf("%d", status);
	printf("\n");
	push(&S,5);
	printf("\n");
	print(&S);
	printf("\n");

	return 0;
}

void push(stack *s, int x) {
	if(s -> top == MAX_SIZE - 1) {
	printf("Error stack will overflow!!");
	}
	else {
		s -> top += 1;
		s -> data[s ->top] = x;
	}
}
int pop(stack *s) {
	
	if(s -> top == -1) {
		printf("Error stack will underflow");
		return -1;
	}
	else {
		int x = s -> data[s -> top] ;
		(s -> top)--;
		return x;
	}

}

int top(stack *s) {
	return s -> data[s -> top];
}

void isempty(stack *s) {
	if(s -> top = -1)
		printf("stack is empty");
	else {
		printf("stack is not empty");
	}
}

void makempty(stack *s) {
	s -> top = -1;
}
void print(stack *s) {
	int i;
	for(i = 0; i <=s -> top ; i++) {
		printf("%d ", s -> data[i]);
	}
}
