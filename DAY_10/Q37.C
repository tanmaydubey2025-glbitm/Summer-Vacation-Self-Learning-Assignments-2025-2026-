// Write a program to Print star pyramid

#include <stdio.h>

int main(){
    int rows;
    printf("Enter numbers of rows = ");
    scanf("%d",&rows);

    for (int i = 1; i <= rows ; i++)
    {
        for (int j = rows ; j >= i; j--)
        {
            printf(" ");
        }

        for (int j = 1 ; j <= i; j++)
        {
            printf("*");
        }


        for (int j = 2 ; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}