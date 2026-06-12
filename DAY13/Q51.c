// Write a program to Find largest and smallest
// element.

#include <stdio.h>

int main(){
    int Arr[100],n;
    printf("Enter number of elements = ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&Arr[i]);
    }

    int largest = Arr[0];
    int smallest = Arr[0];

    for (int i = 0; i < n; i++)
    {
        if (largest < Arr[i])
        {
           largest =Arr[i];
        }

        if (smallest > Arr[i])
        {
            smallest = Arr[i];
        }
        
    }
    
    printf("Largest element = %d \n",largest);
    printf("Smallest element = %d \n",smallest);
    
    

    return 0;
}