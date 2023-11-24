#include <stdio.h>

int main() {
    // Example of break in a loop
    printf("Example of break in a loop:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            printf("Breaking the loop at i = 3.\n");
            break;
        }
        printf("%d\n", i);
    }

    // Example of continue in a loop
    printf("\nExample of continue in a loop:\n");
    for (int j = 1; j <= 5; j++) {
        if (j == 2 || j == 4) {
            printf("Skipping iteration at j = %d using continue.\n", j);
            continue;
        }
        printf("%d\n", j);
    }

    return 0;
}
