#include <stdio.h>

int main() {
    // File pointer
    FILE *file;

    // File path
    const char *filePath = "newfile.txt";

    // Open file for writing in append mode
    file = fopen(filePath, "a");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Unable to open the file for writing in append mode.\n");
        return 1;
    }

    // Data to append to the file
    const char *data = "\nThis data is appended to the file.";

    // Write data to the file
    fprintf(file, "%s", data);

    // Close the file after writing
    fclose(file);

    printf("Data appended to the file successfully.\n");

    return 0;
}
