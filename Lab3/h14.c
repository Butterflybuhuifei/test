//Author: Happy
//Input: n
//Output: n!
//Description: Program to find factorial of a number
//Others: No other functions
#include <stdio.h>
int main()
{
    int i, n = 1;//n is the number whose factorial is to be found
    for(i = 1; i <= n; i++)//loop to find factorial
		n*=i;//n is multiplied by i
	printf("%d",n);//print the factorial
}
