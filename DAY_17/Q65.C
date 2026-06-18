// Write a program to Merge arrays

#include <stdio.h>

int main(){
    int Arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int n1 = 10;
    int Arr2[] = {11,12,13,14,15};
    int n2 = 5;

    printf("First array:- \n");
    for (int i = 0; i < n1; i++)
    {
       printf("%d, ",Arr1[i]);
    }
    printf("\n");

    printf("second array:- \n");
    for (int i = 0; i < n2; i++)
    {
       printf("%d, ",Arr2[i]);
    }
    printf("\n");
    
    int merged[100];

    // merged array 
    for (int i = 0; i < n1; i++)
    {
       merged[i] = Arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
       merged[n1 + i] = Arr2[i];
    }

    printf("Merged array:- \n");
    for (int i = 0; i < (n1 + n2); i++)
    {
       printf("%d, ",merged[i]);
    }

    return 0;
}