#include <stdio.h>

void main()
{

    printf("Program to find the maximum of three number using ladder if else\n\n");
    int n1, n2, n3;
    printf("Enter the values of the three numbers space separated: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3)
    {
        printf("First: %d is greatest", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("Second: %d is greatest", n2);
    }
    else if (n3 > n2 && n3 > n1)
    {
        printf("Third: %d is greatest", n3);
    }
    else
    {
        printf("All numbers are the same");
    }
}