// Write a program to Reverse a number. 
#include <stdio.h>

int main(){
    long long num, rev = 0; // long long for value larger than 2**31
    printf("enter the number = ");
    scanf("%lld",&num);
    

    while (num != 0)
    {
        rev = (rev*10) + (num%10);
        num = num/10;
    }
    printf("Reverse of the number is = %lld",rev);

    return 0;
}