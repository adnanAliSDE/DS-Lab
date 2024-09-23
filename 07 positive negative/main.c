// Program to check the number is positive or negative.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number you want to check: ");
    scanf("%d", num);
    if (num < 0)
    {
        printf("Your number %d is negative.");
    }
    else if (num == 0)
    {
        printf("Your number %d is neither positive nor negative.");
    }
    else
    {
        printf("Your number %d is  positive.");
    }

    return 0;
}