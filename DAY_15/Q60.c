// Write a program to Move zeroes to end

#include <stdio.h>

int main(){
    int Arr[] = {1,0,3,0,5,6,0,8,0,10};
    int n = 10;

    printf("Original array :- \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",Arr[i]);
    }

    int index = 0;
    for (int i = 0; i < n; i++)
    {

        if (Arr[i] != 0)
        {
           Arr[index] = Arr[i];
           index++;
        }
    }

    for (int i = (index ) ; i < n; i++)
    {
        Arr[i] = 0;
    }
    
    
    printf(" \n");
    printf("Move zeroes to end :- \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",Arr[i]);
    }

    return 0;
}