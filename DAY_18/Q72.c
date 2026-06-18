// Write a program to Sort array in descending order.

#include <stdio.h>
int main(){
    int ARR[] = {1,3,5,2,9,3,7,4,8,4};
    int n = 10;

    printf("NON SORTED ARRAY:- \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ,",ARR[i]);
    }
    printf("\n");

    // sorting of array

    for (int i = 0; i < n-1 ; i++)
    {
        int Index = i;

        for (int j = i; j < n; j++)
        {
            if (ARR[j] > ARR[Index])
            {
                Index = j;
            }
            
        }

        int temp = ARR[i];
        ARR[i] = ARR[Index];
        ARR[Index] = temp;
        
    }

    printf("SORTED ARRAY DESCENDING ORDER:- \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ,",ARR[i]);
    }
    printf("\n");


    return 0;
}