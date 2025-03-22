//Author: Happy
//Input: a
//Output: 0
//Description: This program is to count the number of digits in a character.    
//Others: No other functions are used.
#include <stdio.h>
int main()
{
    char a;//a is the character
    int NumOfDigit;//NumOfDigit is the number of digits in a character
    a='a';//a is assigned the value of 'a'
    if(0<=a<=9);//if the character is a digit
     NumOfDigit++;//increment the number of digits
    printf("%d",NumOfDigit);//print the number of digits
}