// Write a program to Find pair with given sum. 

#include <stdio.h>

int main(){
    int Arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    // elements present
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",Arr[i]);
    }
    printf("\n");

    int sum;
    printf("Enter the target sum: ");
    scanf("%d", &sum);

    int found = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = (i+1); j < n; j++)
        {
            if (Arr[i] + Arr[j] == sum)
            {
                printf("%d + %d = %d \n",Arr[i],Arr[j],sum);
                found = 1;
            }
            
        }
        
    }

    if (found == 0)
    {
        printf("Elements are not present to provide sum");
    }

    return 0;
}