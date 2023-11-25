#include <stdio.h>

int main() {
    // Declaration and initialization of an integer array
    int numbers[] = {1, 2, 3, 4, 5};

    // Displaying array elements using a for loop
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Summing up the array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
