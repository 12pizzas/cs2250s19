/*
 * =====================================================================================
 *
 *       Filename:  ballDropped2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:40:40 AM
 *       Revision:  none
 *       Compiler:  gcc -o -lm
 *
 *         Author:  Christian Willener (), christianwillener@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
    const double GRAVITY = 9.8;
    const double BUILDING = 500;
// Function Prototypes

// Main Function
int main()
{

    double time = 0;
    double distance = 0;
    double fromGround;

    printf("Enter the time in seconds: ");
    scanf("%lf", &time);

    distance = 0.5 * GRAVITY * pow(time, 2);

    printf("The ball has fallen %lf meters after %lf seconds.\n",
            distance, time);

    return 0;
}
// Function Definitions


