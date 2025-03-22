//Author: Happy
//Input: a positive integer
//Output: Square root value
//Description: Calculate square root value
//Date:2025/01/03
#include <stdio.h>
#include <math.h>

int main()
{
	int			iNum;	//Input data
	float		fSqrt;	//Square root value
	int			i,n;	//Loop

	printf("Please input a positive integer:");
	scanf("%d",&iNum);	//Input from keyboard
	
	//Calculate with formula x(n+1) = 0.5*(x[n]+A/x[n])
	fSqrt	=	1;	//Initialize to 1
	n		=	5;	//Set the max loop time
	for(i=0;i<n;i++)
	{
		fSqrt = 0.5*(fSqrt+iNum/fSqrt);//Use iteration formula
	}

	//Display result to monitor
	printf("Square root of %d is %f\n", iNum,fSqrt);
	printf("sqrt result is %f\n",sqrt(iNum));

	//Program End
	return 0;
    }