#include <stdio.h>

int main() {
 int input;
 printf("Enter the number: ");
 scanf("%d",&input);
 for (int i=2;i<=input;i++){
    if (input%i==0)
    {
        if (i==input)
        {
        printf("The number is  prime");
        } else{
        printf("The number is  composite");
        }
        break;
    } 
 }
 return 0;
}