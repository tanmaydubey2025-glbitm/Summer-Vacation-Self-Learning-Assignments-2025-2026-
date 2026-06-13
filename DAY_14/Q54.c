// Write a program to Frequency of an element

#include <stdio.h>

int main(){
    int Arr[] = {1,2,3,2,3,4,5,6,2,3,2,4,2,2,4,};
    int n = 15;

    for (int i = 0; i < n; i++)
    {
        printf("%d, ",Arr[i]);
    }
    printf("\n");

    int num;
    printf("Enter the number to find it's Frequency: ");
    scanf("%d",&num);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (Arr[i] == num)
        {
            count++;
        }
    }

    printf("Frequency of %d => %d",num,count);
    
    return 0;
}