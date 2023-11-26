#include <stdio.h>

// Define an enumeration named 'Day'
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Declare a variable of type 'enum Day'
    enum Day today;

    // Input: Get the day from the user (assuming user inputs a valid number between 0 and 6)
    int dayNumber;
    printf("Enter the day number (0-6): ");
    scanf("%d", &dayNumber);

    // Assign the user input to the 'today' variable
    today = (enum Day)dayNumber;

    // Display the corresponding day
    switch (today) {
        case SUNDAY:
            printf("Today is Sunday.\n");
            break;
        case MONDAY:
            printf("Today is Monday.\n");
            break;
        case TUESDAY:
            printf("Today is Tuesday.\n");
            break;
        case WEDNESDAY:
            printf("Today is Wednesday.\n");
            break;
        case THURSDAY:
            printf("Today is Thursday.\n");
            break;
        case FRIDAY:
            printf("Today is Friday.\n");
            break;
        case SATURDAY:
            printf("Today is Saturday.\n");
            break;
        default:
            printf("Invalid day number.\n");
            break;
    }

    return 0;
}
