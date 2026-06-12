// Write a program to Write function to find
// factorial.

#include <stdio.h>

int factorial(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }

    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);

    int result = factorial(n);
    printf("factorial of %d = %d",n,result);

    return 0;
}