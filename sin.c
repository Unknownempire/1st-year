#include <stdio.h>
#include <math.h>

int main() {
	float x, sum = 0;
	int n = 3;
	int count = 1;
	
	
	printf("enter value in degree : ");
	scanf("%f", &x);
	float deg = x;
	x = x * (3.142/180);
	float T1 = -pow(x,3)/(n * (n - 1));
	
		
	sum = x;
	 while(T1 > 0.00001 || T1 < -0.00001) {
	 	sum = sum + T1;
	 	
	 	
	 	n = n + 2;
	 	count++;
	 	
	    T1 = -T1*pow(x,2)/(n * (n - 1));
	   	
	 
	 	
	 }
	 printf("No. of terms = %d\nvalue of sin(%f) = %f", count, deg, sum);
	
	
	return 0;
}
