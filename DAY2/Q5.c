//Write a program to Find sum of digits of a number

#include <stdio.h>

int main (){
    int num, sum = 0;
    printf("Enter the number to find the sum of digits \n ");
    scanf("%d",&num);
    int n = num;

    while (num !=0)
    {
        sum = sum + (num%10);
        num = num/10;
    }

    printf("sum of digits of %d is = %d",n,sum);
    
    return 0 ;
}