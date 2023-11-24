#include <stdio.h>

int main() {
    // Declare an array
    int numbers[] = {1, 2, 3, 4, 5};

    // Declare a pointer and initialize it with the address of the first element of the array
    int *pointer = numbers;

    // Access and print array elements using pointer notation
    printf("Array elements using pointer notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(pointer + i));
    }
    printf("\n");

    // Modify array elements using pointer notation
    for (int i = 0; i < 5; i++) {
        *(pointer + i) *= 2;
    }

    // Display the modified array
    printf("Modified array elements using pointer notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
