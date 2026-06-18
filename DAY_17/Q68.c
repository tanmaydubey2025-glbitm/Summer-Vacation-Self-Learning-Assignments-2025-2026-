// Write a program to Find common elements. 

#include <stdio.h>
int main(){
    int ARR1[100],ARR2[100];
    int n1,n2;
    printf("Enter number of elem in 1st and 2nd array \n");
    scanf("%d %d",&n1,&n2);

    printf("Enter elem of 1st array \n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&ARR1[i]);
    }
    printf("\n");

    printf("Enter elem of 2st array \n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&ARR2[i]);
    }
    printf("\n");

    int comm[100];
    int comm_size = 0;
    for (int i = 0; i < n1; i++)
    {
        int found = 0;
        for (int j = 0; j < n2; j++)
        {
            if (ARR1[i] == ARR2[j])
            {
                found = 1;
            }
            
        }

        if (found == 1)
        {
            comm[comm_size++] = ARR1[i];
        }
        
    }
    
    printf("common elements:- \n");
    for (int i = 0; i < comm_size; i++)
    {
        printf("%d, ",comm[i]);
    }
    
    return 0;
}