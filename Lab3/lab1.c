//Author:Happy
//Input: x
//Output: x^x
//Description: Calculate the product of x
//Others:Compare with sqrt() function in <math.h> library
//Date:2025-01-03
#include <stdio.h>
#include <math.h>

//Calculate the product of x
int prod(int x)
{
	if(x==0||x==1)
		return 1;
	else
		return x*prod(x-1);
}

int main()
{
	float		fNum;	//Input data
	float		fExp;	//Exponential value
	int			i,n;	//Loop

	printf("Please input a float number:");
	scanf("%f",&fNum);	//Input from keyboard
	
	//Calculate with formula exp(x) = 1 + x +x^2/2 + ...
	fExp	=	1;	//Initialize to 1
	n		=	10;	//Set the max loop time
	for(i=1;i<n;i++)
	{
		fExp = fExp + pow(fNum,i)/prod(i);
		//Use iteration formula
	}

	//Display result to monitor
	printf("Exponential of %f is %f\n",fNum,fExp);
    printf("exp(x) is %f\n",exp(fNum));

	//Program End
	return 0;
}