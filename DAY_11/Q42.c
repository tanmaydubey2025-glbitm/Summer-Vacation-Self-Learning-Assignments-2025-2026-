// Write a program to Write function to find
// maximum.

#include <stdio.h>

int max(int a, int b){
    if (a > b)
    {
       return a;
    }else{
        return b;
    }
    
}

int main(){
    int n1,n2;
    printf("Enter first number = ");
    scanf("%d",&n1);
    printf("Enter second number = ");
    scanf("%d",&n2);

    int result = max(n1,n2);
    printf("maximum number = %d",result);
    
    return 0;
}