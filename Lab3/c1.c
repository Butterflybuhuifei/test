//Author:Ziyan YE
//Description:This program is to calculate the square root of a number using the Newton-Raphson method
//Input: A number
//Output: The square root of the number
//Date:2025/01/03
#include <stdio.h>
#include <math.h>

double mySqrt(double A)
{
    double x=1;
    double x_next;
    do{
        x_next = 0.5*(x+A/x);
        if(fabs(x_next-x)<1e-6)
        {
            break;
        }
        x = x_next;
    } while (1);
      return x_next; 
}
int main()
{
    double A;
    printf("Enter a numnber:");
    scanf("%lf",&A);

    double my_result = mySqrt(A);
    double math_result = sqrt(A);

    printf("my_sqrt is %lf\n",my_result);
    printf("math_sqrt is %lf\n",math_result);
    return 0;
}