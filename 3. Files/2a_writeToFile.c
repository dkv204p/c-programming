#include <stdio.h>

int main() {
    // File pointer
    FILE *file;

    // File path
    const char *filePath = "newfile.txt";

    // Open file for writing
    file = fopen(filePath, "w");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Unable to open the file for writing.\n");
        return 1;
    }

    // Data to write to the file
    const char *data = "Hello, File!\nThis is a simple file write example.";

    // Write data to the file
    fprintf(file, "%s", data);

    // Close the file after writing
    fclose(file);

    printf("Data written to the file successfully.\n");

    return 0;
}
