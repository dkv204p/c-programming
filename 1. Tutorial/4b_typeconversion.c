#include <stdio.h>

int main() {
    // Implicit Type Conversion
    int integerVar = 10;
    double doubleVar = integerVar; // Implicit conversion from int to double
    printf("Implicit Conversion - Integer to Double: %lf\n", doubleVar);

    // Explicit Type Conversion (Casting)
    double anotherDoubleVar = 3.14;
    int intFromDouble = (int)anotherDoubleVar; // Explicit conversion from double to int
    printf("Explicit Conversion - Double to Integer: %d\n", intFromDouble);

    // Mixed-Type Expressions
    int num1 = 5;
    double num2 = 2.5;
    double result = num1 + num2; // Mixed-type expression, int implicitly converted to double
    printf("Mixed-Type Expression: %lf\n", result);

    return 0;
}
