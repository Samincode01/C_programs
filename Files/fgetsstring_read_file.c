#include <stdio.h>

int main()
{
    FILE *file;
    char ch[50]; // Set the limit of characters (50 to include the null terminator)
    
    // Open the file in read mode
    file = fopen("name_age.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("File not found or could not be opened.\n");
    }
    else
    {
        printf("File is opened successfully.\n");

        // Read and print the content of the file line by line
        while (fgets(ch, sizeof(ch), file) != NULL)
        {
            printf("%s", ch); // Print each line from the file
        }

        // Close the file
        fclose(file);
    }

    return 0;
}
