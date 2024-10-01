#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char s1[] = "My Name Is Adnan";
    char *rev = malloc(sizeof s1);
    int last_index = strlen(s1) - 1;
    rev[last_index] = '\0';
    for (int i = last_index; i >= 0; i--)
    {
        rev[last_index - i] = s1[i];
    }
    printf("%s\n", rev);
}