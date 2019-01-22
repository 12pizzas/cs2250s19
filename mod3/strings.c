/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Learn to use strings
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:49:34 AM
 *       Revision:  none
 *       Compiler:  gcc strings.c -o strings.out
 *
 *         Author:  Christian Willener (), christianwillener@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
const int SIZE = 50;
// Main Function
int main()
{
    char fName[SIZE];
    unsigned int long age;
    char lName[SIZE];
    printf("Please enter your first name: ");
    scanf("%s", fName);
    printf("Please enter your last name: ");
    scanf("%s", lName);
    printf("Please enter your age: ");
    scanf("%lu", &age);
    printf("Hi %s %s %lu\n", fName, lName, age);

    return 0;
}
// Function Definitions


