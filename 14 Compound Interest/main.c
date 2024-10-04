#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest;

    // Input values
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period in years: ");
    scanf("%f", &time);

    // Calculate compound interest
    compoundInterest = principal * pow((1 + rate / 100), time);
    printf("Compound Interest: %f\n", compoundInterest);

    return 0;
}