//Author:Happy
//Input: if (i && i++)
//Output: 1
//Description: The condition i && i++ is always true because i is not zero.
// So, i++ is executed and i is incremented by 1. 
//Therefore, the final value of i is 1.
#include <stdio.h>
int main()
{
    int i = 0;//i is initialized to 0
    if (i && i++)//i && i++ is always true because i is not zero
        i++;// i++ is executed and i is incremented by 1
    printf("%d\n", i);// prints the final value of i which is 1
}