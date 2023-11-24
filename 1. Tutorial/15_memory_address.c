#include <stdio.h>

int main() {
    // Declare variables
    int integerValue = 42;
    float floatValue = 3.14;
    char charValue = 'A';

    // Print memory addresses
    printf("Memory address of integerValue: %p\n", (void*)&integerValue);
    printf("Memory address of floatValue: %p\n", (void*)&floatValue);
    printf("Memory address of charValue: %p\n", (void*)&charValue);

    return 0;
}
