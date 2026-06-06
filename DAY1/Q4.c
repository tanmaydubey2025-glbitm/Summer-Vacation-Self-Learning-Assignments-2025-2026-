//Write a program to Count digits in a number. 

#include <stdio.h>

int main(){
    int num,sum = 0;
    printf("Enter the number to find the number of the digit of the number = ");
    scanf("%d",&num);
    int n=num;

    for (int i = 0; i < num; i++)
    {
        num= num/10;
        sum++;
    }
    
    printf("number of digits of %d is = %d",n, sum);

    return 0;
}