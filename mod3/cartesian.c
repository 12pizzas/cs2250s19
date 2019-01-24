/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  Calculate the cartesian coordinates bsed on:
 *                  radius and the angle(degrees)
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:35:52 AM
 *       Revision:  none
 *       Compiler:  gcc cartesian.c -o cartesian.out -lm
 *
 *         Author:  Christian Willener (), christianwillener@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double PI = 3.14159;
// Function Prototypes

// Main Function
int main()
{
    double radius;
    double angleDegrees;
    double x_pos;
    double y_pos;
    double angleRadians;
    // 1) Capture user input for radius and theta angle
    printf("Enter radius: ");
    scanf("%lf", &radius);
    printf("Enter angle in degrees: ");
    scanf("%lf", &angleDegrees);
    //printf("%lf %lf\n", radius, angleDegrees);

    // 2) Convert the angle to radians
    angleRadians = (angleDegrees*PI/180);

    // 3) Calculate cartesian coordiantes
    x_pos = radius*cos(angleRadians);
    y_pos = radius*sin(angleRadians);

    // 4) Print results
    printf("%lf %lf", x_pos, y_pos);
    

    return 0;
}
// Function Definitions


