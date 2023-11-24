#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize strings
    char str1[] = "Hello";
    char str2[] = "World";

    // String Length (strlen)
    printf("Length of str1: %zu\n", strlen(str1));

    // String Concatenation (strcat)
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);

    // String Copy (strcpy)
    char copy[20];
    strcpy(copy, str1);
    printf("Copied String: %s\n", copy);

    // String Comparison (strcmp)
    if (strcmp(str1, copy) == 0) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }

    // Substring (strstr)
    char sentence[] = "This is a sample sentence.";
    char word[] = "sample";
    char* substring = strstr(sentence, word); //Pointer variable - We will learn about it in upcoming 

    if (substring != NULL) {
        printf("'%s' found in the sentence.\n", word);
    } else {
        printf("'%s' not found in the sentence.\n", word);
    }

    return 0;
}
