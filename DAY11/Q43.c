// Write a program to Write function to check
// prime.

#include <stdio.h>

void prime(int n ){

    if (n < 2)
    {
        printf("NOT A PRIME NUMBER");
    }
    
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("NOT A PRIME NUMBER");
            return;
        }else
        {
            printf("A PRIME NUMBER");
        }
        
    }
    
}

int main(){
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);

    prime(n);

    return 0;
}