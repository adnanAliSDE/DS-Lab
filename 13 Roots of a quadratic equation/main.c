#include <stdio.h>
#include <math.h>

void main()
{

    printf("Program to find the roots of a quadratic equation.\n\n");
    float a, b, c;
    printf("Enter the values of a,b,c constants of equation comma separated: ");
    scanf("%f, %f, %f", &a, &b, &c);
    float D = b * b - 4 * a * c;
    if (D < 0)
    {
        printf("Real solution of the equation does not exist");
    }
    else
    {
        float sol1 = (-b + sqrt(D)) / 2 * a;
        float sol2 = (-b - sqrt(D)) / 2 * a;
        printf("Solution 1: %f,Solution 2: %f", sol1, sol2);
    }
}