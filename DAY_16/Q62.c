// Write a program to Find maximum frequency element

#include <stdio.h>

int main(){
    int Arr[] = {1,2,3,1,4,3,5,6,4,2,1,3,4,5,2,4,3,1,4,5};
    int n = 20;

    // printing org array
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",Arr[i]);
    }
    
    printf("\n");
    
    int maxFreq = 0;
    int maxElement = Arr[0];
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int done = 0;
        for (int j = 0; j < i; j++)
        {
            if (Arr[i] == Arr[j])
            {
                done = 1;
                break;
            }
        }

        if (done == 1)
        {
            continue;
        }
        
        for (int j = i  ; j < n; j++)
        {
            
            if (Arr[i] == Arr[j])
            {
                count++;
            }
            
        }

        if (maxFreq < count)
        {
            maxFreq = count;
            maxElement = Arr[i];
        }
        
    }

    printf(" maximum frequency element => %d \n", maxElement);
    printf(" frequency of %d => %d \n", maxElement,maxFreq);
    

    return 0;
}
