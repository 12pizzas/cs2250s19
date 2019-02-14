/*
 * =====================================================================================
 *
 *       Filename:  mainArgs.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:18:48 AM
 *       Revision:  none
 *       Compiler:  gcc mainArgs.c -o mainArgs.out
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
int main(int argc, char* argv[])
{
    printf("Argument cout is %d\n", argc);
    printf("Program Name  [%s]\n", argv[0]);

    for (int i=0; i < argc; i += 1)
    {
        printf("Argv %d [%s]\n", i, argv[i]);
    }

    return 0;
}
// Function Definitions


