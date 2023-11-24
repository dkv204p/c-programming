#include <stdio.h>

int main() {
    // Declare a variable
    int number = 42;

    // Declare a pointer and initialize it with the address of the variable
    int *pointer = &number;

    // Access the value using the pointer
    printf("Value of the variable: %d\n", number);
    printf("Value accessed through the pointer: %d\n", *pointer);

    // Modify the value using the pointer
    *pointer = 99;

    // Display the modified value
    printf("Modified value of the variable: %d\n", number);

    // Display the memory address
    printf("Memory address of the variable: %p\n", (void*)&number);
    printf("Memory address stored in the pointer: %p\n", (void*)pointer);

    return 0;
}
