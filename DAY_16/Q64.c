// Write a program to Remove duplicates from array

#include <stdio.h>
int main(){
    int ARR1[100];
    int n;
    printf("Enter number of eleme in array \n");
    scanf("%d",&n);

    printf("Enter elem of array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ARR1[i]);
    }
    printf("\n");

    printf("ARRAY WITH DUPLICATES\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",ARR1[i]);
    }
    printf("\n");

    int New_Arr[100];
    int New_size = 0;
    for (int i = 0; i < n; i++)
    {
        int found = 0;

        for (int j = 0; j < New_size; j++)
        {
            if (New_Arr[j] == ARR1[i])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            New_Arr[New_size] = ARR1[i];
            New_size++;
        }
        
    }

    printf("NEW ARRAY WITHOUT DUPLICATES:- \n");
    for (int i = 0; i < New_size; i++)
    {
        printf("%d, ",New_Arr[i]);
    }
    
    return 0;
}