/*
Print the following pattern
$ * * * $
* $   $ *
*   $   *
* $   $ *
$ * * * $

*/

#include <stdio.h>
void main(){
    int side;
    printf("Enter the size of side of square pattern: ");
    scanf("%d",&side);
    side-=1;
    
    printf("Your pattern here: \n\n");

    for(int i=0;i<=side;i++){
     for(int j=0;j<=side;j++)
     {
        if(i==j||j==side-i )
        {
        printf("$ ");   
        } 
        else if(i==0||j==0||i==side||j==side)
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