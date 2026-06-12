/*Write a program to Print reverse star pattern.
*****
****
***
**
*            */

#include <stdio.h>

int main(){
    int rows;
    printf("Enter the number the rows = ");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}