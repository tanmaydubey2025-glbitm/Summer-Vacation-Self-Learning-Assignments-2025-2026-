// Write a program to Reverse array

#include <stdio.h>

int main(){
    int Arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        printf("%d, ",Arr[i]);
    }
    printf(" \n");

    printf("Reversed array :- \n");
    for (int i = 0; i < n/2; i++) // n/2 beacuse for each loop, its fixing 2 elements;
    {
        int temp = Arr[i];
        Arr[i] = Arr[n - 1 -i];
        Arr[n - 1 -i] = temp;
    }

     for (int i = 0; i < n; i++)
    {
        printf("%d, ",Arr[i]);
    }

    return 0;
}