//Run in a compiler
//Opening a file
#include <stdio.h>
int main() 
{
    FILE *file;
    fopen("test11.txt", "w");
    if (file==NULL)
    {
        printf("File is not created");
    }
    else
    {
    printf("File is created");
    fclose(file);
    }
    return 0;
}
