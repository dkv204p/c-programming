#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);

int main() {
    // Input: Two numbers
    int num1, num2;

    // Get user input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the add function and display the result
    int result = add(num1, num2);
    printf("Sum: %d + %d = %d\n", num1, num2, result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
