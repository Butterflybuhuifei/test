//Author:Happy
//Input:i=10
//Output:i
//DEscription:switch case
//Others:none
#include <stdio.h>
int main()
{
    int i=10;//Input i=10
    switch(i+1)//i+1=11
    {
        case 10:i++;//i=11
        case 11:i--;//i=10
        case 12:i++;//i=11
        case 13:i--;//i=10
    }
    printf("i=%d\n",i);//Output
}