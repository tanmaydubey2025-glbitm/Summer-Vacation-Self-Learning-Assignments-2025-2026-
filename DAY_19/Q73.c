// Write a program to Add matrices

#include <stdio.h>
int main(){
    int A[10][10], B[10][10];

    int row,col;
    printf("Enter numbers of rows and columns: \n");
    scanf("%d %d",&row,&col);

    printf("Enter  elements of A :- \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }

     printf("Enter  elements of B :- \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&B[i][j]);
        }
        
    }
    

    //adding
    int C[10][10];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        
    }

    printf("sum of matrices = \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}