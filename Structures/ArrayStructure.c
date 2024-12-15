//Array Structure
#include <stdio.h>
struct person
{
        int age;
        float salary;
};
int main() 
{
    
    struct person person[4];
    int i;
    for (i=0; i<4; i++)
    {
        printf("Enter Information for person %d:\n", i+1);
        printf("Enter Age:\n");
        scanf("%d", &person[i].age);
        printf("Enter Salary:\n");
        scanf("%f", &person[i].salary);
        
    }
    for (i=0; i<4; i++)
    {
        printf("Information for person %d\n:", i+1);
        printf("Age = %d\n", person[i].age);
        printf("Salary = %f\n", person[i].salary);
        
    }
  
    
    return 0;
}
