#include <stdio.h>

int main() {
    // Constants for conversion
    const double MILES_TO_KILOMETERS = 1.60934;
    const double POUNDS_TO_KILOGRAMS = 0.453592;

    // Static input values
    double miles = 50.0;
    double pounds = 150.0;

    // Convert and display the values
    double kilometers = miles * MILES_TO_KILOMETERS;
    double kilograms = pounds * POUNDS_TO_KILOGRAMS;

    printf("Distance in kilometers: %lf\n", kilometers);
    printf("Weight in kilograms: %lf\n", kilograms);

    return 0;
}
