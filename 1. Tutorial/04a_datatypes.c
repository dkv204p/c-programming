#include <stdio.h>

int main() {
    // Integer data types
    int integerVar = 10;
    short int shortVar = 32767;
    long int longVar = 2147483647;
    long long int longLongVar = 9223372036854775807;

    // Unsigned integer data types
    unsigned int unsignedVar = 4294967295;
    unsigned short int unsignedShortVar = 65535;
    unsigned long int unsignedLongVar = 4294967295;
    unsigned long long int unsignedLongLongVar = 18446744073709551615;

    // Floating-point data types
    float floatVar = 3.14;
    double doubleVar = 3.14159265359;
    long double longDoubleVar = 3.141592653589793238;

    // Character data type
    char charVar = 'A';

    // Displaying values
    printf("Integer: %d\n", integerVar);
    printf("Short Integer: %d\n", shortVar);
    printf("Long Integer: %ld\n", longVar);
    printf("Long Long Integer: %lld\n", longLongVar);

    printf("Unsigned Integer: %u\n", unsignedVar);
    printf("Unsigned Short Integer: %u\n", unsignedShortVar);
    printf("Unsigned Long Integer: %lu\n", unsignedLongVar);
    printf("Unsigned Long Long Integer: %llu\n", unsignedLongLongVar);

    printf("Float: %f\n", floatVar);
    printf("Double: %lf\n", doubleVar);
    printf("Long Double: %Lf\n", longDoubleVar);

    printf("Character: %c\n", charVar);

    return 0;
}
