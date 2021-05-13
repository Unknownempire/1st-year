#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};
struct node* head;
void insert(int x) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = x;
	temp -> next = head;
	head = temp;
}

void print() {
	struct node* temp = head;
	printf("List is : ");
	while(temp != NULL){
		printf("%d ", temp -> data);
		temp = temp -> next;

	}
	printf("\n");
}
void insert_at_nth(int data, int n){
	struct node* temp1 = (struct node*)malloc(sizeof(struct node));
	temp1 -> data = data;
	temp1 -> next = NULL;
	if(n == 1) {
		temp1 -> next = head;
		head = temp1;
	}
	struct node* temp2 = head;
	int i;
	for(i = 0; i < n - 2; i++) {
		temp2 = temp2 -> next;
	}
	temp1 -> next = temp2 -> next;
	temp2 -> next = temp1;

}

void delete(int n) {
	struct node* temp1 = head;
	if(n == 1) {
		head = temp1 -> next;
		free(temp1);
		return;
	}
	int i;
	for(i = 0; i < n-2; i++)
		temp1 = temp1 -> next;
	struct node* temp2 = temp1 -> next;
	temp1 -> next = temp2 -> next;
	free(temp2);

}

void reverse() {
	struct node *current, *next, *prev;
	current = head;
	prev = NULL;
	while(current != NULL) {
		next = current -> next;
		current -> next = prev;
		prev = current;
		current = prev;
	}
	head = prev;

}

void Print() {
	while(head != NULL) {
		printf("%d ", head -> data);
		head = head -> next;
	}
}

int main() {
	head = NULL;
	printf("How many elements : ");
	int x, n, i;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		printf("Enter the number : ");
		scanf("%d", &x);
		insert(x);

	}

	print();
	//insert_at_nth(3,2);
	//print();
	int y;
	printf("Enter index of number to be deleted : ");
	scanf("%d", &y);
	delete(y);
	print();
	
	reverse();
	Print();

return 0;
}
