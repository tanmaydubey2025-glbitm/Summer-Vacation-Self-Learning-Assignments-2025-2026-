//Write a program to Find column-wise sum

#include <stdio.h>
int main(){
    int MAT[10][10];
    int row,col;
    printf("Enter number of row and columns: \n ");
    scanf("%d %d",&row,&col);
    printf("\n");
 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&MAT[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ",MAT[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += MAT[j][i];
        }
        printf("Sum of %d column = %d \n",(1+i),sum);
    }
    

    return 0;
}