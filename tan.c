#include <stdio.h>
#include <math.h>

float sine(float deg) {
	int count = 1;
	int n = 3;
	
	float rad = deg * (3.142/180);
	float T1 = -pow(rad,3)/(n * (n - 1));
	
	
		
	float sum = rad;
	 while(T1 > 0.00001 || T1 < -0.00001) {
	 	sum = sum + T1;
	 	
	 	
	 	n = n + 2;
	 	count++;
	 	
	    T1 = -T1*pow(rad,2)/(n * (n - 1));
	   	
	 
	 	
	 }
	 printf("\nNo. of terms = %d\nvalue of sin(%f) = %f\n", count, deg,sum);
	 return sum;
	 
	
}
float cosine(float deg) {
	float T1 = 1;
	int n = 2;
	int count = 1;
	
	float rad = deg * (3.142/180);
	
	float sum = 1 ;
	 while(T1 > 0.00001 || T1 < -0.00001) {
	    T1 = -T1*pow(rad,2)/(n*(n - 1));
	    
	 	sum = sum + T1;
	 	count++;
	 	
	 	n = n + 2;
	 		
	 }
	 printf("\nNo. of terms = %d\nvalue of cos(%f) = %f\n", count, deg, sum);
	 return sum;
	
	
}
float  tangent(int deg) {
	printf("value of tan(deg)= %f\n", sine(deg)/cosine(deg));
	return sine(deg)/cosine(deg);
}

int main() {
	float deg;
	
	
	printf("enter value in degree : ");
	scanf("%f", &deg);
    
  
    tangent(deg);
    
	return 0;
}
