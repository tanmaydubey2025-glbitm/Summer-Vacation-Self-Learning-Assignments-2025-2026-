// Write a program to Print reverse pyramid

#include <stdio.h>

int main(){
    int rows;
    printf("Enter numbers of rows = ");
    scanf("%d",&rows);

    for (int i = i; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }

        for (int j = rows ; j >= i; j--)
        {
            printf("*");
        }

        for (int j = rows ; j >= i+1; j--)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}