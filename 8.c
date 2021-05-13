#include <stdio.h>
#include <stdlib.h>

int main() {

	float x;
	printf("enter number whose square root is to be found : ");
	scanf("%f", &x);

	float g1 = 0, g2 = x/2, e = 0.00001;

	do{
		g1 = g2;
		g2 = (g1 + (x/g1))/2;
	} while (abs(g1 - g2) > e);
	
	 printf("%f", g2);
	

return 0;
}
