//Author:Happy
//Input:a=0
//Output:b
//Description:This program checks if the value of a is equal to 0 
//and increments or decrements the value of b accordingly.
//Others:None
#include <stdio.h>
int main()
{
    int a=0,b=0;//a=0
    if(a==0)//a==0
    b++;//b=1
    else//a!=0
    b--;//b=-1
    printf("b=%d\n",b);//Output b
    return 0;//End of program
}