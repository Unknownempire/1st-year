#include <stdio.h>

int main() {
	int num, a, sum = 0;
	printf("Enter a number : ");
	scanf("%d", &num);

	int SIGN = -1;
	if(num < 0) num = num * SIGN;

	while(num > 0) {
		a = num % 10;
		sum = sum + a;
		num = num/10;
	}
	printf("Sum of digits is : %d", sum);

return 0;
}
