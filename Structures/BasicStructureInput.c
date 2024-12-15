//Basic Structure
#include <stdio.h>
struct person
{
        int age;
        float salary;
};
int main() 
{
    
    struct person person1, person2;
    //Person 1
    printf("Enter Information for Person 1:\n");
    printf("Enter Person 1 age : ");
    scanf("%d", &person1.age);
    printf("Enter Person 1 salary : ");
    scanf("%f", &person1.salary);
    printf("Person 1 age = %d \n",person1.age);
    printf("Person 1 salary = %.2lf \n",person1.salary);
    
    //Person 2
    printf("Enter Information for Person 2:\n");
    printf("Enter Person 2 age : ");
    scanf("%d", &person2.age);
    printf("Enter Person 2 salary : ");
    scanf("%f", &person2.salary);
    printf("Person 2 age = %d \n",person2.age);
    printf("Person 2 salary = %.2lf \n",person2.salary);
    
    
    return 0;
}
