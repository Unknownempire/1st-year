#include <stdio.h>
// for taking absolute value
#define SIGN(x) (((x) >= 0) ? 1 : -1)
double reciprocal(double);
int main()
{
 // input should be appropriate according to taken datatype
 // as well as according to relative error
 double x;
 printf("Please Enter the number whose reciprocal is to calculated = ");
 scanf("%lf", &x);
 printf("\nThe reciprocal of %lf is %lf", x, reciprocal(x));
 return 0;
}double reciprocal(double y)
{
 // guessing x2 so that the function converge
 // x1 to store x2 for comparison
 double x2 = 0.000001, x1;
 do
 {
 x1 = x2;
 x2 = x1 * (2 - y * x1);
 } while (SIGN(x1 - x2) * (x1 - x2) > 0.00001*x1);
 return x2;
}
