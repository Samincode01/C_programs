#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file;
    char name [20] = "new name";
    int length = strlen(name);
    int i;
    file = fopen("test11.txt", "w");
    if (file==NULL)
    {
        printf("File is not created");
    }
    else
    {
    printf("File is created\n");
    for(i=0; i<length; i++)
    {
        putc(name[i],file);
    }
    printf("File is written successfully");
    fclose(file);
    }
    return 0;
}
