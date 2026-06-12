// Write a program to Write function for
// Fibonacci

#include <stdio.h>

void Fibonacci(int num ){
    int a = 0, b = 1, c;
    for (int i = 1; i <= num; i++)
    {
        printf("%d, ",a);

        c = a + b;
        a = b;
        b = c;
    }
}

int main(){
    int num;
    printf("Enter number = ");
    scanf("%d",&num);

    printf("Fibonacci series = ");
    Fibonacci(num);

    return 0;
}