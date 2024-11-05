#include <stdio.h>

int main() {
    int age;
    float height,height1, weight, bmi;
    
    
    printf("===Welcome to BMI Calculator by Samincode01===\n");
  
    printf("Enter Age: ");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("Enter height(cm): ");
        scanf("%f", &height1);
        height= height1/100;
        printf("Enter weight(KG): ");
        scanf("%f", &weight);
        bmi= weight / (height * height);
    }
       if (bmi < 18.5)
            printf("You are Underweight. Your BMI is= %.2f", bmi);
        else if (bmi >= 18.5 && bmi < 24.9)
            printf("You are Normal wight. Your BMI is= %.2f", bmi);
        else if (bmi >= 25 && bmi < 29.9)
            printf("You are Overweight. Your BMI is= %.2f", bmi);
        else
            printf("You are Obese. Your BMI is= %.2f", bmi);
    printf("====BMI CHART====\n");
    printf("Underweight: BMI < 18.5\n");
    printf("Normal weight: BMI 18.5 - 24.9\n");
    printf("Overweight: BMI 25 - 29.9\n");
    printf("Obese: BMI ≥ 30\n");
else
 printf("Under 18 has difference based on age and gender. It has some pecentage");
    return 0;

}


