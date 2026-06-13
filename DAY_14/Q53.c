// Write a program to Linear search. 

#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    for (int i = 0; i < 10; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\n");

    int num;
    printf("Enter the number to be searched in the array:- ");
    scanf("%d",&num);

    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if ( num == arr[i])
        {
            printf("index of %d is - %d ",num,i);
            found = 1;
        }
        
    }

    if (found == 0)
    {
        printf("%d is not present in the array",num);
    }
    
    
    return 0;
}