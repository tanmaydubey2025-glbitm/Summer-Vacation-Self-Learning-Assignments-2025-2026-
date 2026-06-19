// Write a program to Find diagonal sum

#include <stdio.h>
int main(){
    int A[10][10];

    int n;
    printf("Enter the order of the square matrix: \n");
    scanf("%d",&n);

    printf("Enter  elements of mattrix :- \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Square matrix:= \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }

    // sum of diagonals
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j < n; j++)
        // {
        //     if (j == i)
        //     {
        //         sum += A[i][j];
        //     }
            
        // } we dont need inner loop 

        sum += A[i][i];
        
    }
    
    printf("sum of diagonals = %d",sum);
    
    return 0;
}