// Write a program to Find product of digits

#include <stdio.h>


int main(){
    int num, product =1;

    printf("Enter the number to find product of digits ");
    scanf("%d",&num);
    int n = num;

    while (num != 0)
    {
        product = product * (num%10);
        num = num/10;

    }
    printf(" product of the digits of %d is = %d",n,product);
    
    return 0;
}