// Write a program to Recursive factorial

#include <stdio.h>

int factorial(int n){
    if (n == 0 || n == 1 ){
        return 1;
    }else
    {
        return n * factorial(n-1);
    }
}

int main(){
    int Num;
    printf("enter the number = ");
    scanf("%d",&Num);

    int result = factorial(Num);
    printf("Factorial of %d = %d",Num,result);
    
    return 0;
}