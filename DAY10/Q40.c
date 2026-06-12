// Write a program to Print character pyramid 

#include <stdio.h>

int main(){
    int rows;
    printf("Enter numbers of rows = ");
    scanf("%d",&rows);

    for (int i = 1 ; i <= rows; i++)
    {
        for (int j = rows ; j > i ; j--)
        {
            printf(" ");
        }

        for (int j = 0 ; j < i; j++)
        {
            int num = 65 + j;
            char chr = (char)num;
            printf("%c",chr);
        }

        for (int j = 1; j < i; j++)
        {
            int num = (65 + (i-(j+1)));
            char chr = (char)num;
            printf("%c",chr);
        }
        
        
        printf("\n");
    }
    

    return 0;
}