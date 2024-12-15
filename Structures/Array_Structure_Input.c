//Array Structure
//Input
#include <stdio.h>
#include <string.h> 
struct person
{
        char name[50];
        int age;
        float salary;
};
int main() 
{
    int totalnum;
    printf("Enter Number of total person:\n");
    scanf("%d", &totalnum);
    getchar();
    struct person person[totalnum];
    int i;
    for (i=0; i<totalnum; i++)
    {
        printf("Enter Information for person %d:\n", i + 1);

        // Read name using fgets (safe method)
        printf("Enter Name:\n");
        fgets(person[i].name, sizeof(person[i].name), stdin);
        
        // Remove trailing newline from fgets input
        person[i].name[strcspn(person[i].name, "\n")] = 0;

        // Read age and salary
        printf("Enter Age:\n");
        scanf("%d", &person[i].age);
        
        // Consume the leftover newline from scanf
        getchar();

        printf("Enter Salary:\n");
        scanf("%f", &person[i].salary);
        
        // Consume the leftover newline from scanf
        getchar();
        
    }
    for (i=0; i<totalnum; i++)
    {
        printf("Information for person %d:\n", i + 1);
        printf("Name = %s\n", person[i].name);  // Now printing the name
        printf("Age = %d\n", person[i].age);
        printf("Salary = %.2f\n", person[i].salary);
        
    }
  
    
    return 0;
}
