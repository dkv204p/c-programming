#include <stdio.h>

int main() {
    // Integer input
    int integerInput;
    printf("Enter an integer: ");
    scanf("%d", &integerInput);

    // Float input
    float floatInput;
    printf("Enter a floating-point number: ");
    scanf("%f", &floatInput);

    // String input
    char stringInput[100];
    printf("Enter a string: ");
    scanf("%s", stringInput);

    // Displaying the inputs
    printf("\nYou entered:\n");
    printf("Integer: %d\n", integerInput);
    printf("Float: %f\n", floatInput);
    printf("String: %s\n", stringInput);

    return 0;
}
