#include <stdio.h>
#include <math.h>

int main() {
	int a, b = 1, rev = 0;
	int SIGN = 1;

	printf("Enter Number : ");
	scanf("%d", &a);

	if(a < 0) {
	        SIGN = -1;
	}
	a = SIGN * a;
	
	
	while(a > 0) {
		b = a % 10;
		rev = rev*10 + b ;
		
		a = a/10;
	
	}
	printf("reverse num : %d",SIGN * rev);



return 0;
}
