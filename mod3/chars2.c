/*
 * =====================================================================================
 *
 *       Filename:  chars2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:05:03 AM
 *       Revision:  none
 *       Compiler:  gcc chars2.c -o chars2.out
 *
 *         Author:  Christian Willener (), christianwillener@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char c = '0';

    printf("Enter the first letter of your first name: \n");
    scanf("%c", &c);
    printf("Your initial is [%c]\n", c);
    printf("C is %c\n", c);
    printf("C is %d\n", c);
    printf("C is 0x%X\n", c);
    printf("C is 0x%x\n", c);

    return 0;
}
// Function Definitions


