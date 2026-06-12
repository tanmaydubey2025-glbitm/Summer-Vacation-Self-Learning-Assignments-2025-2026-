/*
    Write a program to Print number pyramid.
    1
   121
  12321
 1234321
123454321   */

#include <stdio.h>

int main(){
    int rows;
    printf("Enter numbers of rows = ");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j > i; j--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        
        for (int j = 1 ; j < i ; j++)
        {
            int num = (i - j);
            printf("%d",num);
        }
        
        
        printf("\n");
    }
    

    return 0;
}