// Write a program to Rotate array right

#include <stdio.h>

int main(){
    int Arr[] = {1,2,3,4,5,6,7,8,9,0};
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        printf("%d, ",Arr[i]);
    }
    printf(" \n");
    

    int temp = Arr[n-1];
    for (int i = 0; i < n-1; i++)
    {
        Arr[n-1-i] = Arr[n-2-i];
    }
    Arr[0] = temp;
    

    for (int i = 0; i < n; i++)
    {
        printf("%d, ",Arr[i]);
    }

    return 0;
} 