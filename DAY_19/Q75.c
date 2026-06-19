// Write a program to Transpose matrix. 

#include <stdio.h>
int main(){
    int A[10][10];

    int row,col;
    printf("Enter numbers of rows and columns: \n");
    scanf("%d %d",&row,&col);

    printf("Enter  elements of mattrix :- \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of matrix =\n");
    int C[10][10];
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < col; j++)
        {
            C[j][i] = A[i][j];
        }
        printf("\n");
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }


    return 0;
}