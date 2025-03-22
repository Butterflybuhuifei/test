#include <stdio.h>
int main() {
    int daysInMonth = 31;
    int startingDay = 2;  // December 1, 2015 is Tuesday, 
    //with 0 - 6 representing Sunday - Saturday
    // Print the header of the calendar
    printf(" December 2015\n");
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    // Print spaces before the first day
    for (int i = 0; i < startingDay; i++) {
        printf("  ");
    }
    // Print the dates
    for (int day = 1; day <= daysInMonth; day++) {
        printf("%4d", day);
        if ((day + startingDay) % 7 == 0 || day == daysInMonth) {
            printf("\n");
        }
    }
    return 0;
}