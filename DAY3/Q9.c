// Write a program to Check whether a number is prime

#include <stdio.h>

int main(){
    int  num, isPrime = 1;
    printf("Enter the number = ");
    scanf("%d",&num);


    if (num<=1)
    {
        isPrime =0;
    }else{
        for (int i = 2; i*i <= num; i++)
    {
        if(num%i == 0){
            isPrime = 0;
            break;
        }
    }
    }
    
    if (isPrime == 1)
    {
        printf("entered number is a prime number");
    }else{
        printf("Entered number is not a prime number");
    }
    

    return 0;
}