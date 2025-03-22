//Author: Happy
//Input:a
//Output:b
//Description:This program is to check the value of a and b
//Others:None
#include <stdio.h>
int main()
{
    int a=-1,b=0;//a and b are the variables
    if(a>=0)//if a is greater than or equal to 0
      {a++;b++;}//a and b are incremented
    if(a<0)//if a is less than 0
      {a--;b--;}//a and b are decremented
    printf("%d %d",a,b);//prints the value of a and b
}