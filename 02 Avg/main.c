#include <stdio.h>

int main(){
    float a,b,c;
    printf("Number 1: ");
    scanf("%f",&a);
    printf("Number 2: ");
    scanf("%f",&b);
    printf("Number 3: ");
    scanf("%f",&c);
    float avg=(a+b+c)/3;
    printf("Average of %f, %f, %f =%f",a,b,c,avg);
    return 0;
}