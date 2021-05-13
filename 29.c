#include <stdio.h>
int myRand()
{
 static unsigned int y = 31;
 static unsigned int a = 1103515245, b = 12345, c = (1 << 31);
 return y = (a * y + b) % c;
}
int main()
{
 int n;
 printf("ENTER SIZE OF RANDOM NUMBER ARRAY\n");
 scanf("%d", &n);
 int rndm[n];
 //INITIALISING ARRAY
 int i;
 for ( i = 0; i < n; i++)
 rndm[i] = 0;
 //CALLING OWN RANDOM FUNCTION
 for ( i = 0; i < n; i++)
 {
 rndm[i] = myRand();
 }
 for ( i = 0; i < n; i++)
 printf("%d\n", rndm[i]);
}
