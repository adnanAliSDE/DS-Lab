/*
Print the following pattern
1
11
121
1331

*/

#include <stdio.h>
void main(){
    int max_range;
    printf("Enter the size of side of square pattern: ");
    scanf("%d",&max_range);
     max_range-=1;
    
    printf("Your pattern here: \n\n");

    for(int i=0;i<=max_range;i++){
     for(int j=0;j<=max_range;j++)
     {
        if(i==j||j==max_range-i )
        {
        printf("$ ");   
        } 
        else if(i==0||j==0||i==max_range||j==max_range)
        {
        printf("* ");
        }
        else
        {
        printf("  ");
        }
    }
    printf("\n");
    }   
    }