#include <stdio.h>

int main() {
    // File pointer
    FILE *file;

    // File path
    const char *filePath = "newfile.txt";

    // Open file for reading
    file = fopen(filePath, "r");

    // Check if the file opened successfully for reading
    if (file == NULL) {
        printf("Unable to open the file for reading.\n");
        return 1;
    }

    // Read and display data from the file
    printf("Contents of the file:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}
