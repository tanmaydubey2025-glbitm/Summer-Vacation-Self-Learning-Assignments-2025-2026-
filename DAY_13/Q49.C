// Write a program to Input and display array

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

    for (int i = 0; i < n; i++)
    {
        printf("%d, ",myArr[i]);
    }
    
    return 0;
}