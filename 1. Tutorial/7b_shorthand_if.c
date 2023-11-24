#include <stdio.h>

int main() {
    int num = 10;

    // Shorthand if-else statement
    // Syntax: condition ? expression_if_true : expression_if_false
    num > 0 ? printf("%d is positive.\n", num) : printf("%d is not positive.\n", num);

    return 0;
}
