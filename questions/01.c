
// print the sum of: x-x**3/3!...

#include <stdio.h>
#include <math.h>

int factorial(int num);
void main()
{
    int x, n;
    printf("Enter x,y: ");
    scanf("%d, %d", &x, &n);
    long int sum;
    int sign, term;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sign = 1;
            term = 0;
        }
        else
        {
            term = pow(x, i) / factorial(i);
            sign = -1;
        }
        sum += sign * term;
    }
    printf("Sum: %d\n", sum);
}

int factorial(int n)
{
    int fact;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// fibbonaci series

#include <stdio.h>

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
}
