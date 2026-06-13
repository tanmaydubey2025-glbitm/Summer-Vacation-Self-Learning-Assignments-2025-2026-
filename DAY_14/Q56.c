// Write a program to Find duplicates in array

#include <stdio.h>

int main(){
    int Arr[] = {1,2,3,2,3,4,1,6,2,3,2,4,2,2,4,};
    int n = 15;

    for (int i = 0; i < n; i++)
    {
        printf("%d, ",Arr[i]);
    }
    printf("\n");
    

   
    for (int i = 0; i < n; i++)
    {
        int alreadyPrint = 0;

        for (int j = 0; j < i; j++)
        {
            if (Arr[i] == Arr[j])
            {
                alreadyPrint = 1;
                break;
            }
            
        }

        if (alreadyPrint)
        {
            continue;
        }
        for (int j = i+1; j < n; j++)
        {
            if (Arr[i] == Arr[j])
            {
                printf("%d, ",Arr[i]);
                break;
            }
            
        }
        
    }
    

    return 0;
}