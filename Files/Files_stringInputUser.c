#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file;
    char name[100];
    fopen("test11.txt", "w");
    if (file==NULL)
    {
        printf("File is not created");
    }
    else
    {
    printf("File is created\n");
    printf("Enter your Full Name: ");
    fgets(name,sizeof(name),stdin);
    printf("File is written successfully\n");
    fclose(file);
    }
    return 0;
}
