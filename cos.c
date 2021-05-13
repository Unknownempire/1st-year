#include <stdio.h>
#include <math.h>

int main() {
	float x, sum, T1 = 1;
	int n = 2;
	int count = 1;
	
	
	printf("enter value in degree : ");
	scanf("%f", &x);
    float  deg = x;
	x = x * (3.142/180);
	
	sum = 1 ;
	 while(T1 > 0.00001 || T1 < -0.00001) {
	    T1 = -T1*pow(x,2)/(n*(n - 1));
	    
	 	sum = sum + T1;
	 	count++;
	 	
	 	n = n + 2:
	 		
	 }
	 printf("No. of terms = %d\nvalue of cos(%f) = %f", count, deg, sum);
	
	
	return 0;
}
