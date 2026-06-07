// Write a program to Find nth Fibonacci term.

#include <stdio.h>

#include <stdio.h>

int Fibonacci(int n){
    if( n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

int main(){
    int Num;
    printf("Enter the number for nth Fibonacci term = ");
    scanf("%d",&Num);

        printf("%d ",Fibonacci(Num));
    
    return 0;
}