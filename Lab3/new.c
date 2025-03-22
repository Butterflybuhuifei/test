#include <stdio.h>
int main() 
{
	int grade = 0;

	printf("Please enter your grade: ");
	scanf("%d", &grade);

	if ( grade >= 80)
		printf("This is not a great mark!\n");
	else
		printf("This is a bad grade.\n");
	
	return 0;
}