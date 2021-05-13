#include <stdio.h>

int main() {
	int N, sum = 0, i, x = 0;
	printf("Enter Number of numbers : ");
	scanf("%d", &N);
	for(i =1; i <= N; i++) {
		printf("Enter number %d : ", i);
		scanf("%d", &x);
		sum = sum + x;
	}
	printf("sum : %d", sum);
return 0;
}
