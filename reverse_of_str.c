#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char s1[] = "Rocket Science also known as aerospace engineering is the field in which we make aircrafts and spacecrafts.";
    printf("Len: %d, Size: %lu\n", strlen(s1), sizeof s1);
    char *rev = malloc(sizeof s1);
    int last_index = strlen(s1) - 1;
    for (int i = last_index; i >= 0; i--)
    {
        rev[last_index - i] = s1[i];
        printf("%c", s1[i]);
    }
    // rev[last_index + 1] = '\0';
    printf("\n%p\n", rev);
    free(rev);
    printf("\n%p\n", rev);
    rev = NULL;
    printf("\n%p\n", rev);
}