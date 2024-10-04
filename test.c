#include <stdio.h>

void main()
{
    char a = 'A';
    int name[6] = {'A', 'd', 'n', 'a', 'n', '\0'};
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", name[i]);
    }
}