/*
 * =====================================================================================
 *
 *       Filename:  simpleCalculator.c
 *       Usage:     ./simpleCalculator.out <PARAM1> <PARAM2>
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:29:49 AM
 *       Revision:  none
 *       Compiler:  gcc simpleCalculator.c -o simpleCalculator.out
 *
 *         Author:  Christian Willener (), christianwillener@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants
#define EXIT 0
#define ADD 1
#define SUB 2
#define MUL 3

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int choice = 0;
    int num1, num2;
    //Validate argument count
    //return 1 otherwise
    if(argc != 3)
    {
        printf("Missing input paramaters\n");
        printf("Usage: %s <PARAM1> <PARAM2>\n", argv[0]);
        return 1;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    do
    {
        printf("What do you want to do with these numbers?\n");
        printf("\t 1) Addition\n");
        printf("\t 2) Subtraction\n");
        printf("\t 3) Multiplicaiton\n");
        printf("\t 0) End program\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case ADD:
                printf("%d + %d = %d\n", num1, num2, num1 + num2);
                break;
            case SUB:
                printf("%d - %d = %d\n", num1, num2, num1 - num2);
                break;
            case MUL:
                printf("%d * %d = %d\n", num1, num2, num1 * num2);
                break;
            case EXIT:
                printf("Leaving program\n");
            default:
                printf("Unsupported function\n");

                printf("Bye bye\n");
        }
    } while(choice != EXIT);
            return 0;
}
    // Function Definitions



