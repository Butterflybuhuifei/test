//Author: Happy
//Input: year
//Output: leap year or not
//Description: Program to check if a year is leap year or not
//Others: 0
#include <stdio.h>
int main()
{
    int year = 0;// variable declaration
    printf("Enter a year: ");
    scanf("%d", &year);// input
    // logic if statement
    if (year % 4 == 0 &&( year % 100 != 0 || year % 400 == 0))
    {
        // if condition satisfied
        printf("%d is a leap year.\n", year);
    }
    // else printf("%d is not a leap year.\n", year);
    else printf("%d is not a leap year.\n", year);
    return 0;// return statement
}