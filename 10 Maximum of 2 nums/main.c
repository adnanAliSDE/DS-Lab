#include <stdio.h>

void main()
{
    int num1, num2, max;
    printf("Maximum of two numbers\n\n");
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }
    printf("Maximum of %d and %d = %d", num1, num2, max);
}