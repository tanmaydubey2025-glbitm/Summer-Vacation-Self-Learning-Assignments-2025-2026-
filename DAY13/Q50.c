// Write a program to Find sum and average of
// array

#include <stdio.h>

int main(){
    int myArr[50],n;
    printf("Enter the number of element in the array = ");
    scanf("%d",&n);
    printf("Enter the elements of the arrray : \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&myArr[i]);
    }

    // sum of elements
    int sum = 0 ;
    for (int i = 0; i < n; i++)
    {
       sum += myArr[i];
    }
    printf("Sum of elements = %d \n",sum);

    // average of array
    float average = (sum / n);
    printf("average of elements = %.2f \n",average);
    
    return 0;
}