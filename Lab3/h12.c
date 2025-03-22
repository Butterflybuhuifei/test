//Author: Happy
//Input: i
//Output: i
//Description: This program prints the numbers from 1 to 10 
//but skips the number 5.
//Others: No other functions are used.
#include <stdio.h>
int main()
{
    int i;//input variable
    //for loop
    for(i=1;i<=10;i++)
    {
        //if loop
        if(i==5) continue;//skip the value 5
        printf("%d ",i);//print the value of i
    }
}

