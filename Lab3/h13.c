#include <stdio.h>
int main()
{
    int dayInMonth = 31;
    int startingDay = 2;

    printf(" December 2015\n");
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    for (int i = 0; i < dayInMonth; i++)
    {
        printf("   ");
    }

    for (int day = 1; day <= dayInMonth; day++)
    {
        printf("%2d",day);
        if ((day+startingDay) % 7 == 0 || day == dayInMonth)
        {
            printf("\n");
        }
    }

    return 0; 
}