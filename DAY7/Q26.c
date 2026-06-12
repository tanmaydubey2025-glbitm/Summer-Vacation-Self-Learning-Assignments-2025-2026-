// Write a program to Recursive Fibonacci

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
    printf("Enter the number for Fibonacci series = ");
    scanf("%d",&Num);

    for (int i = 0; i <= Num; i++)
    {
        printf("%d ",Fibonacci(i));
    }
    

    return 0;
}