/*
 * =====================================================================================
 *
 *       Filename:  satellite.c
 *
 *    Description:  Calculate altitude of satellite
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:49:48 AM
 *       Revision:  none
 *       Compiler:  gcc satellite.c -o satellite.out -lm
 *
 *         Author:  Christian Willener (), christianwillener@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double GRAVITY = 6.67e-11;   // Newton's constan
const double E_MASS = 5.97e24;     // Earth's mass
const double E_RADIUS = 6371e3;    // Earth's radius
const double PI = 3.14159265;      //Pi
// Function Prototypes

// Main Function
int main()
{
    double T = 0;
    double height;
    //Period
    printf("Enter the period in seconds: ");
    scanf("%lf", &T);
    // Height = [(G M T^2)/4pi^2]^1/3 - R
    height = (GRAVITY * E_MASS * pow(T, 2));
    
    height = height / (4 * pow(PI, 2) - E_RADIUS);

    height = cbrt(height);

    printf("The height is %lf m\n", height);
    return 0;
}
// Function Definitions


