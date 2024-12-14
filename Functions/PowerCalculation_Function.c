#include <stdio.h>

void calculatePower(double base, double exp) {
    double result = 1;

    // Handling the case where exponent is zero
    if (exp == 0) {
        result = 1;
    } else {
        // Loop to calculate the power
        for (int i = 1; i <= exp; i++) {  // Loop runs exp times
            result = result * base;
        }
    }

    printf("%.2lf\n", result);  // Printing the result with 2 decimal places
}


int main() {
    double base, exp;
    printf("Enter base: \n");
    scanf("%lf", &base);
    printf("Enter exp: \n");
    scanf("%lf", &exp);
    calculatePower(base,exp);
    return 0;
}
