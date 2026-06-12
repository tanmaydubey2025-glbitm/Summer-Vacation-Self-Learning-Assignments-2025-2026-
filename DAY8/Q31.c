/*Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE.  */

#include <stdio.h>

int main(){
    int rows;
    printf("Enter number of rows = ");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int num = 65 + j;
            char chr = (char)num;

            printf("%c",chr);
        }
        printf("\n");
    }
    

    return 0;
}