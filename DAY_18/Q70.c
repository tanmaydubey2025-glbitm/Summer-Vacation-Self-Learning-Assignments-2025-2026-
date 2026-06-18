// Write a program to Selection sort

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
        int minIndex = i;

        for (int j = i; j < n; j++)
        {
            if (ARR[j] < ARR[minIndex])
            {
                minIndex = j;
            }
            
        }

        int temp = ARR[i];
        ARR[i] = ARR[minIndex];
        ARR[minIndex] = temp;
        
    }

    printf("SORTED ARRAY:- \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ,",ARR[i]);
    }
    printf("\n");


    return 0;
}