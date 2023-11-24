#include <stdio.h>

int main() {
    // Static input value
    int choice = 2;

    switch (choice) {
        case 1:
            printf("You selected Option 1.\n");
            break;
        case 2:
            printf("You selected Option 2.\n");
            break;
        case 3:
            printf("You selected Option 3.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
