// Simple Interest Calculator
#include <stdio.h>

int main()
{
    float p, r, t, si;
    printf("Enter the principal: ");
    scanf("%d", &p);
    printf("Enter the rate: ");
    scanf("%d", &r);
    printf("Enter the time: ");
    scanf("%d", &t);
    si=(p*r*t)/100;
    printf("Simple Interest = %d",si);
    return 0;
}