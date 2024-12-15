//Basic Structure
#include <stdio.h>
struct person
{
        int age;
        float salary;
};
int main() 
{
    int totalnum;
    printf("Enter Number of total person:\n");
    scanf("%d", &totalnum);
    struct person person[totalnum];
    int i;
    for (i=0; i<totalnum; i++)
    {
        printf("Enter Information for person %d:\n", i+1);
        printf("Enter Age:\n");
        scanf("%d", &person[i].age);
        printf("Enter Salary:\n");
        scanf("%f", &person[i].salary);
        
    }
    for (i=0; i<totalnum; i++)
    {
        printf("Information for person %d:\n", i+1);
        printf("Age = %d\n", person[i].age);
        printf("Salary = %f\n", person[i].salary);
        
    }
  
    
    return 0;
}
