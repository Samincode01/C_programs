#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file;
    char name[100];
    int age;
    file = fopen("name_age.txt", "a");
    if (file==NULL)
    {
        printf("File is not created");
    }
    else
    {
    printf("File is created\n");
    printf("Enter your Full Name: ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name, "\n")] = 0;
    printf("Enter your age: ");
    scanf("%d", &age);
    fprintf(file, "Name= %s, Age= %d\n", name, age);
    printf("File is written successfully\n");
    fclose(file);
    }
    return 0;
}
