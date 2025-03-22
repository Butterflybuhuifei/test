//Author: Happy
//Input:a
//Output:b
//Description:This program is to check the value of a and b
//Others:None
#include <stdio.h>
int main()
{
    int a=-1,b=0;//Initialize a and b
    if(a>=0)//If a is greater than or equal to 0
      a++;b++;//Increase a and b by 1
    if(a<0)//If a is less than 0
       a--;b--;//Decrease a and b by 1
    printf("%d %d",a,b);//Print the value of a and b
}