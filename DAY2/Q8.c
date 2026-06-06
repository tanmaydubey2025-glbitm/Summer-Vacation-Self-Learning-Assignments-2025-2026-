// Write a program to Check whether a number is palindrome.

#include <stdio.h>

int main(){
    int num, sum = 0;
    printf("Enter the number");
    scanf("%d",&num);
    int anotherNum = num;

    while (num != 0)
    {
        sum = (sum*10)+ (num%10);
        num = num/10;
    }
    
    if (anotherNum==sum)
    {
        printf("THE ENTERED NUMBER IS PALINDROME ");
    }else{

        printf("THE ENTERED NUMBER IS NOT A PALINDROME ");

    }

    
    return 0;
}