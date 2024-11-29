#include <stdio.h>

int main() {
    // Declare name with sufficient size
    char name[6];
    
    // Assign characters individually
    name[0] = 'x';
    name[1] = 'y';
    name[2] = 'z';
    name[3] = '2';
    name[4] = '2';
    name[5] = '\0'; // Null terminator
    
    // Print the resulting string
    printf("name = %s\n", name);
    char name2[] = "xyz22";  // Automatically allocates enough space for the string and null terminator
    printf("name2 = %s\n", name2);
    return 0;
}
