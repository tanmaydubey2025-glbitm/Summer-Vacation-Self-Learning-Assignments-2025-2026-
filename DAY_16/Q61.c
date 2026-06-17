// Write a program to Find missing number in array

#include <stdio.h>

int main(){
    int ARR[] = {1,3,5,8,7,9,10};
    int n = 7;
    
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",ARR[i]);
    }
    printf("\n");

    // to find missing number
    int num;
    printf("Enter the maximum number (N): ");
    scanf("%d",&num);
    
    printf("MISSING NUMBERS:- \n");
    for (int i = 1; i <= num; i++)
    {
         int found = 0;
        for (int j = 0; j < n; j++)
        {
            
            if (i == ARR[j])
            {
                found = 1;
                break;
            }
            
        }
        
        if (found == 0)
        {
            printf("%d, ",i);
        }
        
    }
    
    
    return 0;
}