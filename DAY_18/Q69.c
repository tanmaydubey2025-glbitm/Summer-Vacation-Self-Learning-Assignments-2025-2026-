// Write a program to Bubble sort


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

    //sorting of array;
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - 1 - i); j++)
        {
            if (ARR[j] > ARR[j+1])
            {
                int temp = ARR[j];
                ARR[j] = ARR[j+1];
                ARR[j+1] = temp;
            }
            
        }
        
    }
    printf("SORTED ARRAY:- \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ,",ARR[i]);
    }
    

    return 0;
}