#include <stdio.h>

int main() {
	int num, count = 0, a;
	printf("Enter a number : ");
	scanf("%d", &num);
	int SIGN = -1;
	if(num < 0) num = num * SIGN;
	
	while(num > 0) {
		a = num % 10;
		count++;
		num = num/10;
	
	}
	printf("Number of digits are : %d", count);

return 0;
}
