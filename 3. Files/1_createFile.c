#include <stdio.h>

int main() {
    // File pointer
    FILE *file;

    // File path
    const char *filePath = "newfile.txt";

    // Open file for writing (create file)
    file = fopen(filePath, "w");

    // Check if the file was created successfully
    if (file == NULL) {
        printf("Unable to create the file.\n");
        return 1;
    }

    // Close the file after creating
    fclose(file);

    printf("File '%s' created successfully.\n", filePath);

    return 0;
}
