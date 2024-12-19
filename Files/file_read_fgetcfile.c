#include <stdio.h>
int main()
{
    FILE *file;
    char ch;
    file = fopen("name_age.txt", "r");
    if (file==NULL)
    {
        printf("File is not created");
    }
    else
    {
    printf("File is opened\n");
    while(!feof(file))
    {
        ch = fgetc(file);
        printf("%c", ch);
    }
    fclose(file);
    }
    return 0;
}
