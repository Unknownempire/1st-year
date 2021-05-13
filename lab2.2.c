#include <stdio.h>

int main() {
	int N = 0, i = 0, count = 0, x;
	while(N <= 0){
	printf("Enter number of times to enter a number : ");   // loop for entering positive N only
	scanf("%d", &N);
	}

	do {
		printf("Enter value of x%d :", i);
		scanf("%d",&x);
		if(x >= 0 && x <= 100){
		 i++;
		}	
		
		if(x >= 40 && x <= 100) count++;
	} while (i < N);

	printf("N = %d, Count = %d",N, count );

return 0;
}
