#include <stdio.h>

int main() {
	float x, sum, T0 = 1, T1 = 1;
	int n = 1;
	
	
	printf("enter +ve value of x : ");
	scanf("%f", &x);
	
	sum = T0;
	 while(T0 > 0.00001) {
	    T1 = T1*x/n;
	    T0 = T1;
	 	sum = sum + T1;
	 	n++;
	 	
	 	
	 	
	 }
	 printf("No. of terms = %d\nvalue of exp(%f) = %f", n, x, sum);
	
	
	return 0;
}
