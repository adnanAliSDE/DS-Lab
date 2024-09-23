#include <stdio.h>

int main()
{
    printf("Calculator Using Switch\n\n");
    int operation;
    float num1, num2, result;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Remainder\n\n");
    printf("Enter the code of operation you want to perform: ");
    scanf("%d", &operation);
    printf("Enter number 1: ");
    scanf("%f", &num1);
    printf("Enter number 2: ");
    scanf("%f", &num2);

    switch (operation)
    {
    case 1:
        result = num1 + num2;
        break;

    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = num1 / num2;
        break;
    default:
        printf("Invalid Operation Code\n");
        break;
    }

    printf("Result: %f", result);
    return 0;
}