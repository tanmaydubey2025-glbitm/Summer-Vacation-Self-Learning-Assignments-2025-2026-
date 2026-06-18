//Write a program to Binary search

#include <stdio.h>
int main(){
    // Binary search only work on sorted array
    int ARR[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n = 15;

    printf("SORTED ARRAY:- \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ,",ARR[i]);
    }
    printf("\n");

    int target;
    printf("Enter the target value:- \n");
    scanf("%d",&target);

    int low = 0;
    int high = n-1;
    while ( low <= high)
    {
        int mid_value = (low + high)/2;

        if (ARR[mid_value] == target)
        {
            printf("index of %d => %d",target,mid_value);
            break;
           
        }else if (ARR[mid_value] > target)
        {
            high = mid_value -1;
        }else{
            low = mid_value + 1;
        }
    }
    



    return 0;
}