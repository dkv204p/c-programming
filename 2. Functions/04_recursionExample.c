#include <stdio.h>

// Function to print numbers from 1 to n using recursion
void printNumbers(int n) {
    if (n > 0) {
        // Recursive call to print numbers from 1 to n
        printNumbers(n - 1);
        printf("%d ", n);
    }
}

int main() {
    // Input: The limit of numbers to print
    int limit;

    // Get user input
    printf("Enter the limit of numbers to print: ");
    scanf("%d", &limit);

    // Check if the limit is positive
    if (limit <= 0) {
        printf("Please enter a positive limit.\n");
    } else {
        // Call the printNumbers function to print numbers from 1 to the given limit
        printf("Numbers from 1 to %d: ", limit);
        printNumbers(limit);
        printf("\n");
    }

    return 0;
}
