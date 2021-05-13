#include <stdio.h>

void swap(int a,int b){
	int temp;
	temp = b;
	b    = a;
	a    = temp;
	
	printf("%d  %d", a, b);
}
int main() {
	int x = 5, y = 2;
	swap(x, y);
	printf("\n");
	printf("%d %d", x, y);
	
	
	return 0;
}
