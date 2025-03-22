#include <stdio.h>
 float square(float a)
 {
    return a*a;
 }
 int main()
 {
    float num;

    printf("enter a number\n");
    scanf("%f",&num);

    printf("square of %f is %f\n", num, square(num));

    return 0;
 }