#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Your number %d is Even", num);
    }
    else
    {
        printf("Your number %d is Odd", num);
    }

    return 0;
}