// Write a program to Multiply matrices

#include <stdio.h>
int main(){
    int A[10][10], B[10][10];

    int N,M,P;
    printf("Enter numbers of rows and columns OF MATRIX A: \n");
    scanf("%d %d",&N,&M);

    printf("Enter  elements of A :- \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }

    printf("Enter numbers of columns OF MATRIX B: \n");
    scanf("%d",&P);

     printf("Enter  elements of B :- \n");
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            scanf("%d",&B[i][j]);
        }
        
    } 

    int C[10][10];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            C[i][j]= 0;
        }
        
    } 
        
    for (int i = 0; i < N; i++)
    {
        for (int j= 0; j < P; j++)
        {
            for (int k = 0; k < M; k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
            
        }
        
    }

    printf("multiple of a*b: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            printf("%d  ",C[i][j]);
        }
        printf("\n");
        
    }

    

    return 0;
}