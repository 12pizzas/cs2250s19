#include<stdio.h>

// Comments woo
//
// To compilw my code run this command: gcc <file.c> -o <file>
// To run your code: <./file>
int main()
{
	// int <label>
	int age = 21;
	int weight = 0;
	// printf() to print output
	printf("How old are you?\n");
	// use placeholder for age
	printf("I am %d years old.\n", age);
	printf("The address of int age is = %p\n", &age);
	age = 23;
	printf("I am %d years old.\n", age);
	printf("You are %d years and %d pounds\n", age, weight);
	return 0;
}
