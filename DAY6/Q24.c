// Write a program to Find x^n without pow()

#include <stdio.h>

int main (){
    int x,pow;
    printf("Enter the number = ");
    scanf("%d",&x);
     printf("Enter the power = ");
    scanf("%d",&pow);

    int result = 1;
    for (int i = 1; i <= pow; i++)
    {
       result = result * x;
    }

    printf("%d ^ %d = %d",x,pow,result);
    
    
    return 0;
}