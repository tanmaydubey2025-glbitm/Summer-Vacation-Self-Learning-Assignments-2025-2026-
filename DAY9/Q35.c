/* Write a program to Print repeated character
pattern.
A
BB
CCC
DDDD
EEEEE      */

#include <stdio.h>

int main(){
    int rows;
    printf("Enter the numbers of rows = ");
    scanf("%d",&rows);

    for (int i = 0; i < rows; i++)
    {
        int num = 65 + i;
        char chr = (char)num;
        for (int j = 0; j <= i; j++)
        {
            printf("%c",chr);
        }
        printf("\n");
    }
    

    return 0;
}