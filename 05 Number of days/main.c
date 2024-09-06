#include <stdio.h>

int main(){
    int input_days,months,days;
    printf("Number of days you want to convert: ");
    scanf("%d",&input_days);
    months=input_days/30;
    days=input_days%30;
    printf("%d Days = %d months,%d days.",input_days,months,days);
    return 0;
}