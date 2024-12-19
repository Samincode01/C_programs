#include <stdio.h>
int main()
{
    FILE *file;
    char fname[50];
    char lname[50];
    int age;

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
        fscanf(file, "%s %s %d", &fname, &lname, &age);
        printf("First name = %s, Last Name = %s, Age = %d", fname, lname, age);
        fclose(file);
    }

    return 0;
}
