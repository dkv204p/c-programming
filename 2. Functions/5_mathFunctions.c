#include <stdio.h>
#include <math.h>

int main() {
    // Input: A number for mathematical calculations
    double number;

    // Get user input
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate and display the absolute value
    printf("Absolute Value of %.2lf = %.2lf\n", number, fabs(number));

    // Calculate and display the arccosine
    printf("Arccosine of %.2lf = %.2lf\n", number, acos(number));

    // Calculate and display the arcsine
    printf("Arcsine of %.2lf = %.2lf\n", number, asin(number));

    // Calculate and display the arctangent
    printf("Arctangent of %.2lf = %.2lf\n", number, atan(number));

    // Calculate and display the cube root
    printf("Cube Root of %.2lf = %.2lf\n", number, cbrt(number));

    // Calculate and display the cosine
    printf("Cosine of %.2lf = %.2lf\n", number, cos(number));

    // Calculate and display the exponential function
    printf("e^%.2lf = %.2lf\n", number, exp(number));

    // Calculate and display the sine
    printf("Sine of %.2lf = %.2lf\n", number, sin(number));

    // Calculate and display the tangent
    printf("Tangent of %.2lf = %.2lf\n", number, tan(number));

    return 0;
}
