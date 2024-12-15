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
    person1.age = 27;
    person1.salary = 12590.80;
    printf("Person 1 age = %d \n",person1.age);
    printf("Person 1 salary = %.2lf \n",person1.salary);
    
    //Person 2
    person2.age = 22;
    person2.salary = 15190.80;
    printf("Person 2 age = %d \n",person2.age);
    printf("Person 2 salary = %.2lf \n",person2.salary);
    
    
    return 0;
}
