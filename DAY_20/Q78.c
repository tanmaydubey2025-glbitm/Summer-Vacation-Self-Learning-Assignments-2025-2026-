// Write a program to Check symmetric matrix

#include <stdio.h>
int main(){
    int MAT[10][10];
    int row,col;
    printf("Enter number of row and columns: \n ");
    scanf("%d %d",&row,&col);
    printf("\n");

    if (row != col)
    {
        printf("the matrix is not symmetric");

        return 0;
    }
    
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

    int A[10][10];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           A[j][i] = MAT[i][j]; 
        }
        
    }

    int symmetry = 1;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
           if (A[i][j] != MAT[i][j])
           {
            symmetry = 0;
            break;
           }
           
        }
    }

    if (symmetry == 1)
    {
        printf("the matrix is symmetric");
    }else
    {
        printf("the matrix is not symmetric");
    }
    
    return 0;
}