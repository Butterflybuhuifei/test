//Author:Ziyan YE
//Description:Approximate the exponential function using the Taylor series expansion
//Input: x and n
//Output: approximate value of e^x
//Date:2024/01/03
#include <stdio.h>
#include <math.h>

double factorial(int n)
{
    double result = 1;
    for(int i =1;i<=n;i++)
    {
        result*=i;
    }
    return result;
}

double approximateExp(double x,int n)
{
    double sum=1;
    double term=1;
    for(int i=1;i<=n;i++)
    {
        term*=x/i;
        sum+=term;
    }
    return sum;
}
int main()
{
    double x;
    int n;

    printf("Enter the value of x:");
    scanf("%lf",&x);
    printf("Enter the value of n:");
    scanf("%d",&n);

    double approxResult=approximateExp(x,n);
    double mathResult=exp(x);

    printf("Approximate value of e^%lf is %lf\n",approxResult);
    printf("Mathematical value of e^%lf is %lf\n",mathResult);
    return 0;
}