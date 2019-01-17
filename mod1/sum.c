#include<stdio.h>

int main()
{
	//Task: Define two integers
	//Display their values
	//Display the sum
	
	int bYear = 2000;
	int age = 18;
	printf("Enter your birth year:");
	scanf("%d", &bYear);
	printf("Enter your age:");
	scanf("%d", &age);
	printf("The current year is your birth year (%d) and your age (%d) added together.\n", bYear, age);
	printf("The year is %d.\n", bYear + age); 
	return 0;
}
