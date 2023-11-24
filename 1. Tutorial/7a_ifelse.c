#include <stdio.h>

int main() {
    int num = 10;

    // If statement
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    }

    // If-else statement
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    // Else-if ladder
    if (num > 0) {
        printf("%d is greater than 0.\n", num);
    } else if (num < 0) {
        printf("%d is less than 0.\n", num);
    } else {
        printf("%d is equal to 0.\n", num);
    }

    return 0;
}
