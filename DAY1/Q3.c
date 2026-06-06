//Write a program to Find factorial of a number
#include <stdio.h>

int factorial(int num){

    if (num == 0 || num == 1)
    {
        return 1;
    }else 
    {
        return num*factorial(num-1);
    }
    
}

int main(){
    int n;
    printf("Enter the number to print the factorial ");
    scanf("%d",&n);

    int result = factorial(n);
    printf("factorial of %d is = %d",n,result);

    return 0;
}