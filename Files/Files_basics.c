#include <stdio.h>

int main() {
    FILE *file;  // Declare a pointer for the file

    // 1. Create and write to a file
    file = fopen("example.txt", "w");  // Open the file in write mode (creates the file)
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;  // Exit if the file can't be opened
    }

    // Write a simple line to the file
    fprintf(file, "Hello, this is a test file.\n");

    // Close the file after writing
    fclose(file);

    // 2. Open the file for reading
    file = fopen("example.txt", "r");  // Open the file in read mode
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;  // Exit if the file can't be opened
    }

    // Read and print the contents of the file (one line)
    char buffer[100];  // Buffer to hold the data read from the file
    fgets(buffer, sizeof(buffer), file);  // Read one line from the file
    printf("%s", buffer);  // Print the line read from the file

    // Close the file after reading
    fclose(file);

    return 0;
}
