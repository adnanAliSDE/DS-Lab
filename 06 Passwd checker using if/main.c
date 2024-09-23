#include <stdio.h>

int PASSWD = 244921;
int main()
{
    int input;
    printf("Enter your password: ");
    scanf("%d", &input);
    if (input == PASSWD)
    {
        printf("Login Success\n");
    }
    printf("Invalid Password\n");

    return 0;
}