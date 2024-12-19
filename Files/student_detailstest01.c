#include <stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[50];
    int age, phoneNumber, num, i;
    // Open the file in read mode
    file = fopen("student.txt", "a");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("File not found or could not be opened.\n");
    }
    else
    {
        printf("File is opened successfully.\n");
        printf("Enter Total Number Of students:\n");
        scanf("%d", &num);
        getchar();
        for(i=1;i<=num;i++)
        {
           printf("Enter Student Name: ");
           fgets(name, sizeof(name), stdin);
           printf("Enter Student Age: ");
           scanf("%d", &age);
           printf("Enter Student Phone Number: ");
           scanf("%d", &phoneNumber);
           fprintf(file, "\n%s\t\t%d\t\t%d\n", name, age, phoneNumber);
           getchar();

        }

        fclose(file);
    }

    return 0;
}
