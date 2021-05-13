#include <stdio.h>

int main() {
	int digits, i, number = 0;
  	printf("Enter number of digits : ");
  	scanf("%d", &digits);

	int array[digits]; // declaration of array

	for(i = 0; i < digits; i++) {      // entering number
		printf("enter digit : ");		
		scanf("%d", &array[i]);

		number = number * 10 + array[i];   	//adding digit one by one
	}
		
	printf("Number is %d", number);
  	return 0;
}
